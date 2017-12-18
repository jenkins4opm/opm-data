/*
 Copyright 2016  Statoil ASA.

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

#ifndef OPM_JFUNC_HPP_
#define OPM_JFUNC_HPP_

#include <opm/parser/eclipse/Deck/Deck.hpp>


namespace Opm {

class JFunc
{
public:

    enum class Flag { BOTH, WATER, GAS };
    enum class Direction { XY, X, Y, Z };

    explicit JFunc(const Deck& deck);
    double alphaFactor() const;
    double betaFactor() const;
    double goSurfaceTension() const;
    double owSurfaceTension() const;
    const Flag& flag() const;
    const Direction& direction() const;
    operator bool() const { return m_exists; }

private:
    Flag       m_flag;             // JFUNC flag: WATER, GAS, or BOTH.  Default BOTH
    double     m_owSurfaceTension; // oil-wat surface tension.  Required if flag is BOTH or WATER
    double     m_goSurfaceTension; // gas-oil surface tension.  Required if flag is BOTH or GAS
    double     m_alphaFactor;      // alternative porosity term. Default 0.5
    double     m_betaFactor;       // alternative permeability term. Default 0.5
    Direction  m_direction;        // XY, X, Y, Z.  Default XY
    const bool m_exists;         // will be true if JFunc is specified in the deck
};
} // Opm::

#endif /* OPM_JFUNC_HPP_ */
