#ifndef PARSER_KEYWORDS_H_HPP
#define PARSER_KEYWORDS_H_HPP
#include <opm/parser/eclipse/Parser/ParserKeyword.hpp>
namespace Opm {
namespace ParserKeywords {

   class HEATCR : public ParserKeyword {
   public:
       HEATCR();
       static const std::string keywordName;

       class data {
       public:
           static const std::string itemName;
       };
   };



   class HEATCRT : public ParserKeyword {
   public:
       HEATCRT();
       static const std::string keywordName;

       class data {
       public:
           static const std::string itemName;
       };
   };



}
}
#endif
