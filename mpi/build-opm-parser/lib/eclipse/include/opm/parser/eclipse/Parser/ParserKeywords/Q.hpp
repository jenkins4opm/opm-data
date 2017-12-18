#ifndef PARSER_KEYWORDS_Q_HPP
#define PARSER_KEYWORDS_Q_HPP
#include <opm/parser/eclipse/Parser/ParserKeyword.hpp>
namespace Opm {
namespace ParserKeywords {

   class QDRILL : public ParserKeyword {
   public:
       QDRILL();
       static const std::string keywordName;

       class WELL_NAME {
       public:
           static const std::string itemName;
       };
   };



}
}
#endif
