#ifndef PARSER_KEYWORDS_L_HPP
#define PARSER_KEYWORDS_L_HPP
#include <opm/parser/eclipse/Parser/ParserKeyword.hpp>
namespace Opm {
namespace ParserKeywords {

   class LAB : public ParserKeyword {
   public:
       LAB();
       static const std::string keywordName;
   };



   class LGR : public ParserKeyword {
   public:
       LGR();
       static const std::string keywordName;

       class MAXLGR {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAXCLS {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MCOARS {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAMALG {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MXLALG {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class LSTACK {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class INTERP {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class NCHCOR {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };
   };



   class LIFTOPT : public ParserKeyword {
   public:
       LIFTOPT();
       static const std::string keywordName;

       class INCREMENT_SIZE {
       public:
           static const std::string itemName;
       };

       class MIN_ECONOMIC_GRADIENT {
       public:
           static const std::string itemName;
       };

       class MIN_INTERVAL_BETWEEN_GAS_LIFT_OPTIMIZATIONS {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class OPTIMISE_GAS_LIFT {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };
   };



   class LIVEOIL : public ParserKeyword {
   public:
       LIVEOIL();
       static const std::string keywordName;
   };



}
}
#endif
