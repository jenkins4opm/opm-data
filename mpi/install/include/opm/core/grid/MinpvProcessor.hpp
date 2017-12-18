/*
  Copyright 2014 SINTEF ICT, Applied Mathematics.

  This file is part of the Open Porous Media project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OPM_MINPVPROCESSOR_HEADER_INCLUDED
#define OPM_MINPVPROCESSOR_HEADER_INCLUDED


#include <opm/grid/utility/ErrorMacros.hpp>
#include <array>


namespace Opm
{

    /// \brief Transform a corner-point grid ZCORN field to account for MINPV processing.
    class MinpvProcessor
    {
    public:
        /// \brief Create a processor.
        /// \param[in]   nx   logical cartesian number of cells in I-direction
        /// \param[in]   ny   logical cartesian number of cells in J-direction
        /// \param[in]   nz   logical cartesian number of cells in K-direction
        MinpvProcessor(const int nx, const int ny, const int nz);
        /// Change zcorn so that it respects the minpv property.
        /// \param[in]       pv       pore volumes of all logical cartesian cells
        /// \param[in]       minpv    minimum pore volume to accept a cell
        /// \param[in]       actnum   active cells, inactive cells are not considered
        /// \param[in]       mergeMinPVCells flag to determine whether cells below minpv
        /// should be included in the cell below
        /// \param[in, out]  zcorn    ZCORN array to be manipulated
        /// After processing, all cells that have lower pore volume than minpv
        /// will have the zcorn numbers changed so they are zero-thickness. Any
        /// cell below will be changed to include the deleted volume if mergeMinPCCells is true
        /// els the volume will be lost
        int process(const std::vector<double>& pv,
                    const double minpv,
                    const std::vector<int>& actnum,
                    const bool mergeMinPVCells,
                    double* zcorn) const;
    private:
        std::array<int,8> cornerIndices(const int i, const int j, const int k) const;
        std::array<double, 8> getCellZcorn(const int i, const int j, const int k, const double* z) const;
        void setCellZcorn(const int i, const int j, const int k, const std::array<double, 8>& cellz, double* z) const;
        std::array<int, 3> dims_;
        std::array<int, 3> delta_;
    };

    inline MinpvProcessor::MinpvProcessor(const int nx, const int ny, const int nz) :
        dims_( {{nx,ny,nz}} ),
        delta_( {{1 , 2*nx , 4*nx*ny}} )
    { }



    inline int MinpvProcessor::process(const std::vector<double>& pv,
                                        const double minpv,
                                        const std::vector<int>& actnum,
                                        const bool mergeMinPVCells,
                                        double* zcorn) const
    {
        // Algorithm:
        // 1. Process each column of cells (with same i and j
        //    coordinates) from top (low k) to bottom (high k).
        // 2. For each cell 'c' visited, check if its pore volume
        //    pv[c] is less than minpv.
        // 3. If below the minpv threshold, move the lower four
        //    zcorn associated with the cell c to coincide with
        //    the upper four (so it becomes degenerate). If mergeMinPVcells
        //    is true, the higher four zcorn associated with the cell below
        //    is moved to these values (so it gains the deleted volume).

        int cells_modified = 0;

        // Check for sane input sizes.
        const size_t log_size = dims_[0] * dims_[1] * dims_[2];
        if (pv.size() != log_size) {
            OPM_THROW(std::runtime_error, "Wrong size of PORV input, must have one element per logical cartesian cell.");
        }
        if (!actnum.empty() && actnum.size() != log_size) {
            OPM_THROW(std::runtime_error, "Wrong size of ACTNUM input, must have one element per logical cartesian cell.");
        }

        // Main loop.
        for (int kk = 0; kk < dims_[2]; ++kk) {
            for (int jj = 0; jj < dims_[1]; ++jj) {
                for (int ii = 0; ii < dims_[0]; ++ii) {
                    const int c = ii + dims_[0] * (jj + dims_[1] * kk);
                    if (pv[c] < minpv && (actnum.empty() || actnum[c])) {
                        // Move deeper (higher k) coordinates to lower k coordinates.
                        std::array<double, 8> cz = getCellZcorn(ii, jj, kk, zcorn);
                        for (int count = 0; count < 4; ++count) {
                            cz[count + 4] = cz[count];
                        }
                        setCellZcorn(ii, jj, kk, cz, zcorn);


                        // optionally add removed volume to the cell below.
                        if (mergeMinPVCells) {
                            // Check if there is a cell below.
                            if (pv[c] > 0.0 && kk < dims_[2] - 1) {
                                // Set lower k coordinates of cell below to upper cells's coordinates.
                                std::array<double, 8> cz_below = getCellZcorn(ii, jj, kk + 1, zcorn);
                                for (int count = 0; count < 4; ++count) {
                                    cz_below[count] = cz[count];
                                }
                                setCellZcorn(ii, jj, kk + 1, cz_below, zcorn);
                            }
                        }
                        ++cells_modified;
                    }
                }
            }
        }
        return cells_modified;
    }



    inline std::array<int,8> MinpvProcessor::cornerIndices(const int i, const int j, const int k) const
    {
        const int ix = 2*(i*delta_[0] + j*delta_[1] + k*delta_[2]);
        std::array<int, 8> ixs = {{ ix,                         ix + delta_[0],
                                    ix + delta_[1],             ix + delta_[1] + delta_[0],
                                    ix + delta_[2],             ix + delta_[2] + delta_[0],
                                    ix + delta_[2] + delta_[1], ix + delta_[2] + delta_[1] + delta_[0] }};

        return ixs;
    }



    // Returns the eight z-values associated with a given cell.
    // The ordering is such that i runs fastest. That is, with
    // L = low and H = high:
    // {LLL, HLL, LHL, HHL, LLH, HLH, LHH, HHH }.
    inline std::array<double, 8> MinpvProcessor::getCellZcorn(const int i, const int j, const int k, const double* z) const
    {
        const std::array<int, 8> ixs = cornerIndices(i, j, k);
        std::array<double, 8> cellz;
        for (int count = 0; count < 8; ++count) {
            cellz[count] = z[ixs[count]];
        }
        return cellz;
    }



    inline void MinpvProcessor::setCellZcorn(const int i, const int j, const int k, const std::array<double, 8>& cellz, double* z) const
    {
        const std::array<int, 8> ixs = cornerIndices(i, j, k);
        for (int count = 0; count < 8; ++count) {
            z[ixs[count]] = cellz[count];
        }
    }



} // namespace Opm

#endif // OPM_MINPVPROCESSOR_HEADER_INCLUDED
