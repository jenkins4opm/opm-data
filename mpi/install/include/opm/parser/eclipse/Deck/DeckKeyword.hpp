/*
  Copyright 2016 Statoil ASA.

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

#ifndef DECKKEYWORD_HPP
#define DECKKEYWORD_HPP

#include <string>
#include <vector>
#include <memory>

#include <opm/parser/eclipse/Deck/DeckRecord.hpp>

namespace Opm {
    class ParserKeyword;
    class DeckOutput;

    class DeckKeyword {
    public:
        typedef std::vector< DeckRecord >::const_iterator const_iterator;

        explicit DeckKeyword(const std::string& keywordName);
        DeckKeyword(const std::string& keywordName, bool knownKeyword);

        const std::string& name() const;
        void setFixedSize();
        void setLocation(const std::string& fileName, int lineNumber);
        const std::string& getFileName() const;
        int getLineNumber() const;

        size_t size() const;
        void addRecord(DeckRecord&& record);
        const DeckRecord& getRecord(size_t index) const;
        DeckRecord& getRecord(size_t index);
        const DeckRecord& getDataRecord() const;
        void setDataKeyword(bool isDataKeyword = true);
        bool isKnown() const;
        bool isDataKeyword() const;

        const std::vector<int>& getIntData() const;
        const std::vector<double>& getRawDoubleData() const;
        const std::vector<double>& getSIDoubleData() const;
        const std::vector<std::string>& getStringData() const;
        size_t getDataSize() const;
        void write( DeckOutput& output ) const;
        void write_data( DeckOutput& output ) const;
        void write_TITLE( DeckOutput& output ) const;

        template <class Keyword>
        bool isKeyword() const {
            if (Keyword::keywordName == m_keywordName)
                return true;
            else
                return false;
        }

        const_iterator begin() const;
        const_iterator end() const;
        bool equal_data(const DeckKeyword& other, bool cmp_default = false, bool cmp_numeric = true) const;
        bool equal(const DeckKeyword& other, bool cmp_default = false, bool cmp_numeric = true) const;
        bool operator==(const DeckKeyword& other) const;
        bool operator!=(const DeckKeyword& other) const;

        friend std::ostream& operator<<(std::ostream& os, const DeckKeyword& keyword);
    private:
        std::string m_keywordName;
        std::string m_fileName;
        int m_lineNumber;

        std::vector< DeckRecord > m_recordList;
        bool m_knownKeyword;
        bool m_isDataKeyword;
        bool m_slashTerminated;
    };
}

#endif  /* DECKKEYWORD_HPP */

