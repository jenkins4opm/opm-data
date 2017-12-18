/*
  Copyright 2015 SINTEF ICT, Applied Mathematics.

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

#ifndef OPM_COMPRESSEDTOCARTESIAN_HEADER_INCLUDED
#define OPM_COMPRESSEDTOCARTESIAN_HEADER_INCLUDED

#include <vector>

namespace Opm
{

    // Construct explicit mapping from active/compressed to logical cartesian
    // indices, either as given in global_cell or as { 0, 1, 2, ....} if null.
    // \param[in] num_cells    The number of active cells.
    // \param[in] global_cell  Either null, or an array of size num_cells.
    // \return                 A vector containing the same data as global_cell,
    //                         or the sequence { 0, 1, ... , num_cells - 1 } if
    //                         global_cell was null.
    std::vector<int> compressedToCartesian(const int num_cells,
                                           const int* global_cell);

} // namespace Opm

#endif // OPM_COMPRESSEDTOCARTESIAN_HEADER_INCLUDED
