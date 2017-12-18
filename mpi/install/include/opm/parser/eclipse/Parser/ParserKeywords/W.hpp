#ifndef PARSER_KEYWORDS_W_HPP
#define PARSER_KEYWORDS_W_HPP
#include <opm/parser/eclipse/Parser/ParserKeyword.hpp>
namespace Opm {
namespace ParserKeywords {

   class WARN : public ParserKeyword {
   public:
       WARN();
       static const std::string keywordName;
   };



   class WATDENT : public ParserKeyword {
   public:
       WATDENT();
       static const std::string keywordName;

       class REFERENCE_TEMPERATURE {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class EXPANSION_COEFF_LINEAR {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class EXPANSION_COEFF_QUADRATIC {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WATER : public ParserKeyword {
   public:
       WATER();
       static const std::string keywordName;
   };



   class WATVISCT : public ParserKeyword {
   public:
       WATVISCT();
       static const std::string keywordName;

       class DATA {
       public:
           static const std::string itemName;
       };
   };



   class WCONHIST : public ParserKeyword {
   public:
       WCONHIST();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class STATUS {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class CMODE {
       public:
           static const std::string itemName;
       };

       class ORAT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class WRAT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class GRAT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class VFPTable {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class Lift {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class THP {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class BHP {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class NGLRAT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WCONINJ : public ParserKeyword {
   public:
       WCONINJ();
       static const std::string keywordName;
   };



   class WCONINJE : public ParserKeyword {
   public:
       WCONINJE();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class TYPE {
       public:
           static const std::string itemName;
       };

       class STATUS {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class CMODE {
       public:
           static const std::string itemName;
       };

       class RATE {
       public:
           static const std::string itemName;
       };

       class RESV {
       public:
           static const std::string itemName;
       };

       class BHP {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class THP {
       public:
           static const std::string itemName;
       };

       class VFP_TABLE {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class VAPOIL_C {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class GAS_STEAM_RATIO {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class SURFACE_OIL_FRACTION {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class SURFACE_GAS_FRACTION {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class OIL_STEAM_RATIO {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WCONINJH : public ParserKeyword {
   public:
       WCONINJH();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class TYPE {
       public:
           static const std::string itemName;
       };

       class STATUS {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class RATE {
       public:
           static const std::string itemName;
       };

       class BHP {
       public:
           static const std::string itemName;
       };

       class THP {
       public:
           static const std::string itemName;
       };

       class VFP_TABLE {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class VAPOIL_C {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class SURFACE_OIL_FRACTION {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class SURFACE_WATER_FRACTION {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class SURFACE_GAS_FRACTION {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class CMODE {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };
   };



   class WCONPROD : public ParserKeyword {
   public:
       WCONPROD();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class STATUS {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class CMODE {
       public:
           static const std::string itemName;
       };

       class ORAT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class WRAT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class GRAT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class LRAT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class RESV {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class BHP {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class THP {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class VFP_TABLE {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class ALQ {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class E300_ITEM13 {
       public:
           static const std::string itemName;
       };

       class E300_ITEM14 {
       public:
           static const std::string itemName;
       };

       class E300_ITEM15 {
       public:
           static const std::string itemName;
       };

       class E300_ITEM16 {
       public:
           static const std::string itemName;
       };

       class E300_ITEM17 {
       public:
           static const std::string itemName;
       };

       class E300_ITEM18 {
       public:
           static const std::string itemName;
       };

       class E300_ITEM19 {
       public:
           static const std::string itemName;
       };

       class E300_ITEM20 {
       public:
           static const std::string itemName;
       };
   };



   class WDFACCOR : public ParserKeyword {
   public:
       WDFACCOR();
       static const std::string keywordName;

       class WELLNAME {
       public:
           static const std::string itemName;
       };

       class A {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class B {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class C {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WDRILTIM : public ParserKeyword {
   public:
       WDRILTIM();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class DRILL_TIME {
       public:
           static const std::string itemName;
       };

       class WORKOVER_CLOSE {
       public:
           static const std::string itemName;
       };

       class COMPARTMENT {
       public:
           static const std::string itemName;
       };
   };



   class WECON : public ParserKeyword {
   public:
       WECON();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class MIN_OIL_PRODUCTION {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class MIN_GAS_PRODUCTION {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class MAX_WATER_CUT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class MAX_GAS_OIL_RATIO {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class MAX_WATER_GAS_RATIO {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class WORKOVER_RATIO_LIMIT {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class END_RUN_FLAG {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class FOLLOW_ON_WELL {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class LIMITED_QUANTITY {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class SECOND_MAX_WATER_CUT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class WORKOVER_SECOND_WATER_CUT_LIMIT {
       public:
           static const std::string itemName;
       };

       class MAX_GAS_LIQUID_RATIO {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class MIN_LIQUID_PRODCUTION_RATE {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class MAX_TEMP {
       public:
           static const std::string itemName;
       };

       class MIN_RES_FLUID_RATE {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WEFAC : public ParserKeyword {
   public:
       WEFAC();
       static const std::string keywordName;

       class WELLNAME {
       public:
           static const std::string itemName;
       };

       class EFFICIENCY_FACTOR {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class EXTENDED_NETWORK_OPT {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };
   };



   class WELLDIMS : public ParserKeyword {
   public:
       WELLDIMS();
       static const std::string keywordName;

       class MAXWELLS {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAXCONN {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAXGROUPS {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_GROUPSIZE {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_STAGES {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_STREAMS {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_MIXTURES {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_SEPARATORS {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_MIXTURE_ITEMS {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_COMPLETION_X {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_WELLIST_PR_WELL {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_DYNAMIC_WELLIST {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_SECONDARY_WELLS {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };
   };



   class WELL_PROBE : public ParserKeyword {
   public:
       WELL_PROBE();
       static const std::string keywordName;

       class WELLS {
       public:
           static const std::string itemName;
       };
   };



   class WELOPEN : public ParserKeyword {
   public:
       WELOPEN();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class STATUS {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class I {
       public:
           static const std::string itemName;
       };

       class J {
       public:
           static const std::string itemName;
       };

       class K {
       public:
           static const std::string itemName;
       };

       class C1 {
       public:
           static const std::string itemName;
       };

       class C2 {
       public:
           static const std::string itemName;
       };
   };



   class WELPI : public ParserKeyword {
   public:
       WELPI();
       static const std::string keywordName;

       class WELL_NAME {
       public:
           static const std::string itemName;
       };

       class STEADY_STATE_PRODUCTIVITY_OR_INJECTIVITY_INDEX_VALUE {
       public:
           static const std::string itemName;
       };
   };



   class WELSEGS : public ParserKeyword {
   public:
       WELSEGS();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class DEPTH {
       public:
           static const std::string itemName;
       };

       class LENGTH {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class WELLBORE_VOLUME {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class INFO_TYPE {
       public:
           static const std::string itemName;
       };

       class PRESSURE_COMPONENTS {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class FLOW_MODEL {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class TOP_X {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class TOP_Y {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class SEGMENT1 {
       public:
           static const std::string itemName;
       };

       class SEGMENT2 {
       public:
           static const std::string itemName;
       };

       class BRANCH {
       public:
           static const std::string itemName;
       };

       class JOIN_SEGMENT {
       public:
           static const std::string itemName;
       };

       class SEGMENT_LENGTH {
       public:
           static const std::string itemName;
       };

       class DEPTH_CHANGE {
       public:
           static const std::string itemName;
       };

       class DIAMETER {
       public:
           static const std::string itemName;
       };

       class ROUGHNESS {
       public:
           static const std::string itemName;
       };

       class AREA {
       public:
           static const std::string itemName;
       };

       class VOLUME {
       public:
           static const std::string itemName;
       };

       class LENGTH_X {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class LENGTH_Y {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WELSPECS : public ParserKeyword {
   public:
       WELSPECS();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class GROUP {
       public:
           static const std::string itemName;
       };

       class HEAD_I {
       public:
           static const std::string itemName;
       };

       class HEAD_J {
       public:
           static const std::string itemName;
       };

       class REF_DEPTH {
       public:
           static const std::string itemName;
       };

       class PHASE {
       public:
           static const std::string itemName;
       };

       class D_RADIUS {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class INFLOW_EQ {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class AUTO_SHUTIN {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class CROSSFLOW {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class P_TABLE {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class DENSITY_CALC {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class FIP_REGION {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class FRONTSIM1 {
       public:
           static const std::string itemName;
       };

       class FRONTSIM2 {
       public:
           static const std::string itemName;
       };

       class well_model {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class POLYMER_TABLE {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };
   };



   class WELTARG : public ParserKeyword {
   public:
       WELTARG();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class CMODE {
       public:
           static const std::string itemName;
       };

       class NEW_VALUE {
       public:
           static const std::string itemName;
       };
   };



   class WGASPROD : public ParserKeyword {
   public:
       WGASPROD();
       static const std::string keywordName;

       class WELL_NAME {
       public:
           static const std::string itemName;
       };

       class INCREMENTAL_GAS_PRODUCTION_RATE {
       public:
           static const std::string itemName;
       };

       class MAX_INCREMENTS {
       public:
           static const std::string itemName;
       };
   };



   class WGRUPCON : public ParserKeyword {
   public:
       WGRUPCON();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class GROUP_CONTROLLED {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class GUIDE_RATE {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class PHASE {
       public:
           static const std::string itemName;
       };

       class SCALING_FACTOR {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WHISTCTL : public ParserKeyword {
   public:
       WHISTCTL();
       static const std::string keywordName;

       class CMODE {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class BPH_TERMINATE {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };
   };



   class WINJMULT : public ParserKeyword {
   public:
       WINJMULT();
       static const std::string keywordName;

       class WELL_NAME {
       public:
           static const std::string itemName;
       };

       class FRACTURING_PRESSURE {
       public:
           static const std::string itemName;
       };

       class MULTIPLIER_GRADIENT {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class MODE {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class I {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class J {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class K {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };
   };



   class WINJTEMP : public ParserKeyword {
   public:
       WINJTEMP();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class STEAM_QUALITY {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class TEMPERATURE {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class PRESSURE {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class ENTHALPY {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WLIFT : public ParserKeyword {
   public:
       WLIFT();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class TRIGGER_LIMIT {
       public:
           static const std::string itemName;
       };

       class TRIGGRE_PHASE {
       public:
           static const std::string itemName;
       };

       class NEW_VFP_TABLE {
       public:
           static const std::string itemName;
       };

       class NEW_ALQ_VALUE {
       public:
           static const std::string itemName;
       };

       class NEW_WEFAC {
       public:
           static const std::string itemName;
       };

       class WWCT_LIMIT {
       public:
           static const std::string itemName;
       };

       class NEW_THP_LIMIT {
       public:
           static const std::string itemName;
       };

       class WGOR_LIMIT {
       public:
           static const std::string itemName;
       };

       class ALQ_SHIFT {
       public:
           static const std::string itemName;
       };

       class THP_SHIFT {
       public:
           static const std::string itemName;
       };
   };



   class WLIMTOL : public ParserKeyword {
   public:
       WLIMTOL();
       static const std::string keywordName;

       class TOLERANCE_FRACTION {
       public:
           static const std::string itemName;
       };
   };



   class WORKLIM : public ParserKeyword {
   public:
       WORKLIM();
       static const std::string keywordName;

       class LIMIT {
       public:
           static const std::string itemName;
       };
   };



   class WORKTHP : public ParserKeyword {
   public:
       WORKTHP();
       static const std::string keywordName;

       class WELL_NAME {
       public:
           static const std::string itemName;
       };

       class WORK_OVER_PROCEDURE {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };
   };



   class WPAVE : public ParserKeyword {
   public:
       WPAVE();
       static const std::string keywordName;

       class WEIGTH_FACTOR1 {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class WEIGTH_FACTOR2 {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class DEPTH_CORRECTION {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class CONNECTION {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };
   };



   class WPAVEDEP : public ParserKeyword {
   public:
       WPAVEDEP();
       static const std::string keywordName;

       class WELLNAME {
       public:
           static const std::string itemName;
       };

       class REFDEPTH {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WPIMULT : public ParserKeyword {
   public:
       WPIMULT();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class WELLPI {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class I {
       public:
           static const std::string itemName;
       };

       class J {
       public:
           static const std::string itemName;
       };

       class K {
       public:
           static const std::string itemName;
       };

       class FIRST {
       public:
           static const std::string itemName;
       };

       class LAST {
       public:
           static const std::string itemName;
       };
   };



   class WPITAB : public ParserKeyword {
   public:
       WPITAB();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class PI {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WPOLYMER : public ParserKeyword {
   public:
       WPOLYMER();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class POLYMER_CONCENTRATION {
       public:
           static const std::string itemName;
       };

       class SALT_CONCENTRATION {
       public:
           static const std::string itemName;
       };

       class GROUP_POLYMER_CONCENTRATION {
       public:
           static const std::string itemName;
       };

       class GROUP_SALT_CONCENTRATION {
       public:
           static const std::string itemName;
       };
   };



   class WRFT : public ParserKeyword {
   public:
       WRFT();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };
   };



   class WRFTPLT : public ParserKeyword {
   public:
       WRFTPLT();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class OUTPUT_RFT {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class OUTPUT_PLT {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };

       class OUTPUT_SEGMENT {
       public:
           static const std::string itemName;
           static const std::string defaultValue;
       };
   };



   class WSEGDIMS : public ParserKeyword {
   public:
       WSEGDIMS();
       static const std::string keywordName;

       class NSWLMX {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class NSEGMX {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class NLBRMX {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class NCRDMX {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };
   };



   class WSEGITER : public ParserKeyword {
   public:
       WSEGITER();
       static const std::string keywordName;

       class MAX_WELL_ITERATIONS {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class MAX_TIMES_REDUCED {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class REDUCTION_FACTOR {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };

       class INCREASING_FACTOR {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WSOLVENT : public ParserKeyword {
   public:
       WSOLVENT();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class SOLVENT_FRACTION {
       public:
           static const std::string itemName;
       };
   };



   class WTEMP : public ParserKeyword {
   public:
       WTEMP();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class TEMP {
       public:
           static const std::string itemName;
       };
   };



   class WTEST : public ParserKeyword {
   public:
       WTEST();
       static const std::string keywordName;

       class well {
       public:
           static const std::string itemName;
       };

       class interval {
       public:
           static const std::string itemName;
       };

       class reason {
       public:
           static const std::string itemName;
       };

       class TEST_NUM {
       public:
           static const std::string itemName;
           static const int defaultValue;
       };

       class START_TIME {
       public:
           static const std::string itemName;
           static const double defaultValue;
       };
   };



   class WTRACER : public ParserKeyword {
   public:
       WTRACER();
       static const std::string keywordName;

       class WELL {
       public:
           static const std::string itemName;
       };

       class TRACER {
       public:
           static const std::string itemName;
       };

       class CONCENTRATION {
       public:
           static const std::string itemName;
       };

       class CUM_TRACER_FACTOR {
       public:
           static const std::string itemName;
       };

       class PRODUCTION_GROUP {
       public:
           static const std::string itemName;
       };
   };



}
}
#endif
