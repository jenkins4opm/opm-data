/*
  Copyright 2017 Statoil ASA.

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

#ifndef DECK_OUTPUT_HPP
#define DECK_OUTPUT_HPP

#include <ostream>
#include <string>
#include <cstddef>

namespace Opm {

    class DeckOutput {
    public:
        explicit DeckOutput(std::ostream& s);
        void stash_default( );

        void start_record( );
        void end_record( );
        void split_record();

        void start_keyword(const std::string& kw);
        void end_keyword(bool add_slash);

        void endl();
        void write_string(const std::string& s);
        template <typename T> void write(const T& value);

        std::string item_sep = " ";        // Separator between items on a row.
        size_t      columns = 16;          // The maximum number of columns on a record.
        std::string record_indent = "   "; // The indentation when starting a new line.
        std::string keyword_sep = "\n\n";  // The separation between keywords;
    private:
        std::ostream& os;
        size_t default_count;
        size_t row_count;
        bool record_on;

        template <typename T> void write_value(const T& value);
        void write_sep( );
    };
}

#endif

