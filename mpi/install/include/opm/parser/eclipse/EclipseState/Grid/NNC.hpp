/*
  Copyright 2015 IRIS
  
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

#ifndef OPM_PARSER_NNC_HPP
#define OPM_PARSER_NNC_HPP

#include <cstddef>
#include <memory>
#include <vector>

namespace Opm
{

struct NNCdata {
    size_t cell1;
    size_t cell2;
    double trans;
};

class Deck;

/// Represents non-neighboring connections (non-standard adjacencies).
/// This class is essentially a directed weighted graph.
class NNC
{
public:
    NNC() = default;

    /// Construct from input deck.
    explicit NNC(const Deck& deck);
    void addNNC(const size_t cell1, const size_t cell2, const double trans);
    const std::vector<NNCdata>& nncdata() const { return m_nnc; }
    size_t numNNC() const;
    bool hasNNC() const;

private:

    std::vector<NNCdata> m_nnc;
};


} // namespace Opm


#endif // OPM_PARSER_NNC_HPP
