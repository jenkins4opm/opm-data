#include <opm/parser/eclipse/Parser/ParserKeyword.hpp>
#include <opm/parser/eclipse/Parser/ParserItem.hpp>
#include <opm/parser/eclipse/Parser/ParserRecord.hpp>
#include <opm/parser/eclipse/Parser/Parser.hpp>
#include <opm/parser/eclipse/Parser/ParserKeywords.hpp>


namespace Opm {
namespace ParserKeywords {


void addDefaultKeywords(Parser& p);
void addDefaultKeywords(Parser& p) {
p.addKeyword< ParserKeywords::ACTDIMS >();
p.addKeyword< ParserKeywords::ACTION >();
p.addKeyword< ParserKeywords::ACTNUM >();
p.addKeyword< ParserKeywords::ADD >();
p.addKeyword< ParserKeywords::ADDREG >();
p.addKeyword< ParserKeywords::ADSALNOD >();
p.addKeyword< ParserKeywords::AITS >();
p.addKeyword< ParserKeywords::ALL >();
p.addKeyword< ParserKeywords::API >();
p.addKeyword< ParserKeywords::APIGROUP >();
p.addKeyword< ParserKeywords::AQUANCON >();
p.addKeyword< ParserKeywords::AQUCON >();
p.addKeyword< ParserKeywords::AQUCT >();
p.addKeyword< ParserKeywords::AQUDIMS >();
p.addKeyword< ParserKeywords::AQUFETP >();
p.addKeyword< ParserKeywords::AQUIFER_PROBE_ANALYTIC >();
p.addKeyword< ParserKeywords::AQUIFER_PROBE_NUMERIC >();
p.addKeyword< ParserKeywords::AQUNUM >();
p.addKeyword< ParserKeywords::AQUTAB >();
p.addKeyword< ParserKeywords::BLACKOIL >();
p.addKeyword< ParserKeywords::BLOCK_PROBE >();
p.addKeyword< ParserKeywords::BLOCK_PROBE300 >();
p.addKeyword< ParserKeywords::BOX >();
p.addKeyword< ParserKeywords::CECON >();
p.addKeyword< ParserKeywords::CIRCLE >();
p.addKeyword< ParserKeywords::COMPDAT >();
p.addKeyword< ParserKeywords::COMPIMB >();
p.addKeyword< ParserKeywords::COMPLUMP >();
p.addKeyword< ParserKeywords::COMPORD >();
p.addKeyword< ParserKeywords::COMPS >();
p.addKeyword< ParserKeywords::COMPSEGS >();
p.addKeyword< ParserKeywords::CONNECTION_PROBE >();
p.addKeyword< ParserKeywords::COORD >();
p.addKeyword< ParserKeywords::COORDSYS >();
p.addKeyword< ParserKeywords::COPY >();
p.addKeyword< ParserKeywords::COPYREG >();
p.addKeyword< ParserKeywords::CPR >();
p.addKeyword< ParserKeywords::CREF >();
p.addKeyword< ParserKeywords::CREFS >();
p.addKeyword< ParserKeywords::DATE >();
p.addKeyword< ParserKeywords::DATES >();
p.addKeyword< ParserKeywords::DATUM >();
p.addKeyword< ParserKeywords::DEADOIL >();
p.addKeyword< ParserKeywords::DEBUG_ >();
p.addKeyword< ParserKeywords::DENSITY >();
p.addKeyword< ParserKeywords::DEPTH >();
p.addKeyword< ParserKeywords::DEPTHZ >();
p.addKeyword< ParserKeywords::DIMENS >();
p.addKeyword< ParserKeywords::DISGAS >();
p.addKeyword< ParserKeywords::DR >();
p.addKeyword< ParserKeywords::DREF >();
p.addKeyword< ParserKeywords::DREFS >();
p.addKeyword< ParserKeywords::DRSDT >();
p.addKeyword< ParserKeywords::DRV >();
p.addKeyword< ParserKeywords::DRVDT >();
p.addKeyword< ParserKeywords::DTHETA >();
p.addKeyword< ParserKeywords::DTHETAV >();
p.addKeyword< ParserKeywords::DUMPFLUX >();
p.addKeyword< ParserKeywords::DX >();
p.addKeyword< ParserKeywords::DXV >();
p.addKeyword< ParserKeywords::DY >();
p.addKeyword< ParserKeywords::DYV >();
p.addKeyword< ParserKeywords::DZ >();
p.addKeyword< ParserKeywords::DZV >();
p.addKeyword< ParserKeywords::ECHO >();
p.addKeyword< ParserKeywords::EDIT >();
p.addKeyword< ParserKeywords::EDITNNC >();
p.addKeyword< ParserKeywords::EHYSTR >();
p.addKeyword< ParserKeywords::END >();
p.addKeyword< ParserKeywords::ENDACTIO >();
p.addKeyword< ParserKeywords::ENDBOX >();
p.addKeyword< ParserKeywords::ENDINC >();
p.addKeyword< ParserKeywords::ENDNUM >();
p.addKeyword< ParserKeywords::ENDPOINT_SPECIFIERS >();
p.addKeyword< ParserKeywords::ENDSCALE >();
p.addKeyword< ParserKeywords::ENDSKIP >();
p.addKeyword< ParserKeywords::ENKRVD >();
p.addKeyword< ParserKeywords::ENPTVD >();
p.addKeyword< ParserKeywords::EQLDIMS >();
p.addKeyword< ParserKeywords::EQLNUM >();
p.addKeyword< ParserKeywords::EQLOPTS >();
p.addKeyword< ParserKeywords::EQUALREG >();
p.addKeyword< ParserKeywords::EQUALS >();
p.addKeyword< ParserKeywords::EQUIL >();
p.addKeyword< ParserKeywords::EXCEL >();
p.addKeyword< ParserKeywords::EXTRAPMS >();
p.addKeyword< ParserKeywords::FAULTDIM >();
p.addKeyword< ParserKeywords::FAULTS >();
p.addKeyword< ParserKeywords::FIELD >();
p.addKeyword< ParserKeywords::FIELD_PROBE >();
p.addKeyword< ParserKeywords::FILLEPS >();
p.addKeyword< ParserKeywords::FIPOWG >();
p.addKeyword< ParserKeywords::FIP_PROBE >();
p.addKeyword< ParserKeywords::FLUXNUM >();
p.addKeyword< ParserKeywords::FMTIN >();
p.addKeyword< ParserKeywords::FMTOUT >();
p.addKeyword< ParserKeywords::FMWSET >();
p.addKeyword< ParserKeywords::FULLIMP >();
p.addKeyword< ParserKeywords::GAS >();
p.addKeyword< ParserKeywords::GASDENT >();
p.addKeyword< ParserKeywords::GASVISCT >();
p.addKeyword< ParserKeywords::GCOMPIDX >();
p.addKeyword< ParserKeywords::GCONINJE >();
p.addKeyword< ParserKeywords::GCONPROD >();
p.addKeyword< ParserKeywords::GDORIENT >();
p.addKeyword< ParserKeywords::GECON >();
p.addKeyword< ParserKeywords::GEFAC >();
p.addKeyword< ParserKeywords::GLIFTOPT >();
p.addKeyword< ParserKeywords::GMWSET >();
p.addKeyword< ParserKeywords::GRAVITY >();
p.addKeyword< ParserKeywords::GRID >();
p.addKeyword< ParserKeywords::GRIDFILE >();
p.addKeyword< ParserKeywords::GRIDOPTS >();
p.addKeyword< ParserKeywords::GRIDUNIT >();
p.addKeyword< ParserKeywords::GROUP_PROBE >();
p.addKeyword< ParserKeywords::GRUPNET >();
p.addKeyword< ParserKeywords::GRUPRIG >();
p.addKeyword< ParserKeywords::GRUPTREE >();
p.addKeyword< ParserKeywords::GSATPROD >();
p.addKeyword< ParserKeywords::HEATCR >();
p.addKeyword< ParserKeywords::HEATCRT >();
p.addKeyword< ParserKeywords::IMBNUM >();
p.addKeyword< ParserKeywords::IMKRVD >();
p.addKeyword< ParserKeywords::IMPES >();
p.addKeyword< ParserKeywords::IMPTVD >();
p.addKeyword< ParserKeywords::INCLUDE >();
p.addKeyword< ParserKeywords::INIT >();
p.addKeyword< ParserKeywords::INRAD >();
p.addKeyword< ParserKeywords::IPCG >();
p.addKeyword< ParserKeywords::IPCW >();
p.addKeyword< ParserKeywords::ISGCR >();
p.addKeyword< ParserKeywords::ISGL >();
p.addKeyword< ParserKeywords::ISGU >();
p.addKeyword< ParserKeywords::ISOGCR >();
p.addKeyword< ParserKeywords::ISOWCR >();
p.addKeyword< ParserKeywords::ISWCR >();
p.addKeyword< ParserKeywords::ISWL >();
p.addKeyword< ParserKeywords::ISWU >();
p.addKeyword< ParserKeywords::JFUNC >();
p.addKeyword< ParserKeywords::LAB >();
p.addKeyword< ParserKeywords::LGR >();
p.addKeyword< ParserKeywords::LIFTOPT >();
p.addKeyword< ParserKeywords::LIVEOIL >();
p.addKeyword< ParserKeywords::MAPAXES >();
p.addKeyword< ParserKeywords::MAPUNITS >();
p.addKeyword< ParserKeywords::MAXVALUE >();
p.addKeyword< ParserKeywords::MEMORY >();
p.addKeyword< ParserKeywords::MESSAGES >();
p.addKeyword< ParserKeywords::METRIC >();
p.addKeyword< ParserKeywords::MINPV >();
p.addKeyword< ParserKeywords::MINPVFIL >();
p.addKeyword< ParserKeywords::MINVALUE >();
p.addKeyword< ParserKeywords::MISC >();
p.addKeyword< ParserKeywords::MISCIBLE >();
p.addKeyword< ParserKeywords::MISCNUM >();
p.addKeyword< ParserKeywords::MONITOR >();
p.addKeyword< ParserKeywords::MSFN >();
p.addKeyword< ParserKeywords::MSGFILE >();
p.addKeyword< ParserKeywords::MULTFLT >();
p.addKeyword< ParserKeywords::MULTIPLY >();
p.addKeyword< ParserKeywords::MULTIREG >();
p.addKeyword< ParserKeywords::MULTNUM >();
p.addKeyword< ParserKeywords::MULTPV >();
p.addKeyword< ParserKeywords::MULTREGP >();
p.addKeyword< ParserKeywords::MULTREGT >();
p.addKeyword< ParserKeywords::MULT_XYZ >();
p.addKeyword< ParserKeywords::MW >();
p.addKeyword< ParserKeywords::MWS >();
p.addKeyword< ParserKeywords::NETBALAN >();
p.addKeyword< ParserKeywords::NEWTRAN >();
p.addKeyword< ParserKeywords::NEXTSTEP >();
p.addKeyword< ParserKeywords::NNC >();
p.addKeyword< ParserKeywords::NOCASC >();
p.addKeyword< ParserKeywords::NOECHO >();
p.addKeyword< ParserKeywords::NOGGF >();
p.addKeyword< ParserKeywords::NOGRAV >();
p.addKeyword< ParserKeywords::NOINSPEC >();
p.addKeyword< ParserKeywords::NOMONITO >();
p.addKeyword< ParserKeywords::NONNC >();
p.addKeyword< ParserKeywords::NORSSPEC >();
p.addKeyword< ParserKeywords::NOSIM >();
p.addKeyword< ParserKeywords::NOWARN >();
p.addKeyword< ParserKeywords::NSTACK >();
p.addKeyword< ParserKeywords::NTG >();
p.addKeyword< ParserKeywords::NUMRES >();
p.addKeyword< ParserKeywords::NUPCOL >();
p.addKeyword< ParserKeywords::OCOMPIDX >();
p.addKeyword< ParserKeywords::OIL >();
p.addKeyword< ParserKeywords::OILCOMPR >();
p.addKeyword< ParserKeywords::OILDENT >();
p.addKeyword< ParserKeywords::OILMW >();
p.addKeyword< ParserKeywords::OILVISCT >();
p.addKeyword< ParserKeywords::OILVTIM >();
p.addKeyword< ParserKeywords::OLDTRAN >();
p.addKeyword< ParserKeywords::OPERATE >();
p.addKeyword< ParserKeywords::OPERATER >();
p.addKeyword< ParserKeywords::OPERNUM >();
p.addKeyword< ParserKeywords::OPTIONS >();
p.addKeyword< ParserKeywords::OUTRAD >();
p.addKeyword< ParserKeywords::PARALLEL >();
p.addKeyword< ParserKeywords::PATHS >();
p.addKeyword< ParserKeywords::PBVD >();
p.addKeyword< ParserKeywords::PCG >();
p.addKeyword< ParserKeywords::PERFORMANCE_PROBE >();
p.addKeyword< ParserKeywords::PERMR >();
p.addKeyword< ParserKeywords::PERMTHT >();
p.addKeyword< ParserKeywords::PERMX >();
p.addKeyword< ParserKeywords::PERMXY >();
p.addKeyword< ParserKeywords::PERMY >();
p.addKeyword< ParserKeywords::PERMYZ >();
p.addKeyword< ParserKeywords::PERMZ >();
p.addKeyword< ParserKeywords::PERMZX >();
p.addKeyword< ParserKeywords::PIMTDIMS >();
p.addKeyword< ParserKeywords::PIMULTAB >();
p.addKeyword< ParserKeywords::PINCH >();
p.addKeyword< ParserKeywords::PLMIXNUM >();
p.addKeyword< ParserKeywords::PLMIXPAR >();
p.addKeyword< ParserKeywords::PLYADS >();
p.addKeyword< ParserKeywords::PLYADSS >();
p.addKeyword< ParserKeywords::PLYDHFLF >();
p.addKeyword< ParserKeywords::PLYMAX >();
p.addKeyword< ParserKeywords::PLYROCK >();
p.addKeyword< ParserKeywords::PLYSHEAR >();
p.addKeyword< ParserKeywords::PLYSHLOG >();
p.addKeyword< ParserKeywords::PLYVISC >();
p.addKeyword< ParserKeywords::PMISC >();
p.addKeyword< ParserKeywords::POLYMER >();
p.addKeyword< ParserKeywords::PORO >();
p.addKeyword< ParserKeywords::PORV >();
p.addKeyword< ParserKeywords::PPCWMAX >();
p.addKeyword< ParserKeywords::PREF >();
p.addKeyword< ParserKeywords::PREFS >();
p.addKeyword< ParserKeywords::PRESSURE >();
p.addKeyword< ParserKeywords::PROPS >();
p.addKeyword< ParserKeywords::PRORDER >();
p.addKeyword< ParserKeywords::PVCDO >();
p.addKeyword< ParserKeywords::PVDG >();
p.addKeyword< ParserKeywords::PVDO >();
p.addKeyword< ParserKeywords::PVDS >();
p.addKeyword< ParserKeywords::PVTG >();
p.addKeyword< ParserKeywords::PVTNUM >();
p.addKeyword< ParserKeywords::PVTO >();
p.addKeyword< ParserKeywords::PVTW >();
p.addKeyword< ParserKeywords::PVT_M >();
p.addKeyword< ParserKeywords::QDRILL >();
p.addKeyword< ParserKeywords::RADFIN4 >();
p.addKeyword< ParserKeywords::RADIAL >();
p.addKeyword< ParserKeywords::REGDIMS >();
p.addKeyword< ParserKeywords::REGIONS >();
p.addKeyword< ParserKeywords::REGION_PROBE >();
p.addKeyword< ParserKeywords::RESTART >();
p.addKeyword< ParserKeywords::RHO >();
p.addKeyword< ParserKeywords::RKTRMDIR >();
p.addKeyword< ParserKeywords::ROCK >();
p.addKeyword< ParserKeywords::ROCKCOMP >();
p.addKeyword< ParserKeywords::ROCKNUM >();
p.addKeyword< ParserKeywords::ROCKOPTS >();
p.addKeyword< ParserKeywords::ROCKTAB >();
p.addKeyword< ParserKeywords::RPTGRID >();
p.addKeyword< ParserKeywords::RPTONLY >();
p.addKeyword< ParserKeywords::RPTONLYO >();
p.addKeyword< ParserKeywords::RPTPROPS >();
p.addKeyword< ParserKeywords::RPTREGS >();
p.addKeyword< ParserKeywords::RPTRST >();
p.addKeyword< ParserKeywords::RPTRUNSP >();
p.addKeyword< ParserKeywords::RPTSCHED >();
p.addKeyword< ParserKeywords::RPTSMRY >();
p.addKeyword< ParserKeywords::RPTSOL >();
p.addKeyword< ParserKeywords::RS >();
p.addKeyword< ParserKeywords::RSCONST >();
p.addKeyword< ParserKeywords::RSCONSTT >();
p.addKeyword< ParserKeywords::RSVD >();
p.addKeyword< ParserKeywords::RTEMP >();
p.addKeyword< ParserKeywords::RTEMPA >();
p.addKeyword< ParserKeywords::RTEMPVD >();
p.addKeyword< ParserKeywords::RUNSPEC >();
p.addKeyword< ParserKeywords::RUNSUM >();
p.addKeyword< ParserKeywords::RV >();
p.addKeyword< ParserKeywords::RVVD >();
p.addKeyword< ParserKeywords::SATNUM >();
p.addKeyword< ParserKeywords::SATOPTS >();
p.addKeyword< ParserKeywords::SAVE >();
p.addKeyword< ParserKeywords::SCALECRS >();
p.addKeyword< ParserKeywords::SCHEDULE >();
p.addKeyword< ParserKeywords::SDENSITY >();
p.addKeyword< ParserKeywords::SEPARATE >();
p.addKeyword< ParserKeywords::SGAS >();
p.addKeyword< ParserKeywords::SGCR >();
p.addKeyword< ParserKeywords::SGCWMIS >();
p.addKeyword< ParserKeywords::SGFN >();
p.addKeyword< ParserKeywords::SGL >();
p.addKeyword< ParserKeywords::SGOF >();
p.addKeyword< ParserKeywords::SGU >();
p.addKeyword< ParserKeywords::SGWFN >();
p.addKeyword< ParserKeywords::SHRATE >();
p.addKeyword< ParserKeywords::SKIP >();
p.addKeyword< ParserKeywords::SKIP100 >();
p.addKeyword< ParserKeywords::SKIP300 >();
p.addKeyword< ParserKeywords::SKIPREST >();
p.addKeyword< ParserKeywords::SLGOF >();
p.addKeyword< ParserKeywords::SMRYDIMS >();
p.addKeyword< ParserKeywords::SOF2 >();
p.addKeyword< ParserKeywords::SOF3 >();
p.addKeyword< ParserKeywords::SOGCR >();
p.addKeyword< ParserKeywords::SOIL >();
p.addKeyword< ParserKeywords::SOLUTION >();
p.addKeyword< ParserKeywords::SOLVENT >();
p.addKeyword< ParserKeywords::SORWMIS >();
p.addKeyword< ParserKeywords::SOWCR >();
p.addKeyword< ParserKeywords::SPECGRID >();
p.addKeyword< ParserKeywords::SPECHEAT >();
p.addKeyword< ParserKeywords::SPECROCK >();
p.addKeyword< ParserKeywords::SPOLY >();
p.addKeyword< ParserKeywords::SSFN >();
p.addKeyword< ParserKeywords::SSOL >();
p.addKeyword< ParserKeywords::START >();
p.addKeyword< ParserKeywords::STCOND >();
p.addKeyword< ParserKeywords::STONE1 >();
p.addKeyword< ParserKeywords::STONE1EX >();
p.addKeyword< ParserKeywords::SUMMARY >();
p.addKeyword< ParserKeywords::SUMTHIN >();
p.addKeyword< ParserKeywords::SWAT >();
p.addKeyword< ParserKeywords::SWATINIT >();
p.addKeyword< ParserKeywords::SWCR >();
p.addKeyword< ParserKeywords::SWFN >();
p.addKeyword< ParserKeywords::SWL >();
p.addKeyword< ParserKeywords::SWOF >();
p.addKeyword< ParserKeywords::SWU >();
p.addKeyword< ParserKeywords::TABDIMS >();
p.addKeyword< ParserKeywords::TEMP >();
p.addKeyword< ParserKeywords::TEMPI >();
p.addKeyword< ParserKeywords::TEMPVD >();
p.addKeyword< ParserKeywords::THCGAS >();
p.addKeyword< ParserKeywords::THCOIL >();
p.addKeyword< ParserKeywords::THCONR >();
p.addKeyword< ParserKeywords::THCONSF >();
p.addKeyword< ParserKeywords::THCROCK >();
p.addKeyword< ParserKeywords::THCWATER >();
p.addKeyword< ParserKeywords::THERMAL >();
p.addKeyword< ParserKeywords::THERMEX1 >();
p.addKeyword< ParserKeywords::THPRES >();
p.addKeyword< ParserKeywords::TITLE >();
p.addKeyword< ParserKeywords::TLMIXPAR >();
p.addKeyword< ParserKeywords::TLPMIXPA >();
p.addKeyword< ParserKeywords::TNUM >();
p.addKeyword< ParserKeywords::TOPS >();
p.addKeyword< ParserKeywords::TRACER >();
p.addKeyword< ParserKeywords::TRACERS >();
p.addKeyword< ParserKeywords::TRANX >();
p.addKeyword< ParserKeywords::TRANY >();
p.addKeyword< ParserKeywords::TRANZ >();
p.addKeyword< ParserKeywords::TREF >();
p.addKeyword< ParserKeywords::TREFS >();
p.addKeyword< ParserKeywords::TSTEP >();
p.addKeyword< ParserKeywords::TUNING >();
p.addKeyword< ParserKeywords::TUNINGDP >();
p.addKeyword< ParserKeywords::TVDP >();
p.addKeyword< ParserKeywords::UDADIMS >();
p.addKeyword< ParserKeywords::UDQDIMS >();
p.addKeyword< ParserKeywords::UNIFIN >();
p.addKeyword< ParserKeywords::UNIFOUT >();
p.addKeyword< ParserKeywords::VAPOIL >();
p.addKeyword< ParserKeywords::VAPPARS >();
p.addKeyword< ParserKeywords::VFPIDIMS >();
p.addKeyword< ParserKeywords::VFPINJ >();
p.addKeyword< ParserKeywords::VFPPDIMS >();
p.addKeyword< ParserKeywords::VFPPROD >();
p.addKeyword< ParserKeywords::VISCREF >();
p.addKeyword< ParserKeywords::WARN >();
p.addKeyword< ParserKeywords::WATDENT >();
p.addKeyword< ParserKeywords::WATER >();
p.addKeyword< ParserKeywords::WATVISCT >();
p.addKeyword< ParserKeywords::WCONHIST >();
p.addKeyword< ParserKeywords::WCONINJ >();
p.addKeyword< ParserKeywords::WCONINJE >();
p.addKeyword< ParserKeywords::WCONINJH >();
p.addKeyword< ParserKeywords::WCONPROD >();
p.addKeyword< ParserKeywords::WDFACCOR >();
p.addKeyword< ParserKeywords::WDRILTIM >();
p.addKeyword< ParserKeywords::WECON >();
p.addKeyword< ParserKeywords::WEFAC >();
p.addKeyword< ParserKeywords::WELLDIMS >();
p.addKeyword< ParserKeywords::WELL_PROBE >();
p.addKeyword< ParserKeywords::WELOPEN >();
p.addKeyword< ParserKeywords::WELPI >();
p.addKeyword< ParserKeywords::WELSEGS >();
p.addKeyword< ParserKeywords::WELSPECS >();
p.addKeyword< ParserKeywords::WELTARG >();
p.addKeyword< ParserKeywords::WGASPROD >();
p.addKeyword< ParserKeywords::WGRUPCON >();
p.addKeyword< ParserKeywords::WHISTCTL >();
p.addKeyword< ParserKeywords::WINJMULT >();
p.addKeyword< ParserKeywords::WINJTEMP >();
p.addKeyword< ParserKeywords::WLIFT >();
p.addKeyword< ParserKeywords::WLIMTOL >();
p.addKeyword< ParserKeywords::WORKLIM >();
p.addKeyword< ParserKeywords::WORKTHP >();
p.addKeyword< ParserKeywords::WPAVE >();
p.addKeyword< ParserKeywords::WPAVEDEP >();
p.addKeyword< ParserKeywords::WPIMULT >();
p.addKeyword< ParserKeywords::WPITAB >();
p.addKeyword< ParserKeywords::WPOLYMER >();
p.addKeyword< ParserKeywords::WRFT >();
p.addKeyword< ParserKeywords::WRFTPLT >();
p.addKeyword< ParserKeywords::WSEGDIMS >();
p.addKeyword< ParserKeywords::WSEGITER >();
p.addKeyword< ParserKeywords::WSOLVENT >();
p.addKeyword< ParserKeywords::WTEMP >();
p.addKeyword< ParserKeywords::WTEST >();
p.addKeyword< ParserKeywords::WTRACER >();
p.addKeyword< ParserKeywords::ZCORN >();
p.addKeyword< ParserKeywords::ZFACT1 >();
p.addKeyword< ParserKeywords::ZFACT1S >();
p.addKeyword< ParserKeywords::ZFACTOR >();
p.addKeyword< ParserKeywords::ZFACTORS >();
p.addKeyword< ParserKeywords::ZIPPY2 >();
}
ACTDIMS::ACTDIMS( ) : ParserKeyword("ACTDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("ACTDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("MAX_ACTION", ParserItem::item_size::SINGLE, 2 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ACTION_LINES", ParserItem::item_size::SINGLE, 50 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ACTION_LINE_CHARACTERS", ParserItem::item_size::SINGLE, 80 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ACTION_COND", ParserItem::item_size::SINGLE, 3 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ACTDIMS::keywordName = "ACTDIMS";
const std::string ACTDIMS::MAX_ACTION::itemName = "MAX_ACTION";
const int ACTDIMS::MAX_ACTION::defaultValue = 2;
const std::string ACTDIMS::MAX_ACTION_LINES::itemName = "MAX_ACTION_LINES";
const int ACTDIMS::MAX_ACTION_LINES::defaultValue = 50;
const std::string ACTDIMS::MAX_ACTION_LINE_CHARACTERS::itemName = "MAX_ACTION_LINE_CHARACTERS";
const int ACTDIMS::MAX_ACTION_LINE_CHARACTERS::defaultValue = 80;
const std::string ACTDIMS::MAX_ACTION_COND::itemName = "MAX_ACTION_COND";
const int ACTDIMS::MAX_ACTION_COND::defaultValue = 3;


ACTION::ACTION( ) : ParserKeyword("ACTION") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("ACTION");
  {
     ParserRecord record;
     {
        ParserItem item("ACTION_NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("QUANTITY", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPERATOR", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRIGGER_VALUE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ACTION::keywordName = "ACTION";
const std::string ACTION::ACTION_NAME::itemName = "ACTION_NAME";
const std::string ACTION::QUANTITY::itemName = "QUANTITY";
const std::string ACTION::OPERATOR::itemName = "OPERATOR";
const std::string ACTION::TRIGGER_VALUE::itemName = "TRIGGER_VALUE";


ACTNUM::ACTNUM( ) : ParserKeyword("ACTNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("ACTNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ACTNUM::keywordName = "ACTNUM";
const std::string ACTNUM::data::itemName = "data";


ADD::ADD( ) : ParserKeyword("ADD") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("ADD");
  {
     ParserRecord record;
     {
        ParserItem item("field", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("shift", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ADD::keywordName = "ADD";
const std::string ADD::field::itemName = "field";
const std::string ADD::shift::itemName = "shift";
const std::string ADD::I1::itemName = "I1";
const std::string ADD::I2::itemName = "I2";
const std::string ADD::J1::itemName = "J1";
const std::string ADD::J2::itemName = "J2";
const std::string ADD::K1::itemName = "K1";
const std::string ADD::K2::itemName = "K2";


ADDREG::ADDREG( ) : ParserKeyword("ADDREG") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("ADDREG");
  {
     ParserRecord record;
     {
        ParserItem item("ARRAY", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("The 3D array we will update");
        record.addItem(item);
     }
     {
        ParserItem item("SHIFT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("The value we will multiply with");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_NUMBER", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("The region number we are interested in");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_NAME", ParserItem::item_size::SINGLE, "M" ); item.setType( std::string() );
        item.setDescription("The name of the region we are interested in");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ADDREG::keywordName = "ADDREG";
const std::string ADDREG::ARRAY::itemName = "ARRAY";
const std::string ADDREG::SHIFT::itemName = "SHIFT";
const double ADDREG::SHIFT::defaultValue = 0.000000;
const std::string ADDREG::REGION_NUMBER::itemName = "REGION_NUMBER";
const std::string ADDREG::REGION_NAME::itemName = "REGION_NAME";
const std::string ADDREG::REGION_NAME::defaultValue = "M";


ADSALNOD::ADSALNOD( ) : ParserKeyword("ADSALNOD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ADSALNOD");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ADSALNOD::keywordName = "ADSALNOD";
const std::string ADSALNOD::DATA::itemName = "DATA";


AITS::AITS( ) : ParserKeyword("AITS") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("AITS");
}
const std::string AITS::keywordName = "AITS";


ALL::ALL( ) : ParserKeyword("ALL") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("ALL");
}
const std::string ALL::keywordName = "ALL";


API::API( ) : ParserKeyword("API") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("API");
}
const std::string API::keywordName = "API";


APIGROUP::APIGROUP( ) : ParserKeyword("APIGROUP") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("APIGROUP");
  {
     ParserRecord record;
     {
        ParserItem item("MAX_OIL_PVT_GROUP_COUNT", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string APIGROUP::keywordName = "APIGROUP";
const std::string APIGROUP::MAX_OIL_PVT_GROUP_COUNT::itemName = "MAX_OIL_PVT_GROUP_COUNT";
const int APIGROUP::MAX_OIL_PVT_GROUP_COUNT::defaultValue = 1;


AQUANCON::AQUANCON( ) : ParserKeyword("AQUANCON") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("AQUANCON");
  {
     ParserRecord record;
     {
        ParserItem item("AQUIFER_ID", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FACE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("INFLUX_COEFF", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length*Length");
        record.addItem(item);
     }
     {
        ParserItem item("INFLUX_MULT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CONNECT_ADJOINING_ACTIVE_CELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string AQUANCON::keywordName = "AQUANCON";
const std::string AQUANCON::AQUIFER_ID::itemName = "AQUIFER_ID";
const std::string AQUANCON::I1::itemName = "I1";
const std::string AQUANCON::I2::itemName = "I2";
const std::string AQUANCON::J1::itemName = "J1";
const std::string AQUANCON::J2::itemName = "J2";
const std::string AQUANCON::K1::itemName = "K1";
const std::string AQUANCON::K2::itemName = "K2";
const std::string AQUANCON::FACE::itemName = "FACE";
const std::string AQUANCON::INFLUX_COEFF::itemName = "INFLUX_COEFF";
const std::string AQUANCON::INFLUX_MULT::itemName = "INFLUX_MULT";
const std::string AQUANCON::CONNECT_ADJOINING_ACTIVE_CELL::itemName = "CONNECT_ADJOINING_ACTIVE_CELL";


AQUCON::AQUCON( ) : ParserKeyword("AQUCON") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("AQUCON");
  {
     ParserRecord record;
     {
        ParserItem item("ID", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CONNECT_FACE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRANS_MULT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRANS_OPTION", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ALLOW_INTERNAL_CELLS", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VEFRAC", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VEFRACP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string AQUCON::keywordName = "AQUCON";
const std::string AQUCON::ID::itemName = "ID";
const std::string AQUCON::I1::itemName = "I1";
const std::string AQUCON::I2::itemName = "I2";
const std::string AQUCON::J1::itemName = "J1";
const std::string AQUCON::J2::itemName = "J2";
const std::string AQUCON::K1::itemName = "K1";
const std::string AQUCON::K2::itemName = "K2";
const std::string AQUCON::CONNECT_FACE::itemName = "CONNECT_FACE";
const std::string AQUCON::TRANS_MULT::itemName = "TRANS_MULT";
const std::string AQUCON::TRANS_OPTION::itemName = "TRANS_OPTION";
const std::string AQUCON::ALLOW_INTERNAL_CELLS::itemName = "ALLOW_INTERNAL_CELLS";
const std::string AQUCON::VEFRAC::itemName = "VEFRAC";
const std::string AQUCON::VEFRACP::itemName = "VEFRACP";


AQUCT::AQUCT( ) : ParserKeyword("AQUCT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("AQUCT");
  {
     ParserRecord record;
     {
        ParserItem item("AQUIFER_ID", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DAT_DEPTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("P_INI", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("PERM_AQ", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addItem(item);
     }
     {
        ParserItem item("PORO_AQ", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("C_T", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("RAD", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("THICKNESS_AQ", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("INFLUENCE_ANGLE", ParserItem::item_size::SINGLE, double( 360 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TABLE_NUM_WATER_PRESS", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TABLE_NUM_INFLUENCE_FN", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("INI_SALT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TEMP_AQUIFER", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string AQUCT::keywordName = "AQUCT";
const std::string AQUCT::AQUIFER_ID::itemName = "AQUIFER_ID";
const std::string AQUCT::DAT_DEPTH::itemName = "DAT_DEPTH";
const std::string AQUCT::P_INI::itemName = "P_INI";
const std::string AQUCT::PERM_AQ::itemName = "PERM_AQ";
const std::string AQUCT::PORO_AQ::itemName = "PORO_AQ";
const double AQUCT::PORO_AQ::defaultValue = 1.000000;
const std::string AQUCT::C_T::itemName = "C_T";
const std::string AQUCT::RAD::itemName = "RAD";
const std::string AQUCT::THICKNESS_AQ::itemName = "THICKNESS_AQ";
const std::string AQUCT::INFLUENCE_ANGLE::itemName = "INFLUENCE_ANGLE";
const double AQUCT::INFLUENCE_ANGLE::defaultValue = 360.000000;
const std::string AQUCT::TABLE_NUM_WATER_PRESS::itemName = "TABLE_NUM_WATER_PRESS";
const int AQUCT::TABLE_NUM_WATER_PRESS::defaultValue = 1;
const std::string AQUCT::TABLE_NUM_INFLUENCE_FN::itemName = "TABLE_NUM_INFLUENCE_FN";
const int AQUCT::TABLE_NUM_INFLUENCE_FN::defaultValue = 1;
const std::string AQUCT::INI_SALT::itemName = "INI_SALT";
const double AQUCT::INI_SALT::defaultValue = 0.000000;
const std::string AQUCT::TEMP_AQUIFER::itemName = "TEMP_AQUIFER";


AQUDIMS::AQUDIMS( ) : ParserKeyword("AQUDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("AQUDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("MXNAQN", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MXNAQC", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NIFTBL", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NRIFTB", ParserItem::item_size::SINGLE, 36 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NANAQU", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NCAMAX", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MXNALI", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MXAAQL", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string AQUDIMS::keywordName = "AQUDIMS";
const std::string AQUDIMS::MXNAQN::itemName = "MXNAQN";
const int AQUDIMS::MXNAQN::defaultValue = 1;
const std::string AQUDIMS::MXNAQC::itemName = "MXNAQC";
const int AQUDIMS::MXNAQC::defaultValue = 1;
const std::string AQUDIMS::NIFTBL::itemName = "NIFTBL";
const int AQUDIMS::NIFTBL::defaultValue = 1;
const std::string AQUDIMS::NRIFTB::itemName = "NRIFTB";
const int AQUDIMS::NRIFTB::defaultValue = 36;
const std::string AQUDIMS::NANAQU::itemName = "NANAQU";
const int AQUDIMS::NANAQU::defaultValue = 1;
const std::string AQUDIMS::NCAMAX::itemName = "NCAMAX";
const int AQUDIMS::NCAMAX::defaultValue = 1;
const std::string AQUDIMS::MXNALI::itemName = "MXNALI";
const int AQUDIMS::MXNALI::defaultValue = 0;
const std::string AQUDIMS::MXAAQL::itemName = "MXAAQL";
const int AQUDIMS::MXAAQL::defaultValue = 0;


AQUFETP::AQUFETP( ) : ParserKeyword("AQUFETP") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("AQUDIMS","NANAQU",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("AQUFETP");
  {
     ParserRecord record;
     {
        ParserItem item("ID", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DATUM_DEPTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("P0", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("V0", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length*Length*Length");
        record.addItem(item);
     }
     {
        ParserItem item("COMPRESSIBILITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("PI", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ReservoirVolume/Pressure*Time");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_TABLE", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SALINITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Salinity");
        record.addItem(item);
     }
     {
        ParserItem item("TEMP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string AQUFETP::keywordName = "AQUFETP";
const std::string AQUFETP::ID::itemName = "ID";
const std::string AQUFETP::DATUM_DEPTH::itemName = "DATUM_DEPTH";
const std::string AQUFETP::P0::itemName = "P0";
const std::string AQUFETP::V0::itemName = "V0";
const std::string AQUFETP::COMPRESSIBILITY::itemName = "COMPRESSIBILITY";
const std::string AQUFETP::PI::itemName = "PI";
const std::string AQUFETP::WATER_TABLE::itemName = "WATER_TABLE";
const std::string AQUFETP::SALINITY::itemName = "SALINITY";
const std::string AQUFETP::TEMP::itemName = "TEMP";


AQUIFER_PROBE_ANALYTIC::AQUIFER_PROBE_ANALYTIC( ) : ParserKeyword("AQUIFER_PROBE_ANALYTIC") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("AAQP");
  addDeckName("AAQPD");
  addDeckName("AAQR");
  addDeckName("AAQRG");
  addDeckName("AAQT");
  addDeckName("AAQTD");
  addDeckName("AAQTG");
  setMatchRegex("AA.+");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string AQUIFER_PROBE_ANALYTIC::keywordName = "AQUIFER_PROBE_ANALYTIC";
const std::string AQUIFER_PROBE_ANALYTIC::data::itemName = "data";


AQUIFER_PROBE_NUMERIC::AQUIFER_PROBE_NUMERIC( ) : ParserKeyword("AQUIFER_PROBE_NUMERIC") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("ANQP");
  addDeckName("ANQR");
  addDeckName("ANQT");
  setMatchRegex("ANQ.");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string AQUIFER_PROBE_NUMERIC::keywordName = "AQUIFER_PROBE_NUMERIC";
const std::string AQUIFER_PROBE_NUMERIC::data::itemName = "data";


AQUNUM::AQUNUM( ) : ParserKeyword("AQUNUM") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("AQUNUM");
  {
     ParserRecord record;
     {
        ParserItem item("AQUIFER_ID", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CROSS_SECTION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length*Length");
        record.addItem(item);
     }
     {
        ParserItem item("LENGTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("PORO", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("PERM", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addItem(item);
     }
     {
        ParserItem item("DEPTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("INITIAL_PRESSURE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("PVT_TABLE_NUM", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SAT_TABLE_NUM", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string AQUNUM::keywordName = "AQUNUM";
const std::string AQUNUM::AQUIFER_ID::itemName = "AQUIFER_ID";
const std::string AQUNUM::I::itemName = "I";
const std::string AQUNUM::J::itemName = "J";
const std::string AQUNUM::K::itemName = "K";
const std::string AQUNUM::CROSS_SECTION::itemName = "CROSS_SECTION";
const std::string AQUNUM::LENGTH::itemName = "LENGTH";
const std::string AQUNUM::PORO::itemName = "PORO";
const std::string AQUNUM::PERM::itemName = "PERM";
const std::string AQUNUM::DEPTH::itemName = "DEPTH";
const std::string AQUNUM::INITIAL_PRESSURE::itemName = "INITIAL_PRESSURE";
const std::string AQUNUM::PVT_TABLE_NUM::itemName = "PVT_TABLE_NUM";
const std::string AQUNUM::SAT_TABLE_NUM::itemName = "SAT_TABLE_NUM";


AQUTAB::AQUTAB( ) : ParserKeyword("AQUTAB") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("AQUDIMS","NIFTBL",-1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("AQUTAB");
  {
     ParserRecord record;
     {
        ParserItem item("table", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string AQUTAB::keywordName = "AQUTAB";
const std::string AQUTAB::table::itemName = "table";


BLACKOIL::BLACKOIL( ) : ParserKeyword("BLACKOIL") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("BLACKOIL");
}
const std::string BLACKOIL::keywordName = "BLACKOIL";


BLOCK_PROBE::BLOCK_PROBE( ) : ParserKeyword("BLOCK_PROBE") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("BAPI");
  addDeckName("BCGC");
  addDeckName("BCSC");
  addDeckName("BCTRA_X");
  addDeckName("BDENG");
  addDeckName("BDENO");
  addDeckName("BDENW");
  addDeckName("BESALPLY");
  addDeckName("BESALSUR");
  addDeckName("BEWV_SAL");
  addDeckName("BEWV_SUR");
  addDeckName("BFLOGI");
  addDeckName("BFLOGJ");
  addDeckName("BFLOGK");
  addDeckName("BFLOOI");
  addDeckName("BFLOOJ");
  addDeckName("BFLOOK");
  addDeckName("BFLOWI");
  addDeckName("BGDEN");
  addDeckName("BGI");
  addDeckName("BGIP");
  addDeckName("BGIPG");
  addDeckName("BGIPL");
  addDeckName("BGKR");
  addDeckName("BGPC");
  addDeckName("BGPR");
  addDeckName("BGPV");
  addDeckName("BGSAT");
  addDeckName("BGSHY");
  addDeckName("BGSTRP");
  addDeckName("BGTPD");
  addDeckName("BGTRP");
  addDeckName("BGVIS");
  addDeckName("BHD");
  addDeckName("BHDF");
  addDeckName("BHDF_X");
  addDeckName("BHD_X");
  addDeckName("BHPV");
  addDeckName("BKRG");
  addDeckName("BKRO");
  addDeckName("BKRW");
  addDeckName("BNIP");
  addDeckName("BNKR");
  addDeckName("BNSAT");
  addDeckName("BODEN");
  addDeckName("BOIP");
  addDeckName("BOIPG");
  addDeckName("BOIPL");
  addDeckName("BOKR");
  addDeckName("BOPV");
  addDeckName("BOSAT");
  addDeckName("BOVIS");
  addDeckName("BPBUB");
  addDeckName("BPDEW");
  addDeckName("BPERMMOD");
  addDeckName("BPORVMOD");
  addDeckName("BPPC");
  addDeckName("BPPG");
  addDeckName("BPPO");
  addDeckName("BPPW");
  addDeckName("BPR");
  addDeckName("BPR_X");
  addDeckName("BRPV");
  addDeckName("BRS");
  addDeckName("BRSSAT");
  addDeckName("BRTM");
  addDeckName("BRV");
  addDeckName("BRVSAT");
  addDeckName("BSCN");
  addDeckName("BSCN_X");
  addDeckName("BSGAS");
  addDeckName("BSIP");
  addDeckName("BSOIL");
  addDeckName("BSTATE");
  addDeckName("BSWAT");
  addDeckName("BTADSALK");
  addDeckName("BTADSFOA");
  addDeckName("BTADSUR");
  addDeckName("BTCASUR");
  addDeckName("BTCNFALK");
  addDeckName("BTCNFANI");
  addDeckName("BTCNFCAT");
  addDeckName("BTCNFFOA");
  addDeckName("BTCNFHEA");
  addDeckName("BTCNFSUR");
  addDeckName("BTCNMFOA");
  addDeckName("BTDCYFOA");
  addDeckName("BTHLFFOA");
  addDeckName("BTIPTFOA");
  addDeckName("BTIPTHEA");
  addDeckName("BTIPTSUR");
  addDeckName("BTMOBFOA");
  addDeckName("BTPADALK");
  addDeckName("BTRADCAT");
  addDeckName("BTSADALK");
  addDeckName("BTSADCAT");
  addDeckName("BTSTMALK");
  addDeckName("BTSTSUR");
  addDeckName("BVELGI");
  addDeckName("BVELGJ");
  addDeckName("BVELGK");
  addDeckName("BVELOI");
  addDeckName("BVELOJ");
  addDeckName("BVELOK");
  addDeckName("BVELWI");
  addDeckName("BVELWJ");
  addDeckName("BVELWK");
  addDeckName("BVGAS");
  addDeckName("BVOIL");
  addDeckName("BVWAT");
  addDeckName("BWDEN");
  addDeckName("BWIP");
  addDeckName("BWKR");
  addDeckName("BWPC");
  addDeckName("BWPR");
  addDeckName("BWPV");
  addDeckName("BWSAT");
  addDeckName("BWSHY");
  addDeckName("BWSMA");
  addDeckName("BWVIS");
  addDeckName("LBCTRA_X");
  addDeckName("LBHDF_X");
  addDeckName("LBHD_X");
  addDeckName("LBPR_X");
  addDeckName("LBSCN_X");
  setMatchRegex("BU.+|BTIPF.+|BTIPS.+|BTCNF.+|BTCNS.+|BTCN[1-9][0-9]*.+|BTIPT.+|BTIPF.+|BTIPS.+|BTIP[1-9][0-9]*.+|BTADS.+|BTDCY");
  {
     ParserRecord record;
     {
        ParserItem item("I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string BLOCK_PROBE::keywordName = "BLOCK_PROBE";
const std::string BLOCK_PROBE::I::itemName = "I";
const std::string BLOCK_PROBE::J::itemName = "J";
const std::string BLOCK_PROBE::K::itemName = "K";


BLOCK_PROBE300::BLOCK_PROBE300( ) : ParserKeyword("BLOCK_PROBE300") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("BTEMP");
  {
     ParserRecord record;
     {
        ParserItem item("I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string BLOCK_PROBE300::keywordName = "BLOCK_PROBE300";
const std::string BLOCK_PROBE300::I::itemName = "I";
const std::string BLOCK_PROBE300::J::itemName = "J";
const std::string BLOCK_PROBE300::K::itemName = "K";


BOX::BOX( ) : ParserKeyword("BOX") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("BOX");
  {
     ParserRecord record;
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string BOX::keywordName = "BOX";
const std::string BOX::I1::itemName = "I1";
const std::string BOX::I2::itemName = "I2";
const std::string BOX::J1::itemName = "J1";
const std::string BOX::J2::itemName = "J2";
const std::string BOX::K1::itemName = "K1";
const std::string BOX::K2::itemName = "K2";


CECON::CECON( ) : ParserKeyword("CECON") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("CECON");
  {
     ParserRecord record;
     {
        ParserItem item("WELLNAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WCUT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_GOR", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WGR", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WORKOVER_PROCEDURE", ParserItem::item_size::SINGLE, "CON" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CHECK_STOPPED", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_OIL", ParserItem::item_size::SINGLE, double( -1e+20 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_GAS", ParserItem::item_size::SINGLE, double( -1e+20 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FOLLOW_ON_WELL", ParserItem::item_size::SINGLE, "" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string CECON::keywordName = "CECON";
const std::string CECON::WELLNAME::itemName = "WELLNAME";
const std::string CECON::I::itemName = "I";
const int CECON::I::defaultValue = 0;
const std::string CECON::J::itemName = "J";
const int CECON::J::defaultValue = 0;
const std::string CECON::K1::itemName = "K1";
const int CECON::K1::defaultValue = 0;
const std::string CECON::K2::itemName = "K2";
const int CECON::K2::defaultValue = 0;
const std::string CECON::MAX_WCUT::itemName = "MAX_WCUT";
const double CECON::MAX_WCUT::defaultValue = 0.000000;
const std::string CECON::MAX_GOR::itemName = "MAX_GOR";
const double CECON::MAX_GOR::defaultValue = 0.000000;
const std::string CECON::MAX_WGR::itemName = "MAX_WGR";
const double CECON::MAX_WGR::defaultValue = 0.000000;
const std::string CECON::WORKOVER_PROCEDURE::itemName = "WORKOVER_PROCEDURE";
const std::string CECON::WORKOVER_PROCEDURE::defaultValue = "CON";
const std::string CECON::CHECK_STOPPED::itemName = "CHECK_STOPPED";
const std::string CECON::CHECK_STOPPED::defaultValue = "NO";
const std::string CECON::MIN_OIL::itemName = "MIN_OIL";
const double CECON::MIN_OIL::defaultValue = -100000000000000000000.000000;
const std::string CECON::MIN_GAS::itemName = "MIN_GAS";
const double CECON::MIN_GAS::defaultValue = -100000000000000000000.000000;
const std::string CECON::FOLLOW_ON_WELL::itemName = "FOLLOW_ON_WELL";
const std::string CECON::FOLLOW_ON_WELL::defaultValue = "";


CIRCLE::CIRCLE( ) : ParserKeyword("CIRCLE") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("CIRCLE");
}
const std::string CIRCLE::keywordName = "CIRCLE";


COMPDAT::COMPDAT( ) : ParserKeyword("COMPDAT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("COMPDAT");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("STATE", ParserItem::item_size::SINGLE, "OPEN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SAT_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CONNECTION_TRANSMISSIBILITY_FACTOR", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Viscosity*ReservoirVolume/Time*Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("DIAMETER", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("Kh", ParserItem::item_size::SINGLE, double( -1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability*Length");
        record.addItem(item);
     }
     {
        ParserItem item("SKIN", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("D_FACTOR", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("DIR", ParserItem::item_size::SINGLE, "Z" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PR", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string COMPDAT::keywordName = "COMPDAT";
const std::string COMPDAT::WELL::itemName = "WELL";
const std::string COMPDAT::I::itemName = "I";
const int COMPDAT::I::defaultValue = 0;
const std::string COMPDAT::J::itemName = "J";
const int COMPDAT::J::defaultValue = 0;
const std::string COMPDAT::K1::itemName = "K1";
const std::string COMPDAT::K2::itemName = "K2";
const std::string COMPDAT::STATE::itemName = "STATE";
const std::string COMPDAT::STATE::defaultValue = "OPEN";
const std::string COMPDAT::SAT_TABLE::itemName = "SAT_TABLE";
const int COMPDAT::SAT_TABLE::defaultValue = 0;
const std::string COMPDAT::CONNECTION_TRANSMISSIBILITY_FACTOR::itemName = "CONNECTION_TRANSMISSIBILITY_FACTOR";
const std::string COMPDAT::DIAMETER::itemName = "DIAMETER";
const std::string COMPDAT::Kh::itemName = "Kh";
const double COMPDAT::Kh::defaultValue = -1.000000;
const std::string COMPDAT::SKIN::itemName = "SKIN";
const double COMPDAT::SKIN::defaultValue = 0.000000;
const std::string COMPDAT::D_FACTOR::itemName = "D_FACTOR";
const std::string COMPDAT::DIR::itemName = "DIR";
const std::string COMPDAT::DIR::defaultValue = "Z";
const std::string COMPDAT::PR::itemName = "PR";


COMPIMB::COMPIMB( ) : ParserKeyword("COMPIMB") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("COMPIMB");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SAT_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string COMPIMB::keywordName = "COMPIMB";
const std::string COMPIMB::WELL::itemName = "WELL";
const std::string COMPIMB::I::itemName = "I";
const int COMPIMB::I::defaultValue = 0;
const std::string COMPIMB::J::itemName = "J";
const int COMPIMB::J::defaultValue = 0;
const std::string COMPIMB::K1::itemName = "K1";
const std::string COMPIMB::K2::itemName = "K2";
const std::string COMPIMB::SAT_TABLE::itemName = "SAT_TABLE";
const int COMPIMB::SAT_TABLE::defaultValue = 0;


COMPLUMP::COMPLUMP( ) : ParserKeyword("COMPLUMP") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("COMPLUMP");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("N", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string COMPLUMP::keywordName = "COMPLUMP";
const std::string COMPLUMP::WELL::itemName = "WELL";
const std::string COMPLUMP::I::itemName = "I";
const std::string COMPLUMP::J::itemName = "J";
const std::string COMPLUMP::K1::itemName = "K1";
const std::string COMPLUMP::K2::itemName = "K2";
const std::string COMPLUMP::N::itemName = "N";


COMPORD::COMPORD( ) : ParserKeyword("COMPORD") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("COMPORD");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ORDER_TYPE", ParserItem::item_size::SINGLE, "TRACK" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string COMPORD::keywordName = "COMPORD";
const std::string COMPORD::WELL::itemName = "WELL";
const std::string COMPORD::ORDER_TYPE::itemName = "ORDER_TYPE";
const std::string COMPORD::ORDER_TYPE::defaultValue = "TRACK";


COMPS::COMPS( ) : ParserKeyword("COMPS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("COMPS");
  {
     ParserRecord record;
     {
        ParserItem item("NUM_COMPS", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string COMPS::keywordName = "COMPS";
const std::string COMPS::NUM_COMPS::itemName = "NUM_COMPS";


COMPSEGS::COMPSEGS( ) : ParserKeyword("COMPSEGS") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("COMPSEGS");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("BRANCH", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DISTANCE_START", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("DISTANCE_END", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("DIRECTION", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("END_IJK", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CENTER_DEPTH", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("THERMAL_LENGTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("SEGMENT_NUMBER", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string COMPSEGS::keywordName = "COMPSEGS";
const std::string COMPSEGS::WELL::itemName = "WELL";
const std::string COMPSEGS::I::itemName = "I";
const std::string COMPSEGS::J::itemName = "J";
const std::string COMPSEGS::K::itemName = "K";
const std::string COMPSEGS::BRANCH::itemName = "BRANCH";
const std::string COMPSEGS::DISTANCE_START::itemName = "DISTANCE_START";
const std::string COMPSEGS::DISTANCE_END::itemName = "DISTANCE_END";
const std::string COMPSEGS::DIRECTION::itemName = "DIRECTION";
const std::string COMPSEGS::END_IJK::itemName = "END_IJK";
const std::string COMPSEGS::CENTER_DEPTH::itemName = "CENTER_DEPTH";
const double COMPSEGS::CENTER_DEPTH::defaultValue = 0.000000;
const std::string COMPSEGS::THERMAL_LENGTH::itemName = "THERMAL_LENGTH";
const std::string COMPSEGS::SEGMENT_NUMBER::itemName = "SEGMENT_NUMBER";


CONNECTION_PROBE::CONNECTION_PROBE( ) : ParserKeyword("CONNECTION_PROBE") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("CAPI");
  addDeckName("CCFR");
  addDeckName("CCIC");
  addDeckName("CCIT");
  addDeckName("CCPC");
  addDeckName("CCPT");
  addDeckName("CDBF");
  addDeckName("CDFAC");
  addDeckName("CDSF");
  addDeckName("CDSM");
  addDeckName("CDSML");
  addDeckName("CGFR");
  addDeckName("CGFRF");
  addDeckName("CGFRL");
  addDeckName("CGFRS");
  addDeckName("CGFRU");
  addDeckName("CGIR");
  addDeckName("CGIRL");
  addDeckName("CGIT");
  addDeckName("CGITL");
  addDeckName("CGLR");
  addDeckName("CGLRL");
  addDeckName("CGOR");
  addDeckName("CGORL");
  addDeckName("CGPI");
  addDeckName("CGPP");
  addDeckName("CGPR");
  addDeckName("CGPRL");
  addDeckName("CGPT");
  addDeckName("CGPTF");
  addDeckName("CGPTL");
  addDeckName("CGPTS");
  addDeckName("CGQ");
  addDeckName("CLFR");
  addDeckName("CLFRL");
  addDeckName("CLPT");
  addDeckName("CLPTL");
  addDeckName("CNFR");
  addDeckName("CNIT");
  addDeckName("CNPT");
  addDeckName("COFR");
  addDeckName("COFRF");
  addDeckName("COFRL");
  addDeckName("COFRS");
  addDeckName("COFRU");
  addDeckName("COGR");
  addDeckName("COGRL");
  addDeckName("COIT");
  addDeckName("COITL");
  addDeckName("COPI");
  addDeckName("COPP");
  addDeckName("COPR");
  addDeckName("COPRL");
  addDeckName("COPT");
  addDeckName("COPTF");
  addDeckName("COPTL");
  addDeckName("COPTS");
  addDeckName("CPI");
  addDeckName("CPRL");
  addDeckName("CSFR");
  addDeckName("CSIC");
  addDeckName("CSIR");
  addDeckName("CSIT");
  addDeckName("CSPC");
  addDeckName("CSPR");
  addDeckName("CSPT");
  addDeckName("CTFAC");
  addDeckName("CTFRALK");
  addDeckName("CTFRANI");
  addDeckName("CTFRCAT");
  addDeckName("CTFRFOA");
  addDeckName("CTFRSUR");
  addDeckName("CTITALK");
  addDeckName("CTITANI");
  addDeckName("CTITCAT");
  addDeckName("CTITFOA");
  addDeckName("CTITSUR");
  addDeckName("CTPTALK");
  addDeckName("CTPTANI");
  addDeckName("CTPTCAT");
  addDeckName("CTPTFOA");
  addDeckName("CTPTSUR");
  addDeckName("CVFR");
  addDeckName("CVFRL");
  addDeckName("CVIR");
  addDeckName("CVIRL");
  addDeckName("CVIT");
  addDeckName("CVITL");
  addDeckName("CVPT");
  addDeckName("CVPTL");
  addDeckName("CWCT");
  addDeckName("CWCTL");
  addDeckName("CWFR");
  addDeckName("CWFRL");
  addDeckName("CWFRU");
  addDeckName("CWGR");
  addDeckName("CWGRL");
  addDeckName("CWIR");
  addDeckName("CWIRL");
  addDeckName("CWIT");
  addDeckName("CWITL");
  addDeckName("CWPI");
  addDeckName("CWPP");
  addDeckName("CWPR");
  addDeckName("CWPRL");
  addDeckName("CWPT");
  addDeckName("CWPTL");
  addDeckName("LCGFRU");
  addDeckName("LCOFRU");
  addDeckName("LCWFRU");
  setMatchRegex("CU.+|CTFR.+|CTPR.+|CTPT.+|CTPC.+|CTIR.+|CTIT.+|CTIC.+|CTFR.+|CTPR.+|CTPT.+|CTPC.+|CTIR.+|CTIT.+|CTIC.+|CTIRF.+|CTIRS.+|CTPRF.+|CTPRS.+|CTITF.+|CTITS.+|CTPTF.+|CTPTS.+|CTICF.+|CTICS.+|CTPCF.+|CTPCS");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string CONNECTION_PROBE::keywordName = "CONNECTION_PROBE";
const std::string CONNECTION_PROBE::WELL::itemName = "WELL";
const std::string CONNECTION_PROBE::I::itemName = "I";
const std::string CONNECTION_PROBE::J::itemName = "J";
const std::string CONNECTION_PROBE::K::itemName = "K";


COORD::COORD( ) : ParserKeyword("COORD") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("COORD");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string COORD::keywordName = "COORD";
const std::string COORD::data::itemName = "data";


COORDSYS::COORDSYS( ) : ParserKeyword("COORDSYS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("NUMRES","num",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("COORDSYS");
  {
     ParserRecord record;
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CIRCLE_COMPLETION", ParserItem::item_size::SINGLE, "INCOMP" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CONNECTION", ParserItem::item_size::SINGLE, "SEPARATE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("R1", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("R2", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string COORDSYS::keywordName = "COORDSYS";
const std::string COORDSYS::K1::itemName = "K1";
const std::string COORDSYS::K2::itemName = "K2";
const std::string COORDSYS::CIRCLE_COMPLETION::itemName = "CIRCLE_COMPLETION";
const std::string COORDSYS::CIRCLE_COMPLETION::defaultValue = "INCOMP";
const std::string COORDSYS::CONNECTION::itemName = "CONNECTION";
const std::string COORDSYS::CONNECTION::defaultValue = "SEPARATE";
const std::string COORDSYS::R1::itemName = "R1";
const int COORDSYS::R1::defaultValue = 0;
const std::string COORDSYS::R2::itemName = "R2";
const int COORDSYS::R2::defaultValue = 0;


COPY::COPY( ) : ParserKeyword("COPY") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("COPY");
  {
     ParserRecord record;
     {
        ParserItem item("src", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("target", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string COPY::keywordName = "COPY";
const std::string COPY::src::itemName = "src";
const std::string COPY::target::itemName = "target";
const std::string COPY::I1::itemName = "I1";
const std::string COPY::I2::itemName = "I2";
const std::string COPY::J1::itemName = "J1";
const std::string COPY::J2::itemName = "J2";
const std::string COPY::K1::itemName = "K1";
const std::string COPY::K2::itemName = "K2";


COPYREG::COPYREG( ) : ParserKeyword("COPYREG") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("COPYREG");
  {
     ParserRecord record;
     {
        ParserItem item("ARRAY", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("The 3D array we will update");
        record.addItem(item);
     }
     {
        ParserItem item("TARGET_ARRAY", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("The name of the array which will be set");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_NUMBER", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("The region number we are interested in");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_NAME", ParserItem::item_size::SINGLE, "M" ); item.setType( std::string() );
        item.setDescription("The name of the region we are interested in");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string COPYREG::keywordName = "COPYREG";
const std::string COPYREG::ARRAY::itemName = "ARRAY";
const std::string COPYREG::TARGET_ARRAY::itemName = "TARGET_ARRAY";
const std::string COPYREG::REGION_NUMBER::itemName = "REGION_NUMBER";
const std::string COPYREG::REGION_NAME::itemName = "REGION_NAME";
const std::string COPYREG::REGION_NAME::defaultValue = "M";


CPR::CPR( ) : ParserKeyword("CPR") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("CPR");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string CPR::keywordName = "CPR";
const std::string CPR::WELL::itemName = "WELL";
const std::string CPR::I::itemName = "I";
const std::string CPR::J::itemName = "J";
const std::string CPR::K::itemName = "K";


CREF::CREF( ) : ParserKeyword("CREF") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("CREF");
  {
     ParserRecord record;
     {
        ParserItem item("COMPRESSIBILITY", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string CREF::keywordName = "CREF";
const std::string CREF::COMPRESSIBILITY::itemName = "COMPRESSIBILITY";


CREFS::CREFS( ) : ParserKeyword("CREFS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("CREFS");
  {
     ParserRecord record;
     {
        ParserItem item("COMPRESSIBILITY", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string CREFS::keywordName = "CREFS";
const std::string CREFS::COMPRESSIBILITY::itemName = "COMPRESSIBILITY";


DATE::DATE( ) : ParserKeyword("DATE") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("DATE");
}
const std::string DATE::keywordName = "DATE";


DATES::DATES( ) : ParserKeyword("DATES") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("DATES");
  {
     ParserRecord record;
     {
        ParserItem item("DAY", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MONTH", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("YEAR", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TIME", ParserItem::item_size::SINGLE, "00:00:00.000" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string DATES::keywordName = "DATES";
const std::string DATES::DAY::itemName = "DAY";
const std::string DATES::MONTH::itemName = "MONTH";
const std::string DATES::YEAR::itemName = "YEAR";
const std::string DATES::TIME::itemName = "TIME";
const std::string DATES::TIME::defaultValue = "00:00:00.000";


DATUM::DATUM( ) : ParserKeyword("DATUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("DATUM");
  {
     ParserRecord record;
     {
        ParserItem item("DEPTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string DATUM::keywordName = "DATUM";
const std::string DATUM::DEPTH::itemName = "DEPTH";


DEADOIL::DEADOIL( ) : ParserKeyword("DEADOIL") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("DEADOIL");
}
const std::string DEADOIL::keywordName = "DEADOIL";


DEBUG_::DEBUG_( ) : ParserKeyword("DEBUG_") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("DEBUG");
  {
     ParserRecord record;
     {
        ParserItem item("Item1", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item2", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item3", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item4", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item5", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item6", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item7", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item8", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item9", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item10", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item11", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item12", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item13", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item14", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item15", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item16", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item17", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item18", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item19", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item20", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item21", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item22", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item23", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item24", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item25", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item26", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item27", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item28", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item29", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item30", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item31", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item32", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item33", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item34", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item35", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item36", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item37", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item38", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item39", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item40", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item41", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item42", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item43", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item44", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item45", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item46", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item47", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item48", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item49", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item50", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item51", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item52", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item53", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item54", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item55", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item56", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item57", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item58", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item59", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item60", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item61", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item62", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item63", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item64", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item65", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item66", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item67", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item68", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item69", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item70", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item71", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item72", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item73", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item74", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item75", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item76", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item77", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item78", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item79", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item80", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item81", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item82", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item83", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item84", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item85", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item86", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Item87", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string DEBUG_::keywordName = "DEBUG_";
const std::string DEBUG_::Item1::itemName = "Item1";
const int DEBUG_::Item1::defaultValue = 0;
const std::string DEBUG_::Item2::itemName = "Item2";
const int DEBUG_::Item2::defaultValue = 0;
const std::string DEBUG_::Item3::itemName = "Item3";
const int DEBUG_::Item3::defaultValue = 0;
const std::string DEBUG_::Item4::itemName = "Item4";
const int DEBUG_::Item4::defaultValue = 0;
const std::string DEBUG_::Item5::itemName = "Item5";
const int DEBUG_::Item5::defaultValue = 0;
const std::string DEBUG_::Item6::itemName = "Item6";
const int DEBUG_::Item6::defaultValue = 0;
const std::string DEBUG_::Item7::itemName = "Item7";
const int DEBUG_::Item7::defaultValue = 0;
const std::string DEBUG_::Item8::itemName = "Item8";
const int DEBUG_::Item8::defaultValue = 0;
const std::string DEBUG_::Item9::itemName = "Item9";
const int DEBUG_::Item9::defaultValue = 0;
const std::string DEBUG_::Item10::itemName = "Item10";
const int DEBUG_::Item10::defaultValue = 0;
const std::string DEBUG_::Item11::itemName = "Item11";
const int DEBUG_::Item11::defaultValue = 0;
const std::string DEBUG_::Item12::itemName = "Item12";
const int DEBUG_::Item12::defaultValue = 0;
const std::string DEBUG_::Item13::itemName = "Item13";
const int DEBUG_::Item13::defaultValue = 0;
const std::string DEBUG_::Item14::itemName = "Item14";
const int DEBUG_::Item14::defaultValue = 0;
const std::string DEBUG_::Item15::itemName = "Item15";
const int DEBUG_::Item15::defaultValue = 0;
const std::string DEBUG_::Item16::itemName = "Item16";
const int DEBUG_::Item16::defaultValue = 0;
const std::string DEBUG_::Item17::itemName = "Item17";
const int DEBUG_::Item17::defaultValue = 0;
const std::string DEBUG_::Item18::itemName = "Item18";
const int DEBUG_::Item18::defaultValue = 0;
const std::string DEBUG_::Item19::itemName = "Item19";
const int DEBUG_::Item19::defaultValue = 0;
const std::string DEBUG_::Item20::itemName = "Item20";
const int DEBUG_::Item20::defaultValue = 0;
const std::string DEBUG_::Item21::itemName = "Item21";
const int DEBUG_::Item21::defaultValue = 0;
const std::string DEBUG_::Item22::itemName = "Item22";
const int DEBUG_::Item22::defaultValue = 0;
const std::string DEBUG_::Item23::itemName = "Item23";
const int DEBUG_::Item23::defaultValue = 0;
const std::string DEBUG_::Item24::itemName = "Item24";
const int DEBUG_::Item24::defaultValue = 0;
const std::string DEBUG_::Item25::itemName = "Item25";
const int DEBUG_::Item25::defaultValue = 0;
const std::string DEBUG_::Item26::itemName = "Item26";
const int DEBUG_::Item26::defaultValue = 0;
const std::string DEBUG_::Item27::itemName = "Item27";
const int DEBUG_::Item27::defaultValue = 0;
const std::string DEBUG_::Item28::itemName = "Item28";
const int DEBUG_::Item28::defaultValue = 0;
const std::string DEBUG_::Item29::itemName = "Item29";
const int DEBUG_::Item29::defaultValue = 0;
const std::string DEBUG_::Item30::itemName = "Item30";
const int DEBUG_::Item30::defaultValue = 0;
const std::string DEBUG_::Item31::itemName = "Item31";
const int DEBUG_::Item31::defaultValue = 0;
const std::string DEBUG_::Item32::itemName = "Item32";
const int DEBUG_::Item32::defaultValue = 0;
const std::string DEBUG_::Item33::itemName = "Item33";
const int DEBUG_::Item33::defaultValue = 0;
const std::string DEBUG_::Item34::itemName = "Item34";
const int DEBUG_::Item34::defaultValue = 0;
const std::string DEBUG_::Item35::itemName = "Item35";
const int DEBUG_::Item35::defaultValue = 0;
const std::string DEBUG_::Item36::itemName = "Item36";
const int DEBUG_::Item36::defaultValue = 0;
const std::string DEBUG_::Item37::itemName = "Item37";
const int DEBUG_::Item37::defaultValue = 0;
const std::string DEBUG_::Item38::itemName = "Item38";
const int DEBUG_::Item38::defaultValue = 0;
const std::string DEBUG_::Item39::itemName = "Item39";
const int DEBUG_::Item39::defaultValue = 0;
const std::string DEBUG_::Item40::itemName = "Item40";
const int DEBUG_::Item40::defaultValue = 0;
const std::string DEBUG_::Item41::itemName = "Item41";
const int DEBUG_::Item41::defaultValue = 0;
const std::string DEBUG_::Item42::itemName = "Item42";
const int DEBUG_::Item42::defaultValue = 0;
const std::string DEBUG_::Item43::itemName = "Item43";
const int DEBUG_::Item43::defaultValue = 0;
const std::string DEBUG_::Item44::itemName = "Item44";
const int DEBUG_::Item44::defaultValue = 0;
const std::string DEBUG_::Item45::itemName = "Item45";
const int DEBUG_::Item45::defaultValue = 0;
const std::string DEBUG_::Item46::itemName = "Item46";
const int DEBUG_::Item46::defaultValue = 0;
const std::string DEBUG_::Item47::itemName = "Item47";
const int DEBUG_::Item47::defaultValue = 0;
const std::string DEBUG_::Item48::itemName = "Item48";
const int DEBUG_::Item48::defaultValue = 0;
const std::string DEBUG_::Item49::itemName = "Item49";
const int DEBUG_::Item49::defaultValue = 0;
const std::string DEBUG_::Item50::itemName = "Item50";
const int DEBUG_::Item50::defaultValue = 0;
const std::string DEBUG_::Item51::itemName = "Item51";
const int DEBUG_::Item51::defaultValue = 0;
const std::string DEBUG_::Item52::itemName = "Item52";
const int DEBUG_::Item52::defaultValue = 0;
const std::string DEBUG_::Item53::itemName = "Item53";
const int DEBUG_::Item53::defaultValue = 0;
const std::string DEBUG_::Item54::itemName = "Item54";
const int DEBUG_::Item54::defaultValue = 0;
const std::string DEBUG_::Item55::itemName = "Item55";
const int DEBUG_::Item55::defaultValue = 0;
const std::string DEBUG_::Item56::itemName = "Item56";
const int DEBUG_::Item56::defaultValue = 0;
const std::string DEBUG_::Item57::itemName = "Item57";
const int DEBUG_::Item57::defaultValue = 0;
const std::string DEBUG_::Item58::itemName = "Item58";
const int DEBUG_::Item58::defaultValue = 0;
const std::string DEBUG_::Item59::itemName = "Item59";
const int DEBUG_::Item59::defaultValue = 0;
const std::string DEBUG_::Item60::itemName = "Item60";
const int DEBUG_::Item60::defaultValue = 0;
const std::string DEBUG_::Item61::itemName = "Item61";
const int DEBUG_::Item61::defaultValue = 0;
const std::string DEBUG_::Item62::itemName = "Item62";
const int DEBUG_::Item62::defaultValue = 0;
const std::string DEBUG_::Item63::itemName = "Item63";
const int DEBUG_::Item63::defaultValue = 0;
const std::string DEBUG_::Item64::itemName = "Item64";
const int DEBUG_::Item64::defaultValue = 0;
const std::string DEBUG_::Item65::itemName = "Item65";
const int DEBUG_::Item65::defaultValue = 0;
const std::string DEBUG_::Item66::itemName = "Item66";
const int DEBUG_::Item66::defaultValue = 0;
const std::string DEBUG_::Item67::itemName = "Item67";
const int DEBUG_::Item67::defaultValue = 0;
const std::string DEBUG_::Item68::itemName = "Item68";
const int DEBUG_::Item68::defaultValue = 0;
const std::string DEBUG_::Item69::itemName = "Item69";
const int DEBUG_::Item69::defaultValue = 0;
const std::string DEBUG_::Item70::itemName = "Item70";
const int DEBUG_::Item70::defaultValue = 0;
const std::string DEBUG_::Item71::itemName = "Item71";
const int DEBUG_::Item71::defaultValue = 0;
const std::string DEBUG_::Item72::itemName = "Item72";
const int DEBUG_::Item72::defaultValue = 0;
const std::string DEBUG_::Item73::itemName = "Item73";
const int DEBUG_::Item73::defaultValue = 0;
const std::string DEBUG_::Item74::itemName = "Item74";
const int DEBUG_::Item74::defaultValue = 0;
const std::string DEBUG_::Item75::itemName = "Item75";
const int DEBUG_::Item75::defaultValue = 0;
const std::string DEBUG_::Item76::itemName = "Item76";
const int DEBUG_::Item76::defaultValue = 0;
const std::string DEBUG_::Item77::itemName = "Item77";
const int DEBUG_::Item77::defaultValue = 0;
const std::string DEBUG_::Item78::itemName = "Item78";
const int DEBUG_::Item78::defaultValue = 0;
const std::string DEBUG_::Item79::itemName = "Item79";
const int DEBUG_::Item79::defaultValue = 0;
const std::string DEBUG_::Item80::itemName = "Item80";
const int DEBUG_::Item80::defaultValue = 0;
const std::string DEBUG_::Item81::itemName = "Item81";
const int DEBUG_::Item81::defaultValue = 0;
const std::string DEBUG_::Item82::itemName = "Item82";
const int DEBUG_::Item82::defaultValue = 0;
const std::string DEBUG_::Item83::itemName = "Item83";
const int DEBUG_::Item83::defaultValue = 0;
const std::string DEBUG_::Item84::itemName = "Item84";
const int DEBUG_::Item84::defaultValue = 0;
const std::string DEBUG_::Item85::itemName = "Item85";
const int DEBUG_::Item85::defaultValue = 0;
const std::string DEBUG_::Item86::itemName = "Item86";
const int DEBUG_::Item86::defaultValue = 0;
const std::string DEBUG_::Item87::itemName = "Item87";
const int DEBUG_::Item87::defaultValue = 0;


DENSITY::DENSITY( ) : ParserKeyword("DENSITY") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("DENSITY");
  {
     ParserRecord record;
     {
        ParserItem item("OIL", ParserItem::item_size::SINGLE, double( 600 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addItem(item);
     }
     {
        ParserItem item("WATER", ParserItem::item_size::SINGLE, double( 999.01400000000001 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addItem(item);
     }
     {
        ParserItem item("GAS", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string DENSITY::keywordName = "DENSITY";
const std::string DENSITY::OIL::itemName = "OIL";
const double DENSITY::OIL::defaultValue = 600.000000;
const std::string DENSITY::WATER::itemName = "WATER";
const double DENSITY::WATER::defaultValue = 999.014000;
const std::string DENSITY::GAS::itemName = "GAS";
const double DENSITY::GAS::defaultValue = 1.000000;


DEPTH::DEPTH( ) : ParserKeyword("DEPTH") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  clearDeckNames();
  addDeckName("DEPTH");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DEPTH::keywordName = "DEPTH";
const std::string DEPTH::data::itemName = "data";


DEPTHZ::DEPTHZ( ) : ParserKeyword("DEPTHZ") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DEPTHZ");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DEPTHZ::keywordName = "DEPTHZ";
const std::string DEPTHZ::data::itemName = "data";


DIMENS::DIMENS( ) : ParserKeyword("DIMENS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("DIMENS");
  {
     ParserRecord record;
     {
        ParserItem item("NX", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NY", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NZ", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string DIMENS::keywordName = "DIMENS";
const std::string DIMENS::NX::itemName = "NX";
const std::string DIMENS::NY::itemName = "NY";
const std::string DIMENS::NZ::itemName = "NZ";


DISGAS::DISGAS( ) : ParserKeyword("DISGAS") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("DISGAS");
}
const std::string DISGAS::keywordName = "DISGAS";


DR::DR( ) : ParserKeyword("DR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DR::keywordName = "DR";
const std::string DR::data::itemName = "data";


DREF::DREF( ) : ParserKeyword("DREF") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("DREF");
  {
     ParserRecord record;
     {
        ParserItem item("DENSITY", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string DREF::keywordName = "DREF";
const std::string DREF::DENSITY::itemName = "DENSITY";


DREFS::DREFS( ) : ParserKeyword("DREFS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("DREFS");
  {
     ParserRecord record;
     {
        ParserItem item("DENSITY", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string DREFS::keywordName = "DREFS";
const std::string DREFS::DENSITY::itemName = "DENSITY";


DRSDT::DRSDT( ) : ParserKeyword("DRSDT") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("DRSDT");
  {
     ParserRecord record;
     {
        ParserItem item("DRSDT_MAX", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("GasDissolutionFactor/Time");
        record.addItem(item);
     }
     {
        ParserItem item("Option", ParserItem::item_size::SINGLE, "ALL" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string DRSDT::keywordName = "DRSDT";
const std::string DRSDT::DRSDT_MAX::itemName = "DRSDT_MAX";
const std::string DRSDT::Option::itemName = "Option";
const std::string DRSDT::Option::defaultValue = "ALL";


DRV::DRV( ) : ParserKeyword("DRV") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DRV");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DRV::keywordName = "DRV";
const std::string DRV::data::itemName = "data";


DRVDT::DRVDT( ) : ParserKeyword("DRVDT") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("DRVDT");
  {
     ParserRecord record;
     {
        ParserItem item("DRVDT_MAX", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("OilDissolutionFactor/Time");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string DRVDT::keywordName = "DRVDT";
const std::string DRVDT::DRVDT_MAX::itemName = "DRVDT_MAX";


DTHETA::DTHETA( ) : ParserKeyword("DTHETA") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DTHETA");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DTHETA::keywordName = "DTHETA";
const std::string DTHETA::data::itemName = "data";


DTHETAV::DTHETAV( ) : ParserKeyword("DTHETAV") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DTHETAV");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DTHETAV::keywordName = "DTHETAV";
const std::string DTHETAV::data::itemName = "data";


DUMPFLUX::DUMPFLUX( ) : ParserKeyword("DUMPFLUX") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DUMPFLUX");
}
const std::string DUMPFLUX::keywordName = "DUMPFLUX";


DX::DX( ) : ParserKeyword("DX") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DX");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DX::keywordName = "DX";
const std::string DX::data::itemName = "data";


DXV::DXV( ) : ParserKeyword("DXV") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DXV");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DXV::keywordName = "DXV";
const std::string DXV::data::itemName = "data";


DY::DY( ) : ParserKeyword("DY") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DY");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DY::keywordName = "DY";
const std::string DY::data::itemName = "data";


DYV::DYV( ) : ParserKeyword("DYV") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DYV");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DYV::keywordName = "DYV";
const std::string DYV::data::itemName = "data";


DZ::DZ( ) : ParserKeyword("DZ") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DZ");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DZ::keywordName = "DZ";
const std::string DZ::data::itemName = "data";


DZV::DZV( ) : ParserKeyword("DZV") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("DZV");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string DZV::keywordName = "DZV";
const std::string DZV::data::itemName = "data";


ECHO::ECHO( ) : ParserKeyword("ECHO") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("ECHO");
}
const std::string ECHO::keywordName = "ECHO";


EDIT::EDIT( ) : ParserKeyword("EDIT") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  clearDeckNames();
  addDeckName("EDIT");
}
const std::string EDIT::keywordName = "EDIT";


EDITNNC::EDITNNC( ) : ParserKeyword("EDITNNC") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  clearDeckNames();
  addDeckName("EDITNNC");
  {
     ParserRecord record;
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRAN_MULT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SAT_TABLE12", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SAT_TABLE21", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PRESS_TABLE12", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PRESS_TABLE21", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FACE_FLOW12", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FACE_FLOW21", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DIFFM", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string EDITNNC::keywordName = "EDITNNC";
const std::string EDITNNC::I1::itemName = "I1";
const std::string EDITNNC::J1::itemName = "J1";
const std::string EDITNNC::K1::itemName = "K1";
const std::string EDITNNC::I2::itemName = "I2";
const std::string EDITNNC::J2::itemName = "J2";
const std::string EDITNNC::K2::itemName = "K2";
const std::string EDITNNC::TRAN_MULT::itemName = "TRAN_MULT";
const std::string EDITNNC::SAT_TABLE12::itemName = "SAT_TABLE12";
const std::string EDITNNC::SAT_TABLE21::itemName = "SAT_TABLE21";
const std::string EDITNNC::PRESS_TABLE12::itemName = "PRESS_TABLE12";
const std::string EDITNNC::PRESS_TABLE21::itemName = "PRESS_TABLE21";
const std::string EDITNNC::FACE_FLOW12::itemName = "FACE_FLOW12";
const std::string EDITNNC::FACE_FLOW21::itemName = "FACE_FLOW21";
const std::string EDITNNC::DIFFM::itemName = "DIFFM";


EHYSTR::EHYSTR( ) : ParserKeyword("EHYSTR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("EHYSTR");
  {
     ParserRecord record;
     {
        ParserItem item("curvature_caplillary_pressure_hyst", ParserItem::item_size::SINGLE, double( 0.10000000000000001 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("relative_perm_hyst", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("curvature_param_killough_wetting", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("mod_param_trapped", ParserItem::item_size::SINGLE, double( 0.10000000000000001 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("limiting_hyst_flag", ParserItem::item_size::SINGLE, "BOTH" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("shape_cap_press_flag", ParserItem::item_size::SINGLE, "RETR" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("init_fluid_mob_flag", ParserItem::item_size::SINGLE, "DRAIN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("wetting_phase_flag", ParserItem::item_size::SINGLE, "OIL" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("baker_flag_oil", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("baker_flag_gas", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("baker_flag_water", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("threshold_saturation", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string EHYSTR::keywordName = "EHYSTR";
const std::string EHYSTR::curvature_caplillary_pressure_hyst::itemName = "curvature_caplillary_pressure_hyst";
const double EHYSTR::curvature_caplillary_pressure_hyst::defaultValue = 0.100000;
const std::string EHYSTR::relative_perm_hyst::itemName = "relative_perm_hyst";
const int EHYSTR::relative_perm_hyst::defaultValue = 0;
const std::string EHYSTR::curvature_param_killough_wetting::itemName = "curvature_param_killough_wetting";
const double EHYSTR::curvature_param_killough_wetting::defaultValue = 1.000000;
const std::string EHYSTR::mod_param_trapped::itemName = "mod_param_trapped";
const double EHYSTR::mod_param_trapped::defaultValue = 0.100000;
const std::string EHYSTR::limiting_hyst_flag::itemName = "limiting_hyst_flag";
const std::string EHYSTR::limiting_hyst_flag::defaultValue = "BOTH";
const std::string EHYSTR::shape_cap_press_flag::itemName = "shape_cap_press_flag";
const std::string EHYSTR::shape_cap_press_flag::defaultValue = "RETR";
const std::string EHYSTR::init_fluid_mob_flag::itemName = "init_fluid_mob_flag";
const std::string EHYSTR::init_fluid_mob_flag::defaultValue = "DRAIN";
const std::string EHYSTR::wetting_phase_flag::itemName = "wetting_phase_flag";
const std::string EHYSTR::wetting_phase_flag::defaultValue = "OIL";
const std::string EHYSTR::baker_flag_oil::itemName = "baker_flag_oil";
const std::string EHYSTR::baker_flag_oil::defaultValue = "NO";
const std::string EHYSTR::baker_flag_gas::itemName = "baker_flag_gas";
const std::string EHYSTR::baker_flag_gas::defaultValue = "NO";
const std::string EHYSTR::baker_flag_water::itemName = "baker_flag_water";
const std::string EHYSTR::baker_flag_water::defaultValue = "NO";
const std::string EHYSTR::threshold_saturation::itemName = "threshold_saturation";
const double EHYSTR::threshold_saturation::defaultValue = 0.000000;


END::END( ) : ParserKeyword("END") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("END");
}
const std::string END::keywordName = "END";


ENDACTIO::ENDACTIO( ) : ParserKeyword("ENDACTIO") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("ENDACTIO");
}
const std::string ENDACTIO::keywordName = "ENDACTIO";


ENDBOX::ENDBOX( ) : ParserKeyword("ENDBOX") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("ENDBOX");
}
const std::string ENDBOX::keywordName = "ENDBOX";


ENDINC::ENDINC( ) : ParserKeyword("ENDINC") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("ENDINC");
}
const std::string ENDINC::keywordName = "ENDINC";


ENDNUM::ENDNUM( ) : ParserKeyword("ENDNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("ENDNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ENDNUM::keywordName = "ENDNUM";
const std::string ENDNUM::data::itemName = "data";


ENDPOINT_SPECIFIERS::ENDPOINT_SPECIFIERS( ) : ParserKeyword("ENDPOINT_SPECIFIERS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("IKRG");
  addDeckName("IKRGR");
  addDeckName("IKRGRX");
  addDeckName("IKRGRX-");
  addDeckName("IKRGRY");
  addDeckName("IKRGRY-");
  addDeckName("IKRGRZ");
  addDeckName("IKRGRZ-");
  addDeckName("IKRGX");
  addDeckName("IKRGX-");
  addDeckName("IKRGY");
  addDeckName("IKRGY-");
  addDeckName("IKRGZ");
  addDeckName("IKRGZ-");
  addDeckName("IKRO");
  addDeckName("IKRORG");
  addDeckName("IKRORGX");
  addDeckName("IKRORGX-");
  addDeckName("IKRORGY");
  addDeckName("IKRORGY-");
  addDeckName("IKRORGZ");
  addDeckName("IKRORGZ-");
  addDeckName("IKRORW");
  addDeckName("IKRORWX");
  addDeckName("IKRORWX-");
  addDeckName("IKRORWY");
  addDeckName("IKRORWY-");
  addDeckName("IKRORWZ");
  addDeckName("IKRORWZ-");
  addDeckName("IKROX-");
  addDeckName("IKROY-");
  addDeckName("IKROZ-");
  addDeckName("IKRW");
  addDeckName("IKRWR");
  addDeckName("IKRWRX");
  addDeckName("IKRWRX-");
  addDeckName("IKRWRY");
  addDeckName("IKRWRY-");
  addDeckName("IKRWRZ");
  addDeckName("IKRWRZ-");
  addDeckName("IKRWX");
  addDeckName("IKRWX-");
  addDeckName("IKRWY");
  addDeckName("IKRWY-");
  addDeckName("IKRWZ");
  addDeckName("IKRWZ-");
  addDeckName("ISGCR");
  addDeckName("ISGCRX");
  addDeckName("ISGCRX-");
  addDeckName("ISGCRY");
  addDeckName("ISGCRY-");
  addDeckName("ISGCRZ");
  addDeckName("ISGCRZ-");
  addDeckName("ISGU");
  addDeckName("ISGUX");
  addDeckName("ISGUX-");
  addDeckName("ISGUY");
  addDeckName("ISGUY-");
  addDeckName("ISGUZ");
  addDeckName("ISGUZ-");
  addDeckName("ISOGCR");
  addDeckName("ISOGCRX");
  addDeckName("ISOGCRX-");
  addDeckName("ISOGCRY");
  addDeckName("ISOGCRY-");
  addDeckName("ISOGCRZ");
  addDeckName("ISOGCRZ-");
  addDeckName("ISOWCR");
  addDeckName("ISOWCRX");
  addDeckName("ISOWCRX-");
  addDeckName("ISOWCRY");
  addDeckName("ISOWCRY-");
  addDeckName("ISOWCRZ");
  addDeckName("ISOWCRZ-");
  addDeckName("ISWCR");
  addDeckName("ISWCRX");
  addDeckName("ISWCRX-");
  addDeckName("ISWCRZ");
  addDeckName("ISWCRZ-");
  addDeckName("ISWL");
  addDeckName("ISWLX");
  addDeckName("ISWLX-");
  addDeckName("ISWLY");
  addDeckName("ISWLY-");
  addDeckName("ISWLZ");
  addDeckName("ISWLZ-");
  addDeckName("ISWU");
  addDeckName("ISWUX");
  addDeckName("ISWUX-");
  addDeckName("ISWUY");
  addDeckName("ISWUY-");
  addDeckName("ISWUZ");
  addDeckName("ISWUZ-");
  addDeckName("KRG");
  addDeckName("KRGR");
  addDeckName("KRGRX");
  addDeckName("KRGRX-");
  addDeckName("KRGRY");
  addDeckName("KRGRY-");
  addDeckName("KRGRZ");
  addDeckName("KRGRZ-");
  addDeckName("KRGX");
  addDeckName("KRGX-");
  addDeckName("KRGY");
  addDeckName("KRGY-");
  addDeckName("KRGZ");
  addDeckName("KRGZ-");
  addDeckName("KRO");
  addDeckName("KRORG");
  addDeckName("KRORGX");
  addDeckName("KRORGX-");
  addDeckName("KRORGY");
  addDeckName("KRORGY-");
  addDeckName("KRORGZ");
  addDeckName("KRORGZ-");
  addDeckName("KRORW");
  addDeckName("KRORWX");
  addDeckName("KRORWX-");
  addDeckName("KRORWY");
  addDeckName("KRORWY-");
  addDeckName("KRORWZ");
  addDeckName("KRORWZ-");
  addDeckName("KROX");
  addDeckName("KROX-");
  addDeckName("KROY");
  addDeckName("KROY-");
  addDeckName("KROZ");
  addDeckName("KROZ-");
  addDeckName("KRW");
  addDeckName("KRWR");
  addDeckName("KRWRX");
  addDeckName("KRWRX-");
  addDeckName("KRWRY");
  addDeckName("KRWRY-");
  addDeckName("KRWRZ");
  addDeckName("KRWRZ-");
  addDeckName("KRWX");
  addDeckName("KRWX-");
  addDeckName("KRWY");
  addDeckName("KRWY-");
  addDeckName("KRWZ");
  addDeckName("KRWZ-");
  addDeckName("SGCR");
  addDeckName("SGCRX");
  addDeckName("SGCRX-");
  addDeckName("SGCRY");
  addDeckName("SGCRY-");
  addDeckName("SGCRZ");
  addDeckName("SGCRZ-");
  addDeckName("SGU");
  addDeckName("SGUX");
  addDeckName("SGUX-");
  addDeckName("SGUY");
  addDeckName("SGUY-");
  addDeckName("SGUZ");
  addDeckName("SGUZ-");
  addDeckName("SOGCR");
  addDeckName("SOGCRX");
  addDeckName("SOGCRX-");
  addDeckName("SOGCRY");
  addDeckName("SOGCRY-");
  addDeckName("SOGCRZ");
  addDeckName("SOGCRZ-");
  addDeckName("SOWCR");
  addDeckName("SOWCRX");
  addDeckName("SOWCRX-");
  addDeckName("SOWCRY");
  addDeckName("SOWCRY-");
  addDeckName("SOWCRZ");
  addDeckName("SOWCRZ-");
  addDeckName("SWCR");
  addDeckName("SWCRX");
  addDeckName("SWCRX-");
  addDeckName("SWCRY");
  addDeckName("SWCRY-");
  addDeckName("SWCRZ");
  addDeckName("SWCRZ-");
  addDeckName("SWL");
  addDeckName("SWLX");
  addDeckName("SWLX-");
  addDeckName("SWLY");
  addDeckName("SWLY-");
  addDeckName("SWLZ");
  addDeckName("SWLZ-");
  addDeckName("SWU");
  addDeckName("SWUX");
  addDeckName("SWUX-");
  addDeckName("SWUY");
  addDeckName("SWUY-");
  addDeckName("SWUZ");
  addDeckName("SWUZ-");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ENDPOINT_SPECIFIERS::keywordName = "ENDPOINT_SPECIFIERS";
const std::string ENDPOINT_SPECIFIERS::data::itemName = "data";


ENDSCALE::ENDSCALE( ) : ParserKeyword("ENDSCALE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("ENDSCALE");
  {
     ParserRecord record;
     {
        ParserItem item("DIRECT", ParserItem::item_size::SINGLE, "NODIR" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("IRREVERS", ParserItem::item_size::SINGLE, "REVER" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NUM_TABLES", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NUM_NODES", ParserItem::item_size::SINGLE, 20 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("COMB_MODE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ENDSCALE::keywordName = "ENDSCALE";
const std::string ENDSCALE::DIRECT::itemName = "DIRECT";
const std::string ENDSCALE::DIRECT::defaultValue = "NODIR";
const std::string ENDSCALE::IRREVERS::itemName = "IRREVERS";
const std::string ENDSCALE::IRREVERS::defaultValue = "REVER";
const std::string ENDSCALE::NUM_TABLES::itemName = "NUM_TABLES";
const int ENDSCALE::NUM_TABLES::defaultValue = 1;
const std::string ENDSCALE::NUM_NODES::itemName = "NUM_NODES";
const int ENDSCALE::NUM_NODES::defaultValue = 20;
const std::string ENDSCALE::COMB_MODE::itemName = "COMB_MODE";
const int ENDSCALE::COMB_MODE::defaultValue = 0;


ENDSKIP::ENDSKIP( ) : ParserKeyword("ENDSKIP") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("ENDSKIP");
}
const std::string ENDSKIP::keywordName = "ENDSKIP";


ENKRVD::ENKRVD( ) : ParserKeyword("ENKRVD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("ENDSCALE","NUM_TABLES",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ENKRVD");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL, double( -1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ENKRVD::keywordName = "ENKRVD";
const std::string ENKRVD::DATA::itemName = "DATA";
const double ENKRVD::DATA::defaultValue = -1.000000;


ENPTVD::ENPTVD( ) : ParserKeyword("ENPTVD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("ENDSCALE","NUM_TABLES",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ENPTVD");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL, double( -1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ENPTVD::keywordName = "ENPTVD";
const std::string ENPTVD::DATA::itemName = "DATA";
const double ENPTVD::DATA::defaultValue = -1.000000;


EQLDIMS::EQLDIMS( ) : ParserKeyword("EQLDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("EQLDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("NTEQUL", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DEPTH_NODES_P", ParserItem::item_size::SINGLE, 100 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DEPTH_NODES_TAB", ParserItem::item_size::SINGLE, 20 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTTRVD", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NSTRVD", ParserItem::item_size::SINGLE, 20 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string EQLDIMS::keywordName = "EQLDIMS";
const std::string EQLDIMS::NTEQUL::itemName = "NTEQUL";
const int EQLDIMS::NTEQUL::defaultValue = 1;
const std::string EQLDIMS::DEPTH_NODES_P::itemName = "DEPTH_NODES_P";
const int EQLDIMS::DEPTH_NODES_P::defaultValue = 100;
const std::string EQLDIMS::DEPTH_NODES_TAB::itemName = "DEPTH_NODES_TAB";
const int EQLDIMS::DEPTH_NODES_TAB::defaultValue = 20;
const std::string EQLDIMS::NTTRVD::itemName = "NTTRVD";
const int EQLDIMS::NTTRVD::defaultValue = 1;
const std::string EQLDIMS::NSTRVD::itemName = "NSTRVD";
const int EQLDIMS::NSTRVD::defaultValue = 20;


EQLNUM::EQLNUM( ) : ParserKeyword("EQLNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("EQLNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string EQLNUM::keywordName = "EQLNUM";
const std::string EQLNUM::data::itemName = "data";


EQLOPTS::EQLOPTS( ) : ParserKeyword("EQLOPTS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("EQLOPTS");
  {
     ParserRecord record;
     {
        ParserItem item("OPTION1", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPTION2", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPTION3", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPTION4", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string EQLOPTS::keywordName = "EQLOPTS";
const std::string EQLOPTS::OPTION1::itemName = "OPTION1";
const std::string EQLOPTS::OPTION2::itemName = "OPTION2";
const std::string EQLOPTS::OPTION3::itemName = "OPTION3";
const std::string EQLOPTS::OPTION4::itemName = "OPTION4";


EQUALREG::EQUALREG( ) : ParserKeyword("EQUALREG") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("EQUALREG");
  {
     ParserRecord record;
     {
        ParserItem item("ARRAY", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("The 3D array we will update");
        record.addItem(item);
     }
     {
        ParserItem item("VALUE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("The value we will assign");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_NUMBER", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("The region number we are interested in");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_NAME", ParserItem::item_size::SINGLE, "M" ); item.setType( std::string() );
        item.setDescription("The name of the region we are interested in");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string EQUALREG::keywordName = "EQUALREG";
const std::string EQUALREG::ARRAY::itemName = "ARRAY";
const std::string EQUALREG::VALUE::itemName = "VALUE";
const double EQUALREG::VALUE::defaultValue = 0.000000;
const std::string EQUALREG::REGION_NUMBER::itemName = "REGION_NUMBER";
const std::string EQUALREG::REGION_NAME::itemName = "REGION_NAME";
const std::string EQUALREG::REGION_NAME::defaultValue = "M";


EQUALS::EQUALS( ) : ParserKeyword("EQUALS") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("EQUALS");
  {
     ParserRecord record;
     {
        ParserItem item("field", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("value", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string EQUALS::keywordName = "EQUALS";
const std::string EQUALS::field::itemName = "field";
const std::string EQUALS::value::itemName = "value";
const std::string EQUALS::I1::itemName = "I1";
const std::string EQUALS::I2::itemName = "I2";
const std::string EQUALS::J1::itemName = "J1";
const std::string EQUALS::J2::itemName = "J2";
const std::string EQUALS::K1::itemName = "K1";
const std::string EQUALS::K2::itemName = "K2";


EQUIL::EQUIL( ) : ParserKeyword("EQUIL") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("EQLDIMS","NTEQUL",0);
  setDescription("The EQUIL item is used when equilibrationg the model. The item should consist of one record for each PVT region");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("EQUIL");
  {
     ParserRecord record;
     {
        ParserItem item("DATUM_DEPTH", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("DATUM_PRESSURE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("OWC", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("The OWC item is depth of the OIL Water contact. This should ...");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("PC_OWC", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("GOC", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("PC_GOC", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("BLACK_OIL_INIT", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("BLACK_OIL_INIT_WG", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OIP_INIT", ParserItem::item_size::SINGLE, -5 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string EQUIL::keywordName = "EQUIL";
const std::string EQUIL::DATUM_DEPTH::itemName = "DATUM_DEPTH";
const double EQUIL::DATUM_DEPTH::defaultValue = 0.000000;
const std::string EQUIL::DATUM_PRESSURE::itemName = "DATUM_PRESSURE";
const std::string EQUIL::OWC::itemName = "OWC";
const double EQUIL::OWC::defaultValue = 0.000000;
const std::string EQUIL::PC_OWC::itemName = "PC_OWC";
const double EQUIL::PC_OWC::defaultValue = 0.000000;
const std::string EQUIL::GOC::itemName = "GOC";
const double EQUIL::GOC::defaultValue = 0.000000;
const std::string EQUIL::PC_GOC::itemName = "PC_GOC";
const double EQUIL::PC_GOC::defaultValue = 0.000000;
const std::string EQUIL::BLACK_OIL_INIT::itemName = "BLACK_OIL_INIT";
const int EQUIL::BLACK_OIL_INIT::defaultValue = 0;
const std::string EQUIL::BLACK_OIL_INIT_WG::itemName = "BLACK_OIL_INIT_WG";
const int EQUIL::BLACK_OIL_INIT_WG::defaultValue = 0;
const std::string EQUIL::OIP_INIT::itemName = "OIP_INIT";
const int EQUIL::OIP_INIT::defaultValue = -5;


EXCEL::EXCEL( ) : ParserKeyword("EXCEL") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("EXCEL");
}
const std::string EXCEL::keywordName = "EXCEL";


EXTRAPMS::EXTRAPMS( ) : ParserKeyword("EXTRAPMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("EXTRAPMS");
  {
     ParserRecord record;
     {
        ParserItem item("LEVEL", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string EXTRAPMS::keywordName = "EXTRAPMS";
const std::string EXTRAPMS::LEVEL::itemName = "LEVEL";
const int EXTRAPMS::LEVEL::defaultValue = 0;


FAULTDIM::FAULTDIM( ) : ParserKeyword("FAULTDIM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("FAULTDIM");
  {
     ParserRecord record;
     {
        ParserItem item("MFSEGS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string FAULTDIM::keywordName = "FAULTDIM";
const std::string FAULTDIM::MFSEGS::itemName = "MFSEGS";
const int FAULTDIM::MFSEGS::defaultValue = 0;


FAULTS::FAULTS( ) : ParserKeyword("FAULTS") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("FAULTS");
  {
     ParserRecord record;
     {
        ParserItem item("NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("IX1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("IX2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("IY1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("IY2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("IZ1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("IZ2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FACE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string FAULTS::keywordName = "FAULTS";
const std::string FAULTS::NAME::itemName = "NAME";
const std::string FAULTS::IX1::itemName = "IX1";
const std::string FAULTS::IX2::itemName = "IX2";
const std::string FAULTS::IY1::itemName = "IY1";
const std::string FAULTS::IY2::itemName = "IY2";
const std::string FAULTS::IZ1::itemName = "IZ1";
const std::string FAULTS::IZ2::itemName = "IZ2";
const std::string FAULTS::FACE::itemName = "FACE";


FIELD::FIELD( ) : ParserKeyword("FIELD") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("FIELD");
}
const std::string FIELD::keywordName = "FIELD";


FIELD_PROBE::FIELD_PROBE( ) : ParserKeyword("FIELD_PROBE") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("FAPI");
  addDeckName("FAQR");
  addDeckName("FAQRG");
  addDeckName("FAQT");
  addDeckName("FAQTG");
  addDeckName("FCAD");
  addDeckName("FCGC");
  addDeckName("FCIC");
  addDeckName("FCIP");
  addDeckName("FCIR");
  addDeckName("FCIT");
  addDeckName("FCPC");
  addDeckName("FCPR");
  addDeckName("FCPT");
  addDeckName("FCSC");
  addDeckName("FEPR");
  addDeckName("FEPT");
  addDeckName("FGCR");
  addDeckName("FGCT");
  addDeckName("FGDC");
  addDeckName("FGDCQ");
  addDeckName("FGDEN");
  addDeckName("FGIMR");
  addDeckName("FGIMT");
  addDeckName("FGIP");
  addDeckName("FGIPG");
  addDeckName("FGIPL");
  addDeckName("FGIR");
  addDeckName("FGIRH");
  addDeckName("FGIRT");
  addDeckName("FGIT");
  addDeckName("FGITH");
  addDeckName("FGLIR");
  addDeckName("FGLR");
  addDeckName("FGLRH");
  addDeckName("FGOR");
  addDeckName("FGORH");
  addDeckName("FGPI");
  addDeckName("FGPI2");
  addDeckName("FGPP");
  addDeckName("FGPP2");
  addDeckName("FGPPF");
  addDeckName("FGPPF2");
  addDeckName("FGPPS");
  addDeckName("FGPPS2");
  addDeckName("FGPR");
  addDeckName("FGPRF");
  addDeckName("FGPRH");
  addDeckName("FGPRS");
  addDeckName("FGPRT");
  addDeckName("FGPT");
  addDeckName("FGPTF");
  addDeckName("FGPTH");
  addDeckName("FGPTS");
  addDeckName("FGPV");
  addDeckName("FGQ");
  addDeckName("FGSAT");
  addDeckName("FGSPR");
  addDeckName("FGSR");
  addDeckName("FGSRL");
  addDeckName("FGSRU");
  addDeckName("FGSSP");
  addDeckName("FGST");
  addDeckName("FGSTP");
  addDeckName("FGVIS");
  addDeckName("FHPV");
  addDeckName("FJPR");
  addDeckName("FJPRH");
  addDeckName("FJPRT");
  addDeckName("FJPT");
  addDeckName("FJPTH");
  addDeckName("FLPR");
  addDeckName("FLPRH");
  addDeckName("FLPRT");
  addDeckName("FLPT");
  addDeckName("FLPTH");
  addDeckName("FMCTG");
  addDeckName("FMCTP");
  addDeckName("FMCTW");
  addDeckName("FMIR");
  addDeckName("FMIT");
  addDeckName("FMPR");
  addDeckName("FMPT");
  addDeckName("FMWDR");
  addDeckName("FMWDT");
  addDeckName("FMWIA");
  addDeckName("FMWIG");
  addDeckName("FMWIN");
  addDeckName("FMWIP");
  addDeckName("FMWIS");
  addDeckName("FMWIT");
  addDeckName("FMWIU");
  addDeckName("FMWIV");
  addDeckName("FMWPA");
  addDeckName("FMWPG");
  addDeckName("FMWPL");
  addDeckName("FMWPO");
  addDeckName("FMWPP");
  addDeckName("FMWPR");
  addDeckName("FMWPS");
  addDeckName("FMWPT");
  addDeckName("FMWPU");
  addDeckName("FMWPV");
  addDeckName("FMWWO");
  addDeckName("FMWWT");
  addDeckName("FNIP");
  addDeckName("FNIR");
  addDeckName("FNIT");
  addDeckName("FNPR");
  addDeckName("FNPT");
  addDeckName("FNQR");
  addDeckName("FNQT");
  addDeckName("FODEN");
  addDeckName("FOE");
  addDeckName("FOEIG");
  addDeckName("FOEIW");
  addDeckName("FOEW");
  addDeckName("FOEWG");
  addDeckName("FOEWW");
  addDeckName("FOGR");
  addDeckName("FOGRH");
  addDeckName("FOIP");
  addDeckName("FOIPG");
  addDeckName("FOIPL");
  addDeckName("FOIR");
  addDeckName("FOIRH");
  addDeckName("FOIRT");
  addDeckName("FOIT");
  addDeckName("FOITH");
  addDeckName("FOPI");
  addDeckName("FOPI2");
  addDeckName("FOPP");
  addDeckName("FOPP2");
  addDeckName("FOPR");
  addDeckName("FOPRF");
  addDeckName("FOPRH");
  addDeckName("FOPRS");
  addDeckName("FOPRT");
  addDeckName("FOPT");
  addDeckName("FOPTF");
  addDeckName("FOPTH");
  addDeckName("FOPTS");
  addDeckName("FOPV");
  addDeckName("FORFE");
  addDeckName("FORFF");
  addDeckName("FORFG");
  addDeckName("FORFR");
  addDeckName("FORFS");
  addDeckName("FORFW");
  addDeckName("FORFX");
  addDeckName("FORFY");
  addDeckName("FORME");
  addDeckName("FORMF");
  addDeckName("FORMG");
  addDeckName("FORMR");
  addDeckName("FORMS");
  addDeckName("FORMW");
  addDeckName("FORMX");
  addDeckName("FORMY");
  addDeckName("FOSAT");
  addDeckName("FOSPR");
  addDeckName("FOSRL");
  addDeckName("FOSRU");
  addDeckName("FOSSP");
  addDeckName("FOSTP");
  addDeckName("FOVIS");
  addDeckName("FPPC");
  addDeckName("FPPG");
  addDeckName("FPPO");
  addDeckName("FPPW");
  addDeckName("FPR");
  addDeckName("FPRGZ");
  addDeckName("FPRH");
  addDeckName("FPRP");
  addDeckName("FRPV");
  addDeckName("FRS");
  addDeckName("FRTM");
  addDeckName("FRV");
  addDeckName("FSGR");
  addDeckName("FSGT");
  addDeckName("FSIC");
  addDeckName("FSIP");
  addDeckName("FSIR");
  addDeckName("FSIT");
  addDeckName("FSPC");
  addDeckName("FSPR");
  addDeckName("FSPT");
  addDeckName("FTADSFOA");
  addDeckName("FTADSUR");
  addDeckName("FTDCYFOA");
  addDeckName("FTICHEA");
  addDeckName("FTIPTFOA");
  addDeckName("FTIPTHEA");
  addDeckName("FTIPTSUR");
  addDeckName("FTIRALK");
  addDeckName("FTIRANI");
  addDeckName("FTIRCAT");
  addDeckName("FTIRFOA");
  addDeckName("FTIRHEA");
  addDeckName("FTIRSUR");
  addDeckName("FTITALK");
  addDeckName("FTITANI");
  addDeckName("FTITCAT");
  addDeckName("FTITFOA");
  addDeckName("FTITHEA");
  addDeckName("FTITSUR");
  addDeckName("FTMOBFOA");
  addDeckName("FTPCHEA");
  addDeckName("FTPRALK");
  addDeckName("FTPRANI");
  addDeckName("FTPRCAT");
  addDeckName("FTPRFOA");
  addDeckName("FTPRHEA");
  addDeckName("FTPRSUR");
  addDeckName("FTPTALK");
  addDeckName("FTPTANI");
  addDeckName("FTPTCAT");
  addDeckName("FTPTFOA");
  addDeckName("FTPTHEA");
  addDeckName("FTPTSUR");
  addDeckName("FVIR");
  addDeckName("FVIRT");
  addDeckName("FVIT");
  addDeckName("FVPR");
  addDeckName("FVPRT");
  addDeckName("FVPT");
  addDeckName("FWCT");
  addDeckName("FWCTH");
  addDeckName("FWDEN");
  addDeckName("FWGR");
  addDeckName("FWGRH");
  addDeckName("FWIP");
  addDeckName("FWIR");
  addDeckName("FWIRH");
  addDeckName("FWIRT");
  addDeckName("FWIT");
  addDeckName("FWITH");
  addDeckName("FWPI");
  addDeckName("FWPI2");
  addDeckName("FWPIR");
  addDeckName("FWPP");
  addDeckName("FWPP2");
  addDeckName("FWPR");
  addDeckName("FWPRH");
  addDeckName("FWPRT");
  addDeckName("FWPT");
  addDeckName("FWPTH");
  addDeckName("FWPV");
  addDeckName("FWSAT");
  addDeckName("FWSPR");
  addDeckName("FWSRL");
  addDeckName("FWSRU");
  addDeckName("FWSSP");
  addDeckName("FWSTP");
  addDeckName("FWVIS");
  addDeckName("PSSPR");
  addDeckName("PSSSC");
  addDeckName("PSSSG");
  addDeckName("PSSSO");
  addDeckName("PSSSW");
  setMatchRegex("FU.+|FTPR.+|FTPT.+|FTPC.+|FTIR.+|FTIT.+|FTIC.+|FTIPT.+|FTIPF.+|FTIPS|FTIP[1-9][0-9]*.+|FTPR.+|FTPT.+|FTPC.+|FTIR.+|FTIT.+|FTIC.+|FTADS.+|FTDCY.+|FTIRF.+|FTIRS.+|FTPRF.+|FTPRS.+|FTITF.+|FTITS.+|FTPTF.+|FTPTS.+|FTICF.+|FTICS.+|FTPCF.+|FTPCS.+");
}
const std::string FIELD_PROBE::keywordName = "FIELD_PROBE";


FILLEPS::FILLEPS( ) : ParserKeyword("FILLEPS") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("FILLEPS");
}
const std::string FILLEPS::keywordName = "FILLEPS";


FIPOWG::FIPOWG( ) : ParserKeyword("FIPOWG") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("FIPOWG");
}
const std::string FIPOWG::keywordName = "FIPOWG";


FIP_PROBE::FIP_PROBE( ) : ParserKeyword("FIP_PROBE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  setMatchRegex("FIP.+");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string FIP_PROBE::keywordName = "FIP_PROBE";
const std::string FIP_PROBE::data::itemName = "data";


FLUXNUM::FLUXNUM( ) : ParserKeyword("FLUXNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("FLUXNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string FLUXNUM::keywordName = "FLUXNUM";
const std::string FLUXNUM::data::itemName = "data";


FMTIN::FMTIN( ) : ParserKeyword("FMTIN") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("FMTIN");
}
const std::string FMTIN::keywordName = "FMTIN";


FMTOUT::FMTOUT( ) : ParserKeyword("FMTOUT") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("FMTOUT");
}
const std::string FMTOUT::keywordName = "FMTOUT";


FMWSET::FMWSET( ) : ParserKeyword("FMWSET") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("FMWSET");
}
const std::string FMWSET::keywordName = "FMWSET";


FULLIMP::FULLIMP( ) : ParserKeyword("FULLIMP") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("FULLIMP");
}
const std::string FULLIMP::keywordName = "FULLIMP";


GAS::GAS( ) : ParserKeyword("GAS") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("GAS");
}
const std::string GAS::keywordName = "GAS";


GASDENT::GASDENT( ) : ParserKeyword("GASDENT") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("GASDENT");
  {
     ParserRecord record;
     {
        ParserItem item("REFERENCE_TEMPERATURE", ParserItem::item_size::SINGLE, double( 293.15000000000003 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("AbsoluteTemperature");
        record.addItem(item);
     }
     {
        ParserItem item("EXPANSION_COEFF_LINEAR", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/AbsoluteTemperature");
        record.addItem(item);
     }
     {
        ParserItem item("EXPANSION_COEFF_QUADRATIC", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/AbsoluteTemperature*AbsoluteTemperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GASDENT::keywordName = "GASDENT";
const std::string GASDENT::REFERENCE_TEMPERATURE::itemName = "REFERENCE_TEMPERATURE";
const double GASDENT::REFERENCE_TEMPERATURE::defaultValue = 293.150000;
const std::string GASDENT::EXPANSION_COEFF_LINEAR::itemName = "EXPANSION_COEFF_LINEAR";
const double GASDENT::EXPANSION_COEFF_LINEAR::defaultValue = 0.000000;
const std::string GASDENT::EXPANSION_COEFF_QUADRATIC::itemName = "EXPANSION_COEFF_QUADRATIC";
const double GASDENT::EXPANSION_COEFF_QUADRATIC::defaultValue = 0.000000;


GASVISCT::GASVISCT( ) : ParserKeyword("GASVISCT") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("GASVISCT");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ContextDependent");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GASVISCT::keywordName = "GASVISCT";
const std::string GASVISCT::DATA::itemName = "DATA";


GCOMPIDX::GCOMPIDX( ) : ParserKeyword("GCOMPIDX") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("GCOMPIDX");
  {
     ParserRecord record;
     {
        ParserItem item("GAS_COMPONENT_INDEX", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GCOMPIDX::keywordName = "GCOMPIDX";
const std::string GCOMPIDX::GAS_COMPONENT_INDEX::itemName = "GAS_COMPONENT_INDEX";


GCONINJE::GCONINJE( ) : ParserKeyword("GCONINJE") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("GCONINJE");
  {
     ParserRecord record;
     {
        ParserItem item("GROUP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PHASE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CONTROL_MODE", ParserItem::item_size::SINGLE, "NONE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SURFACE_TARGET", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ContextDependent");
        record.addItem(item);
     }
     {
        ParserItem item("RESV_TARGET", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ReservoirVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("REINJ_TARGET", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("VOIDAGE_TARGET", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("FREE", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GUIDE_FRACTION", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("GUIDE_DEF", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("REINJECT_GROUP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VOIDAGE_GROUP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WETGAS_TARGET", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("GasSurfaceVolume/Time");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GCONINJE::keywordName = "GCONINJE";
const std::string GCONINJE::GROUP::itemName = "GROUP";
const std::string GCONINJE::PHASE::itemName = "PHASE";
const std::string GCONINJE::CONTROL_MODE::itemName = "CONTROL_MODE";
const std::string GCONINJE::CONTROL_MODE::defaultValue = "NONE";
const std::string GCONINJE::SURFACE_TARGET::itemName = "SURFACE_TARGET";
const double GCONINJE::SURFACE_TARGET::defaultValue = 0.000000;
const std::string GCONINJE::RESV_TARGET::itemName = "RESV_TARGET";
const double GCONINJE::RESV_TARGET::defaultValue = 0.000000;
const std::string GCONINJE::REINJ_TARGET::itemName = "REINJ_TARGET";
const double GCONINJE::REINJ_TARGET::defaultValue = 0.000000;
const std::string GCONINJE::VOIDAGE_TARGET::itemName = "VOIDAGE_TARGET";
const double GCONINJE::VOIDAGE_TARGET::defaultValue = 0.000000;
const std::string GCONINJE::FREE::itemName = "FREE";
const std::string GCONINJE::FREE::defaultValue = "YES";
const std::string GCONINJE::GUIDE_FRACTION::itemName = "GUIDE_FRACTION";
const double GCONINJE::GUIDE_FRACTION::defaultValue = 0.000000;
const std::string GCONINJE::GUIDE_DEF::itemName = "GUIDE_DEF";
const std::string GCONINJE::REINJECT_GROUP::itemName = "REINJECT_GROUP";
const std::string GCONINJE::VOIDAGE_GROUP::itemName = "VOIDAGE_GROUP";
const std::string GCONINJE::WETGAS_TARGET::itemName = "WETGAS_TARGET";


GCONPROD::GCONPROD( ) : ParserKeyword("GCONPROD") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("GCONPROD");
  {
     ParserRecord record;
     {
        ParserItem item("GROUP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CONTROL_MODE", ParserItem::item_size::SINGLE, "NONE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OIL_TARGET", ParserItem::item_size::SINGLE, double( -9.9899999999999998e+102 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_TARGET", ParserItem::item_size::SINGLE, double( -9.9899999999999998e+102 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("GAS_TARGET", ParserItem::item_size::SINGLE, double( -9.9899999999999998e+102 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("GasSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("LIQUID_TARGET", ParserItem::item_size::SINGLE, double( -9.9899999999999998e+102 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("EXCEED_PROC", ParserItem::item_size::SINGLE, "NONE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("RESPOND_TO_PARENT", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GUIDE_RATE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GUIDE_RATE_DEF", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_EXCEED_PROCEDURE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GAS_EXCEED_PROCEDURE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("LIQUID_EXCEED_PROCEDURE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("RESERVOIR_FLUID_TARGET", ParserItem::item_size::SINGLE, double( -9.9899999999999998e+102 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ReservoirVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("RESERVOIR_VOLUME_BALANCE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("WET_GAS_TARGET", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("CALORIFIC_TARGET", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("SURFACE_GAS_BALANCE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("SURFACE_WATER_BALANCE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("LINEAR_COMBINED_TARGET", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("LIN_TARGET_EXCEED_PROCEDURE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GCONPROD::keywordName = "GCONPROD";
const std::string GCONPROD::GROUP::itemName = "GROUP";
const std::string GCONPROD::CONTROL_MODE::itemName = "CONTROL_MODE";
const std::string GCONPROD::CONTROL_MODE::defaultValue = "NONE";
const std::string GCONPROD::OIL_TARGET::itemName = "OIL_TARGET";
const double GCONPROD::OIL_TARGET::defaultValue = -9989999999999999764508097064678579891241680670206998059982957902605768119280291502755086619213633159168.000000;
const std::string GCONPROD::WATER_TARGET::itemName = "WATER_TARGET";
const double GCONPROD::WATER_TARGET::defaultValue = -9989999999999999764508097064678579891241680670206998059982957902605768119280291502755086619213633159168.000000;
const std::string GCONPROD::GAS_TARGET::itemName = "GAS_TARGET";
const double GCONPROD::GAS_TARGET::defaultValue = -9989999999999999764508097064678579891241680670206998059982957902605768119280291502755086619213633159168.000000;
const std::string GCONPROD::LIQUID_TARGET::itemName = "LIQUID_TARGET";
const double GCONPROD::LIQUID_TARGET::defaultValue = -9989999999999999764508097064678579891241680670206998059982957902605768119280291502755086619213633159168.000000;
const std::string GCONPROD::EXCEED_PROC::itemName = "EXCEED_PROC";
const std::string GCONPROD::EXCEED_PROC::defaultValue = "NONE";
const std::string GCONPROD::RESPOND_TO_PARENT::itemName = "RESPOND_TO_PARENT";
const std::string GCONPROD::RESPOND_TO_PARENT::defaultValue = "YES";
const std::string GCONPROD::GUIDE_RATE::itemName = "GUIDE_RATE";
const std::string GCONPROD::GUIDE_RATE_DEF::itemName = "GUIDE_RATE_DEF";
const std::string GCONPROD::WATER_EXCEED_PROCEDURE::itemName = "WATER_EXCEED_PROCEDURE";
const std::string GCONPROD::GAS_EXCEED_PROCEDURE::itemName = "GAS_EXCEED_PROCEDURE";
const std::string GCONPROD::LIQUID_EXCEED_PROCEDURE::itemName = "LIQUID_EXCEED_PROCEDURE";
const std::string GCONPROD::RESERVOIR_FLUID_TARGET::itemName = "RESERVOIR_FLUID_TARGET";
const double GCONPROD::RESERVOIR_FLUID_TARGET::defaultValue = -9989999999999999764508097064678579891241680670206998059982957902605768119280291502755086619213633159168.000000;
const std::string GCONPROD::RESERVOIR_VOLUME_BALANCE::itemName = "RESERVOIR_VOLUME_BALANCE";
const std::string GCONPROD::WET_GAS_TARGET::itemName = "WET_GAS_TARGET";
const std::string GCONPROD::CALORIFIC_TARGET::itemName = "CALORIFIC_TARGET";
const std::string GCONPROD::SURFACE_GAS_BALANCE::itemName = "SURFACE_GAS_BALANCE";
const std::string GCONPROD::SURFACE_WATER_BALANCE::itemName = "SURFACE_WATER_BALANCE";
const std::string GCONPROD::LINEAR_COMBINED_TARGET::itemName = "LINEAR_COMBINED_TARGET";
const std::string GCONPROD::LIN_TARGET_EXCEED_PROCEDURE::itemName = "LIN_TARGET_EXCEED_PROCEDURE";


GDORIENT::GDORIENT( ) : ParserKeyword("GDORIENT") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("GDORIENT");
  {
     ParserRecord record;
     {
        ParserItem item("I", ParserItem::item_size::SINGLE, "INC" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE, "INC" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE, "INC" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Z", ParserItem::item_size::SINGLE, "DOWN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("HAND", ParserItem::item_size::SINGLE, "RIGHT" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GDORIENT::keywordName = "GDORIENT";
const std::string GDORIENT::I::itemName = "I";
const std::string GDORIENT::I::defaultValue = "INC";
const std::string GDORIENT::J::itemName = "J";
const std::string GDORIENT::J::defaultValue = "INC";
const std::string GDORIENT::K::itemName = "K";
const std::string GDORIENT::K::defaultValue = "INC";
const std::string GDORIENT::Z::itemName = "Z";
const std::string GDORIENT::Z::defaultValue = "DOWN";
const std::string GDORIENT::HAND::itemName = "HAND";
const std::string GDORIENT::HAND::defaultValue = "RIGHT";


GECON::GECON( ) : ParserKeyword("GECON") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("GECON");
  {
     ParserRecord record;
     {
        ParserItem item("GROUP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_OIL_RATE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_GAS_RATE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WCT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_GOR", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WATER_GAS_RATIO", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WORKOVER", ParserItem::item_size::SINGLE, "NONE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("END_RUN", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_OPEN_WELLS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GECON::keywordName = "GECON";
const std::string GECON::GROUP::itemName = "GROUP";
const std::string GECON::MIN_OIL_RATE::itemName = "MIN_OIL_RATE";
const double GECON::MIN_OIL_RATE::defaultValue = 0.000000;
const std::string GECON::MIN_GAS_RATE::itemName = "MIN_GAS_RATE";
const double GECON::MIN_GAS_RATE::defaultValue = 0.000000;
const std::string GECON::MAX_WCT::itemName = "MAX_WCT";
const double GECON::MAX_WCT::defaultValue = 0.000000;
const std::string GECON::MAX_GOR::itemName = "MAX_GOR";
const double GECON::MAX_GOR::defaultValue = 0.000000;
const std::string GECON::MAX_WATER_GAS_RATIO::itemName = "MAX_WATER_GAS_RATIO";
const double GECON::MAX_WATER_GAS_RATIO::defaultValue = 0.000000;
const std::string GECON::WORKOVER::itemName = "WORKOVER";
const std::string GECON::WORKOVER::defaultValue = "NONE";
const std::string GECON::END_RUN::itemName = "END_RUN";
const std::string GECON::END_RUN::defaultValue = "NO";
const std::string GECON::MAX_OPEN_WELLS::itemName = "MAX_OPEN_WELLS";
const int GECON::MAX_OPEN_WELLS::defaultValue = 0;


GEFAC::GEFAC( ) : ParserKeyword("GEFAC") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("GEFAC");
  {
     ParserRecord record;
     {
        ParserItem item("GROUP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("EFFICIENCY_FACTOR", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRANSFER_EXT_NET", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GEFAC::keywordName = "GEFAC";
const std::string GEFAC::GROUP::itemName = "GROUP";
const std::string GEFAC::EFFICIENCY_FACTOR::itemName = "EFFICIENCY_FACTOR";
const double GEFAC::EFFICIENCY_FACTOR::defaultValue = 1.000000;
const std::string GEFAC::TRANSFER_EXT_NET::itemName = "TRANSFER_EXT_NET";
const std::string GEFAC::TRANSFER_EXT_NET::defaultValue = "YES";


GLIFTOPT::GLIFTOPT( ) : ParserKeyword("GLIFTOPT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("GLIFTOPT");
  {
     ParserRecord record;
     {
        ParserItem item("GROUP_NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_LIFT_GAS_SUPPLY", ParserItem::item_size::SINGLE, double( -1e+20 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_TOTAL_GAS_RATE", ParserItem::item_size::SINGLE, double( -1e+20 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GLIFTOPT::keywordName = "GLIFTOPT";
const std::string GLIFTOPT::GROUP_NAME::itemName = "GROUP_NAME";
const std::string GLIFTOPT::MAX_LIFT_GAS_SUPPLY::itemName = "MAX_LIFT_GAS_SUPPLY";
const double GLIFTOPT::MAX_LIFT_GAS_SUPPLY::defaultValue = -100000000000000000000.000000;
const std::string GLIFTOPT::MAX_TOTAL_GAS_RATE::itemName = "MAX_TOTAL_GAS_RATE";
const double GLIFTOPT::MAX_TOTAL_GAS_RATE::defaultValue = -100000000000000000000.000000;


GMWSET::GMWSET( ) : ParserKeyword("GMWSET") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("GMWSET");
}
const std::string GMWSET::keywordName = "GMWSET";


GRAVITY::GRAVITY( ) : ParserKeyword("GRAVITY") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("GRAVITY");
  {
     ParserRecord record;
     {
        ParserItem item("API_GRAVITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_SP_GRAVITY", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GAS_SP_GRAVITY", ParserItem::item_size::SINGLE, double( 0.77729999999999999 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GRAVITY::keywordName = "GRAVITY";
const std::string GRAVITY::API_GRAVITY::itemName = "API_GRAVITY";
const std::string GRAVITY::WATER_SP_GRAVITY::itemName = "WATER_SP_GRAVITY";
const double GRAVITY::WATER_SP_GRAVITY::defaultValue = 1.000000;
const std::string GRAVITY::GAS_SP_GRAVITY::itemName = "GAS_SP_GRAVITY";
const double GRAVITY::GAS_SP_GRAVITY::defaultValue = 0.777300;


GRID::GRID( ) : ParserKeyword("GRID") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  clearDeckNames();
  addDeckName("GRID");
}
const std::string GRID::keywordName = "GRID";


GRIDFILE::GRIDFILE( ) : ParserKeyword("GRIDFILE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("GRIDFILE");
  {
     ParserRecord record;
     {
        ParserItem item("GRID", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("EGRID", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GRIDFILE::keywordName = "GRIDFILE";
const std::string GRIDFILE::GRID::itemName = "GRID";
const int GRIDFILE::GRID::defaultValue = 0;
const std::string GRIDFILE::EGRID::itemName = "EGRID";
const int GRIDFILE::EGRID::defaultValue = 1;


GRIDOPTS::GRIDOPTS( ) : ParserKeyword("GRIDOPTS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("GRIDOPTS");
  {
     ParserRecord record;
     {
        ParserItem item("TRANMULT", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NRMULT", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NRPINC", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GRIDOPTS::keywordName = "GRIDOPTS";
const std::string GRIDOPTS::TRANMULT::itemName = "TRANMULT";
const std::string GRIDOPTS::TRANMULT::defaultValue = "NO";
const std::string GRIDOPTS::NRMULT::itemName = "NRMULT";
const int GRIDOPTS::NRMULT::defaultValue = 0;
const std::string GRIDOPTS::NRPINC::itemName = "NRPINC";
const int GRIDOPTS::NRPINC::defaultValue = 0;


GRIDUNIT::GRIDUNIT( ) : ParserKeyword("GRIDUNIT") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("GRIDUNIT");
  {
     ParserRecord record;
     {
        ParserItem item("LengthUnit", ParserItem::item_size::SINGLE, "METRES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GRIDUNIT::keywordName = "GRIDUNIT";
const std::string GRIDUNIT::LengthUnit::itemName = "LengthUnit";
const std::string GRIDUNIT::LengthUnit::defaultValue = "METRES";
const std::string GRIDUNIT::MAP::itemName = "MAP";


GROUP_PROBE::GROUP_PROBE( ) : ParserKeyword("GROUP_PROBE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("GALQ");
  addDeckName("GAPI");
  addDeckName("GCIC");
  addDeckName("GCIR");
  addDeckName("GCIT");
  addDeckName("GCPC");
  addDeckName("GCPR");
  addDeckName("GCPT");
  addDeckName("GEDC");
  addDeckName("GEDCQ");
  addDeckName("GEFF");
  addDeckName("GEPR");
  addDeckName("GEPT");
  addDeckName("GESR");
  addDeckName("GEST");
  addDeckName("GFGR");
  addDeckName("GFGT");
  addDeckName("GFMF");
  addDeckName("GGCR");
  addDeckName("GGCT");
  addDeckName("GGCV");
  addDeckName("GGDC");
  addDeckName("GGDCQ");
  addDeckName("GGIGR");
  addDeckName("GGIMR");
  addDeckName("GGIMT");
  addDeckName("GGIR");
  addDeckName("GGIRH");
  addDeckName("GGIRL");
  addDeckName("GGIRNB");
  addDeckName("GGIRT");
  addDeckName("GGIT");
  addDeckName("GGITH");
  addDeckName("GGLIR");
  addDeckName("GGLR");
  addDeckName("GGLRH");
  addDeckName("GGOR");
  addDeckName("GGORH");
  addDeckName("GGPGR");
  addDeckName("GGPI");
  addDeckName("GGPI2");
  addDeckName("GGPP");
  addDeckName("GGPP2");
  addDeckName("GGPPF");
  addDeckName("GGPPF2");
  addDeckName("GGPPS");
  addDeckName("GGPPS2");
  addDeckName("GGPR");
  addDeckName("GGPRF");
  addDeckName("GGPRH");
  addDeckName("GGPRL");
  addDeckName("GGPRNB");
  addDeckName("GGPRNBFP");
  addDeckName("GGPRS");
  addDeckName("GGPRT");
  addDeckName("GGPT");
  addDeckName("GGPTF");
  addDeckName("GGPTH");
  addDeckName("GGPTS");
  addDeckName("GGQ");
  addDeckName("GGSPR");
  addDeckName("GGSR");
  addDeckName("GGSRL");
  addDeckName("GGSRU");
  addDeckName("GGSSP");
  addDeckName("GGST");
  addDeckName("GGSTP");
  addDeckName("GJPR");
  addDeckName("GJPRH");
  addDeckName("GJPRL");
  addDeckName("GJPRT");
  addDeckName("GJPT");
  addDeckName("GJPTH");
  addDeckName("GLPR");
  addDeckName("GLPRH");
  addDeckName("GLPRL");
  addDeckName("GLPRNB");
  addDeckName("GLPRT");
  addDeckName("GLPT");
  addDeckName("GLPTH");
  addDeckName("GMCPL");
  addDeckName("GMCTG");
  addDeckName("GMCTP");
  addDeckName("GMCTW");
  addDeckName("GMIR");
  addDeckName("GMIT");
  addDeckName("GMPR");
  addDeckName("GMPT");
  addDeckName("GMWDR");
  addDeckName("GMWDT");
  addDeckName("GMWIA");
  addDeckName("GMWIG");
  addDeckName("GMWIN");
  addDeckName("GMWIP");
  addDeckName("GMWIS");
  addDeckName("GMWIT");
  addDeckName("GMWIU");
  addDeckName("GMWIV");
  addDeckName("GMWPA");
  addDeckName("GMWPG");
  addDeckName("GMWPL");
  addDeckName("GMWPO");
  addDeckName("GMWPP");
  addDeckName("GMWPR");
  addDeckName("GMWPS");
  addDeckName("GMWPT");
  addDeckName("GMWPU");
  addDeckName("GMWPV");
  addDeckName("GMWWO");
  addDeckName("GMWWT");
  addDeckName("GNIR");
  addDeckName("GNIT");
  addDeckName("GNPR");
  addDeckName("GNPT");
  addDeckName("GOGR");
  addDeckName("GOGRH");
  addDeckName("GOIGR");
  addDeckName("GOIR");
  addDeckName("GOIRH");
  addDeckName("GOIRL");
  addDeckName("GOIRT");
  addDeckName("GOIT");
  addDeckName("GOITH");
  addDeckName("GOPGR");
  addDeckName("GOPI");
  addDeckName("GOPI2");
  addDeckName("GOPP");
  addDeckName("GOPP2");
  addDeckName("GOPR");
  addDeckName("GOPRF");
  addDeckName("GOPRH");
  addDeckName("GOPRL");
  addDeckName("GOPRNB");
  addDeckName("GOPRS");
  addDeckName("GOPRT");
  addDeckName("GOPT");
  addDeckName("GOPTF");
  addDeckName("GOPTH");
  addDeckName("GOPTS");
  addDeckName("GOSPR");
  addDeckName("GOSRL");
  addDeckName("GOSRU");
  addDeckName("GOSSP");
  addDeckName("GOSTP");
  addDeckName("GPR");
  addDeckName("GPRB");
  addDeckName("GPRBG");
  addDeckName("GPRBW");
  addDeckName("GPRDC");
  addDeckName("GPRFP");
  addDeckName("GPRG");
  addDeckName("GPRW");
  addDeckName("GSGR");
  addDeckName("GSGT");
  addDeckName("GSIC");
  addDeckName("GSIR");
  addDeckName("GSIT");
  addDeckName("GSMF");
  addDeckName("GSPC");
  addDeckName("GSPR");
  addDeckName("GSPT");
  addDeckName("GTICHEA");
  addDeckName("GTIRALK");
  addDeckName("GTIRANI");
  addDeckName("GTIRCAT");
  addDeckName("GTIRFOA");
  addDeckName("GTIRHEA");
  addDeckName("GTIRSUR");
  addDeckName("GTITALK");
  addDeckName("GTITANI");
  addDeckName("GTITCAT");
  addDeckName("GTITFOA");
  addDeckName("GTITHEA");
  addDeckName("GTITSUR");
  addDeckName("GTPCHEA");
  addDeckName("GTPRALK");
  addDeckName("GTPRANI");
  addDeckName("GTPRCAT");
  addDeckName("GTPRFOA");
  addDeckName("GTPRHEA");
  addDeckName("GTPRSUR");
  addDeckName("GTPTALK");
  addDeckName("GTPTANI");
  addDeckName("GTPTCAT");
  addDeckName("GTPTFOA");
  addDeckName("GTPTHEA");
  addDeckName("GTPTSUR");
  addDeckName("GVIR");
  addDeckName("GVIRL");
  addDeckName("GVIRT");
  addDeckName("GVIT");
  addDeckName("GVPGR");
  addDeckName("GVPR");
  addDeckName("GVPRL");
  addDeckName("GVPRT");
  addDeckName("GVPT");
  addDeckName("GWCT");
  addDeckName("GWCTH");
  addDeckName("GWGR");
  addDeckName("GWGRH");
  addDeckName("GWIGR");
  addDeckName("GWIR");
  addDeckName("GWIRH");
  addDeckName("GWIRL");
  addDeckName("GWIRNB");
  addDeckName("GWIRT");
  addDeckName("GWIT");
  addDeckName("GWITH");
  addDeckName("GWPGR");
  addDeckName("GWPI");
  addDeckName("GWPI2");
  addDeckName("GWPIR");
  addDeckName("GWPP");
  addDeckName("GWPP2");
  addDeckName("GWPR");
  addDeckName("GWPRH");
  addDeckName("GWPRL");
  addDeckName("GWPRNB");
  addDeckName("GWPRT");
  addDeckName("GWPT");
  addDeckName("GWPTH");
  addDeckName("GWSPR");
  addDeckName("GWSRL");
  addDeckName("GWSRU");
  addDeckName("GWSSP");
  addDeckName("GWSTP");
  setMatchRegex("GU.+|GTPR.+|GTPT.+|GTPC.+|GTIR.+|GTIT.+|GTIC.+|GTIRF.+|GTIRS.+|GTPRF.+|GTPRS.+|GTITF.+|GTITS.+|GTPTF.+|GTPTS.+|GTICF.+|GTICS.+|GTPCF.+|GTPCS.+");
  {
     ParserRecord record;
     {
        ParserItem item("GROUPS", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GROUP_PROBE::keywordName = "GROUP_PROBE";
const std::string GROUP_PROBE::GROUPS::itemName = "GROUPS";


GRUPNET::GRUPNET( ) : ParserKeyword("GRUPNET") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("GRUPNET");
  {
     ParserRecord record;
     {
        ParserItem item("NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TERMINAL_PRESSURE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VFP_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ALQ", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SUB_SEA_MANIFOLD", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("LIFT_GAS_FLOW_THROUGH", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ALQ_SURFACE_EQV", ParserItem::item_size::SINGLE, "NONE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GRUPNET::keywordName = "GRUPNET";
const std::string GRUPNET::NAME::itemName = "NAME";
const std::string GRUPNET::TERMINAL_PRESSURE::itemName = "TERMINAL_PRESSURE";
const std::string GRUPNET::VFP_TABLE::itemName = "VFP_TABLE";
const int GRUPNET::VFP_TABLE::defaultValue = 0;
const std::string GRUPNET::ALQ::itemName = "ALQ";
const double GRUPNET::ALQ::defaultValue = 0.000000;
const std::string GRUPNET::SUB_SEA_MANIFOLD::itemName = "SUB_SEA_MANIFOLD";
const std::string GRUPNET::SUB_SEA_MANIFOLD::defaultValue = "NO";
const std::string GRUPNET::LIFT_GAS_FLOW_THROUGH::itemName = "LIFT_GAS_FLOW_THROUGH";
const std::string GRUPNET::LIFT_GAS_FLOW_THROUGH::defaultValue = "NO";
const std::string GRUPNET::ALQ_SURFACE_EQV::itemName = "ALQ_SURFACE_EQV";
const std::string GRUPNET::ALQ_SURFACE_EQV::defaultValue = "NONE";


GRUPRIG::GRUPRIG( ) : ParserKeyword("GRUPRIG") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("GRUPRIG");
  {
     ParserRecord record;
     {
        ParserItem item("GROUP_NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WORKRIGNUM", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DRILRIGNUM", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ADD", ParserItem::item_size::SINGLE, "ADD" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GRUPRIG::keywordName = "GRUPRIG";
const std::string GRUPRIG::GROUP_NAME::itemName = "GROUP_NAME";
const std::string GRUPRIG::WORKRIGNUM::itemName = "WORKRIGNUM";
const int GRUPRIG::WORKRIGNUM::defaultValue = 0;
const std::string GRUPRIG::DRILRIGNUM::itemName = "DRILRIGNUM";
const int GRUPRIG::DRILRIGNUM::defaultValue = 0;
const std::string GRUPRIG::ADD::itemName = "ADD";
const std::string GRUPRIG::ADD::defaultValue = "ADD";


GRUPTREE::GRUPTREE( ) : ParserKeyword("GRUPTREE") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("GRUPTREE");
  {
     ParserRecord record;
     {
        ParserItem item("CHILD_GROUP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PARENT_GROUP", ParserItem::item_size::SINGLE, "FIELD" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GRUPTREE::keywordName = "GRUPTREE";
const std::string GRUPTREE::CHILD_GROUP::itemName = "CHILD_GROUP";
const std::string GRUPTREE::PARENT_GROUP::itemName = "PARENT_GROUP";
const std::string GRUPTREE::PARENT_GROUP::defaultValue = "FIELD";


GSATPROD::GSATPROD( ) : ParserKeyword("GSATPROD") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("GSATPROD");
  {
     ParserRecord record;
     {
        ParserItem item("SATELLITE_GROUP_NAME_OR_GROUP_NAME_ROOT", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OIL_PRODUCTION_RATE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_PRODUCTION_RATE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GAS_PRODUCTION_RATE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("RES_FLUID_VOL_PRODUCTION_RATE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("LIFT_GAS_SUPPLY_RATE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MEAN_CALORIFIC_VALUE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string GSATPROD::keywordName = "GSATPROD";
const std::string GSATPROD::SATELLITE_GROUP_NAME_OR_GROUP_NAME_ROOT::itemName = "SATELLITE_GROUP_NAME_OR_GROUP_NAME_ROOT";
const std::string GSATPROD::OIL_PRODUCTION_RATE::itemName = "OIL_PRODUCTION_RATE";
const double GSATPROD::OIL_PRODUCTION_RATE::defaultValue = 0.000000;
const std::string GSATPROD::WATER_PRODUCTION_RATE::itemName = "WATER_PRODUCTION_RATE";
const double GSATPROD::WATER_PRODUCTION_RATE::defaultValue = 0.000000;
const std::string GSATPROD::GAS_PRODUCTION_RATE::itemName = "GAS_PRODUCTION_RATE";
const double GSATPROD::GAS_PRODUCTION_RATE::defaultValue = 0.000000;
const std::string GSATPROD::RES_FLUID_VOL_PRODUCTION_RATE::itemName = "RES_FLUID_VOL_PRODUCTION_RATE";
const double GSATPROD::RES_FLUID_VOL_PRODUCTION_RATE::defaultValue = 0.000000;
const std::string GSATPROD::LIFT_GAS_SUPPLY_RATE::itemName = "LIFT_GAS_SUPPLY_RATE";
const double GSATPROD::LIFT_GAS_SUPPLY_RATE::defaultValue = 0.000000;
const std::string GSATPROD::MEAN_CALORIFIC_VALUE::itemName = "MEAN_CALORIFIC_VALUE";
const double GSATPROD::MEAN_CALORIFIC_VALUE::defaultValue = 0.000000;


HEATCR::HEATCR( ) : ParserKeyword("HEATCR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("HEATCR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Energy/Length*Length*Length*AbsoluteTemperature");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string HEATCR::keywordName = "HEATCR";
const std::string HEATCR::data::itemName = "data";


HEATCRT::HEATCRT( ) : ParserKeyword("HEATCRT") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("HEATCRT");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Energy/Length*Length*Length*AbsoluteTemperature*AbsoluteTemperature");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string HEATCRT::keywordName = "HEATCRT";
const std::string HEATCRT::data::itemName = "data";


IMBNUM::IMBNUM( ) : ParserKeyword("IMBNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("IMBNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string IMBNUM::keywordName = "IMBNUM";
const std::string IMBNUM::data::itemName = "data";


IMKRVD::IMKRVD( ) : ParserKeyword("IMKRVD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("ENDSCALE","NUM_TABLES",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("IMKRVD");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string IMKRVD::keywordName = "IMKRVD";
const std::string IMKRVD::DATA::itemName = "DATA";


IMPES::IMPES( ) : ParserKeyword("IMPES") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("IMPES");
}
const std::string IMPES::keywordName = "IMPES";


IMPTVD::IMPTVD( ) : ParserKeyword("IMPTVD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("ENDSCALE","NUM_TABLES",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("IMPTVD");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string IMPTVD::keywordName = "IMPTVD";
const std::string IMPTVD::DATA::itemName = "DATA";


INCLUDE::INCLUDE( ) : ParserKeyword("INCLUDE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("INCLUDE");
  {
     ParserRecord record;
     {
        ParserItem item("IncludeFile", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string INCLUDE::keywordName = "INCLUDE";
const std::string INCLUDE::IncludeFile::itemName = "IncludeFile";


INIT::INIT( ) : ParserKeyword("INIT") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("INIT");
}
const std::string INIT::keywordName = "INIT";


INRAD::INRAD( ) : ParserKeyword("INRAD") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("INRAD");
  {
     ParserRecord record;
     {
        ParserItem item("RADIUS", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string INRAD::keywordName = "INRAD";
const std::string INRAD::RADIUS::itemName = "RADIUS";


IPCG::IPCG( ) : ParserKeyword("IPCG") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("IPCG");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string IPCG::keywordName = "IPCG";
const std::string IPCG::data::itemName = "data";


IPCW::IPCW( ) : ParserKeyword("IPCW") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("IPCW");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string IPCW::keywordName = "IPCW";
const std::string IPCW::data::itemName = "data";


ISGCR::ISGCR( ) : ParserKeyword("ISGCR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ISGCR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ISGCR::keywordName = "ISGCR";
const std::string ISGCR::data::itemName = "data";


ISGL::ISGL( ) : ParserKeyword("ISGL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ISGL");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ISGL::keywordName = "ISGL";
const std::string ISGL::data::itemName = "data";


ISGU::ISGU( ) : ParserKeyword("ISGU") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ISGU");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ISGU::keywordName = "ISGU";
const std::string ISGU::data::itemName = "data";


ISOGCR::ISOGCR( ) : ParserKeyword("ISOGCR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ISOGCR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ISOGCR::keywordName = "ISOGCR";
const std::string ISOGCR::data::itemName = "data";


ISOWCR::ISOWCR( ) : ParserKeyword("ISOWCR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ISOWCR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ISOWCR::keywordName = "ISOWCR";
const std::string ISOWCR::data::itemName = "data";


ISWCR::ISWCR( ) : ParserKeyword("ISWCR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ISWCR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ISWCR::keywordName = "ISWCR";
const std::string ISWCR::data::itemName = "data";


ISWL::ISWL( ) : ParserKeyword("ISWL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ISWL");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ISWL::keywordName = "ISWL";
const std::string ISWL::data::itemName = "data";


ISWU::ISWU( ) : ParserKeyword("ISWU") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ISWU");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ISWU::keywordName = "ISWU";
const std::string ISWU::data::itemName = "data";


JFUNC::JFUNC( ) : ParserKeyword("JFUNC") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("JFUNC");
  {
     ParserRecord record;
     {
        ParserItem item("FLAG", ParserItem::item_size::SINGLE, "BOTH" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OW_SURFACE_TENSION", ParserItem::item_size::SINGLE, double( -1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("SurfaceTension");
        record.addItem(item);
     }
     {
        ParserItem item("GO_SURFACE_TENSION", ParserItem::item_size::SINGLE, double( -1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("SurfaceTension");
        record.addItem(item);
     }
     {
        ParserItem item("ALPHA_FACTOR", ParserItem::item_size::SINGLE, double( 0.5 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("BETA_FACTOR", ParserItem::item_size::SINGLE, double( 0.5 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DIRECTION", ParserItem::item_size::SINGLE, "XY" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string JFUNC::keywordName = "JFUNC";
const std::string JFUNC::FLAG::itemName = "FLAG";
const std::string JFUNC::FLAG::defaultValue = "BOTH";
const std::string JFUNC::OW_SURFACE_TENSION::itemName = "OW_SURFACE_TENSION";
const double JFUNC::OW_SURFACE_TENSION::defaultValue = -1.000000;
const std::string JFUNC::GO_SURFACE_TENSION::itemName = "GO_SURFACE_TENSION";
const double JFUNC::GO_SURFACE_TENSION::defaultValue = -1.000000;
const std::string JFUNC::ALPHA_FACTOR::itemName = "ALPHA_FACTOR";
const double JFUNC::ALPHA_FACTOR::defaultValue = 0.500000;
const std::string JFUNC::BETA_FACTOR::itemName = "BETA_FACTOR";
const double JFUNC::BETA_FACTOR::defaultValue = 0.500000;
const std::string JFUNC::DIRECTION::itemName = "DIRECTION";
const std::string JFUNC::DIRECTION::defaultValue = "XY";


LAB::LAB( ) : ParserKeyword("LAB") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("LAB");
}
const std::string LAB::keywordName = "LAB";


LGR::LGR( ) : ParserKeyword("LGR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("LGR");
  {
     ParserRecord record;
     {
        ParserItem item("MAXLGR", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAXCLS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MCOARS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAMALG", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MXLALG", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("LSTACK", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("INTERP", ParserItem::item_size::SINGLE, "INTERP" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NCHCOR", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string LGR::keywordName = "LGR";
const std::string LGR::MAXLGR::itemName = "MAXLGR";
const int LGR::MAXLGR::defaultValue = 0;
const std::string LGR::MAXCLS::itemName = "MAXCLS";
const int LGR::MAXCLS::defaultValue = 0;
const std::string LGR::MCOARS::itemName = "MCOARS";
const int LGR::MCOARS::defaultValue = 0;
const std::string LGR::MAMALG::itemName = "MAMALG";
const int LGR::MAMALG::defaultValue = 0;
const std::string LGR::MXLALG::itemName = "MXLALG";
const int LGR::MXLALG::defaultValue = 0;
const std::string LGR::LSTACK::itemName = "LSTACK";
const int LGR::LSTACK::defaultValue = 0;
const std::string LGR::INTERP::itemName = "INTERP";
const std::string LGR::INTERP::defaultValue = "INTERP";
const std::string LGR::NCHCOR::itemName = "NCHCOR";
const int LGR::NCHCOR::defaultValue = 0;


LIFTOPT::LIFTOPT( ) : ParserKeyword("LIFTOPT") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("LIFTOPT");
  {
     ParserRecord record;
     {
        ParserItem item("INCREMENT_SIZE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_ECONOMIC_GRADIENT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_INTERVAL_BETWEEN_GAS_LIFT_OPTIMIZATIONS", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPTIMISE_GAS_LIFT", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string LIFTOPT::keywordName = "LIFTOPT";
const std::string LIFTOPT::INCREMENT_SIZE::itemName = "INCREMENT_SIZE";
const std::string LIFTOPT::MIN_ECONOMIC_GRADIENT::itemName = "MIN_ECONOMIC_GRADIENT";
const std::string LIFTOPT::MIN_INTERVAL_BETWEEN_GAS_LIFT_OPTIMIZATIONS::itemName = "MIN_INTERVAL_BETWEEN_GAS_LIFT_OPTIMIZATIONS";
const double LIFTOPT::MIN_INTERVAL_BETWEEN_GAS_LIFT_OPTIMIZATIONS::defaultValue = 0.000000;
const std::string LIFTOPT::OPTIMISE_GAS_LIFT::itemName = "OPTIMISE_GAS_LIFT";
const std::string LIFTOPT::OPTIMISE_GAS_LIFT::defaultValue = "YES";


LIVEOIL::LIVEOIL( ) : ParserKeyword("LIVEOIL") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("LIVEOIL");
}
const std::string LIVEOIL::keywordName = "LIVEOIL";


MAPAXES::MAPAXES( ) : ParserKeyword("MAPAXES") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("MAPAXES");
  {
     ParserRecord record;
     {
        ParserItem item("X1", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("Y1", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("X2", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("Y2", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("X3", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("Y3", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MAPAXES::keywordName = "MAPAXES";
const std::string MAPAXES::X1::itemName = "X1";
const std::string MAPAXES::Y1::itemName = "Y1";
const std::string MAPAXES::X2::itemName = "X2";
const std::string MAPAXES::Y2::itemName = "Y2";
const std::string MAPAXES::X3::itemName = "X3";
const std::string MAPAXES::Y3::itemName = "Y3";


MAPUNITS::MAPUNITS( ) : ParserKeyword("MAPUNITS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("MAPUNITS");
  {
     ParserRecord record;
     {
        ParserItem item("UNIT", ParserItem::item_size::SINGLE, "METRES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MAPUNITS::keywordName = "MAPUNITS";
const std::string MAPUNITS::UNIT::itemName = "UNIT";
const std::string MAPUNITS::UNIT::defaultValue = "METRES";


MAXVALUE::MAXVALUE( ) : ParserKeyword("MAXVALUE") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("MAXVALUE");
  {
     ParserRecord record;
     {
        ParserItem item("field", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("value", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MAXVALUE::keywordName = "MAXVALUE";
const std::string MAXVALUE::field::itemName = "field";
const std::string MAXVALUE::value::itemName = "value";
const std::string MAXVALUE::I1::itemName = "I1";
const std::string MAXVALUE::I2::itemName = "I2";
const std::string MAXVALUE::J1::itemName = "J1";
const std::string MAXVALUE::J2::itemName = "J2";
const std::string MAXVALUE::K1::itemName = "K1";
const std::string MAXVALUE::K2::itemName = "K2";


MEMORY::MEMORY( ) : ParserKeyword("MEMORY") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("MEMORY");
  {
     ParserRecord record;
     {
        ParserItem item("UNUSED", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("THOUSANDS_CHAR8", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MEMORY::keywordName = "MEMORY";
const std::string MEMORY::UNUSED::itemName = "UNUSED";
const std::string MEMORY::THOUSANDS_CHAR8::itemName = "THOUSANDS_CHAR8";


MESSAGES::MESSAGES( ) : ParserKeyword("MESSAGES") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("MESSAGES");
  {
     ParserRecord record;
     {
        ParserItem item("MESSAGE_PRINT_LIMIT", ParserItem::item_size::SINGLE, 1000000 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("COMMENT_PRINT_LIMIT", ParserItem::item_size::SINGLE, 1000000 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WARNING_PRINT_LIMIT", ParserItem::item_size::SINGLE, 10000 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PROBLEM_PRINT_LIMIT", ParserItem::item_size::SINGLE, 100 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ERROR_PRINT_LIMIT", ParserItem::item_size::SINGLE, 100 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("BUG_PRINT_LIMIT", ParserItem::item_size::SINGLE, 100 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MESSAGE_STOP_LIMIT", ParserItem::item_size::SINGLE, 1000000 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("COMMENT_STOP_LIMIT", ParserItem::item_size::SINGLE, 1000000 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WARNING_STOP_LIMIT", ParserItem::item_size::SINGLE, 10000 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PROBLEM_STOP_LIMIT", ParserItem::item_size::SINGLE, 100 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ERROR_STOP_LIMIT", ParserItem::item_size::SINGLE, 10 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("BUG_STOP_LIMIT", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MESSAGES::keywordName = "MESSAGES";
const std::string MESSAGES::MESSAGE_PRINT_LIMIT::itemName = "MESSAGE_PRINT_LIMIT";
const int MESSAGES::MESSAGE_PRINT_LIMIT::defaultValue = 1000000;
const std::string MESSAGES::COMMENT_PRINT_LIMIT::itemName = "COMMENT_PRINT_LIMIT";
const int MESSAGES::COMMENT_PRINT_LIMIT::defaultValue = 1000000;
const std::string MESSAGES::WARNING_PRINT_LIMIT::itemName = "WARNING_PRINT_LIMIT";
const int MESSAGES::WARNING_PRINT_LIMIT::defaultValue = 10000;
const std::string MESSAGES::PROBLEM_PRINT_LIMIT::itemName = "PROBLEM_PRINT_LIMIT";
const int MESSAGES::PROBLEM_PRINT_LIMIT::defaultValue = 100;
const std::string MESSAGES::ERROR_PRINT_LIMIT::itemName = "ERROR_PRINT_LIMIT";
const int MESSAGES::ERROR_PRINT_LIMIT::defaultValue = 100;
const std::string MESSAGES::BUG_PRINT_LIMIT::itemName = "BUG_PRINT_LIMIT";
const int MESSAGES::BUG_PRINT_LIMIT::defaultValue = 100;
const std::string MESSAGES::MESSAGE_STOP_LIMIT::itemName = "MESSAGE_STOP_LIMIT";
const int MESSAGES::MESSAGE_STOP_LIMIT::defaultValue = 1000000;
const std::string MESSAGES::COMMENT_STOP_LIMIT::itemName = "COMMENT_STOP_LIMIT";
const int MESSAGES::COMMENT_STOP_LIMIT::defaultValue = 1000000;
const std::string MESSAGES::WARNING_STOP_LIMIT::itemName = "WARNING_STOP_LIMIT";
const int MESSAGES::WARNING_STOP_LIMIT::defaultValue = 10000;
const std::string MESSAGES::PROBLEM_STOP_LIMIT::itemName = "PROBLEM_STOP_LIMIT";
const int MESSAGES::PROBLEM_STOP_LIMIT::defaultValue = 100;
const std::string MESSAGES::ERROR_STOP_LIMIT::itemName = "ERROR_STOP_LIMIT";
const int MESSAGES::ERROR_STOP_LIMIT::defaultValue = 10;
const std::string MESSAGES::BUG_STOP_LIMIT::itemName = "BUG_STOP_LIMIT";
const int MESSAGES::BUG_STOP_LIMIT::defaultValue = 1;


METRIC::METRIC( ) : ParserKeyword("METRIC") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("METRIC");
}
const std::string METRIC::keywordName = "METRIC";


MINPV::MINPV( ) : ParserKeyword("MINPV") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("MINPV");
  {
     ParserRecord record;
     {
        ParserItem item("VALUE", ParserItem::item_size::SINGLE, double( 9.9999999999999995e-07 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ReservoirVolume");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MINPV::keywordName = "MINPV";
const std::string MINPV::VALUE::itemName = "VALUE";
const double MINPV::VALUE::defaultValue = 0.000001;


MINPVFIL::MINPVFIL( ) : ParserKeyword("MINPVFIL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("MINPVFIL");
  {
     ParserRecord record;
     {
        ParserItem item("VALUE", ParserItem::item_size::SINGLE, double( 9.9999999999999995e-07 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MINPVFIL::keywordName = "MINPVFIL";
const std::string MINPVFIL::VALUE::itemName = "VALUE";
const double MINPVFIL::VALUE::defaultValue = 0.000001;


MINVALUE::MINVALUE( ) : ParserKeyword("MINVALUE") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("MINVALUE");
  {
     ParserRecord record;
     {
        ParserItem item("field", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("value", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MINVALUE::keywordName = "MINVALUE";
const std::string MINVALUE::field::itemName = "field";
const std::string MINVALUE::value::itemName = "value";
const std::string MINVALUE::I1::itemName = "I1";
const std::string MINVALUE::I2::itemName = "I2";
const std::string MINVALUE::J1::itemName = "J1";
const std::string MINVALUE::J2::itemName = "J2";
const std::string MINVALUE::K1::itemName = "K1";
const std::string MINVALUE::K2::itemName = "K2";


MISC::MISC( ) : ParserKeyword("MISC") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("MISCIBLE","NTMISC",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("MISC");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MISC::keywordName = "MISC";
const std::string MISC::DATA::itemName = "DATA";


MISCIBLE::MISCIBLE( ) : ParserKeyword("MISCIBLE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("MISCIBLE");
  {
     ParserRecord record;
     {
        ParserItem item("NTMISC", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NSMISC", ParserItem::item_size::SINGLE, 20 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TWOPOINT", ParserItem::item_size::SINGLE, "NONE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MISCIBLE::keywordName = "MISCIBLE";
const std::string MISCIBLE::NTMISC::itemName = "NTMISC";
const int MISCIBLE::NTMISC::defaultValue = 1;
const std::string MISCIBLE::NSMISC::itemName = "NSMISC";
const int MISCIBLE::NSMISC::defaultValue = 20;
const std::string MISCIBLE::TWOPOINT::itemName = "TWOPOINT";
const std::string MISCIBLE::TWOPOINT::defaultValue = "NONE";


MISCNUM::MISCNUM( ) : ParserKeyword("MISCNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("MISCNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string MISCNUM::keywordName = "MISCNUM";
const std::string MISCNUM::data::itemName = "data";


MONITOR::MONITOR( ) : ParserKeyword("MONITOR") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("MONITOR");
}
const std::string MONITOR::keywordName = "MONITOR";


MSFN::MSFN( ) : ParserKeyword("MSFN") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("MSFN");
  {
     ParserRecord record;
     {
        ParserItem item("table", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MSFN::keywordName = "MSFN";
const std::string MSFN::table::itemName = "table";


MSGFILE::MSGFILE( ) : ParserKeyword("MSGFILE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("MSGFILE");
  {
     ParserRecord record;
     {
        ParserItem item("ENABLE_FLAG", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MSGFILE::keywordName = "MSGFILE";
const std::string MSGFILE::ENABLE_FLAG::itemName = "ENABLE_FLAG";


MULTFLT::MULTFLT( ) : ParserKeyword("MULTFLT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("MULTFLT");
  {
     ParserRecord record;
     {
        ParserItem item("fault", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("factor", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MULTFLT::keywordName = "MULTFLT";
const std::string MULTFLT::fault::itemName = "fault";
const std::string MULTFLT::factor::itemName = "factor";


MULTIPLY::MULTIPLY( ) : ParserKeyword("MULTIPLY") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("MULTIPLY");
  {
     ParserRecord record;
     {
        ParserItem item("field", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("factor", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MULTIPLY::keywordName = "MULTIPLY";
const std::string MULTIPLY::field::itemName = "field";
const std::string MULTIPLY::factor::itemName = "factor";
const std::string MULTIPLY::I1::itemName = "I1";
const std::string MULTIPLY::I2::itemName = "I2";
const std::string MULTIPLY::J1::itemName = "J1";
const std::string MULTIPLY::J2::itemName = "J2";
const std::string MULTIPLY::K1::itemName = "K1";
const std::string MULTIPLY::K2::itemName = "K2";


MULTIREG::MULTIREG( ) : ParserKeyword("MULTIREG") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("MULTIREG");
  {
     ParserRecord record;
     {
        ParserItem item("ARRAY", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("The 3D array we will update");
        record.addItem(item);
     }
     {
        ParserItem item("FACTOR", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("The value we will multiply with");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_NUMBER", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("The region number we are interested in");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_NAME", ParserItem::item_size::SINGLE, "M" ); item.setType( std::string() );
        item.setDescription("The name of the region we are interested in");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MULTIREG::keywordName = "MULTIREG";
const std::string MULTIREG::ARRAY::itemName = "ARRAY";
const std::string MULTIREG::FACTOR::itemName = "FACTOR";
const double MULTIREG::FACTOR::defaultValue = 0.000000;
const std::string MULTIREG::REGION_NUMBER::itemName = "REGION_NUMBER";
const std::string MULTIREG::REGION_NAME::itemName = "REGION_NAME";
const std::string MULTIREG::REGION_NAME::defaultValue = "M";


MULTNUM::MULTNUM( ) : ParserKeyword("MULTNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("MULTNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string MULTNUM::keywordName = "MULTNUM";
const std::string MULTNUM::data::itemName = "data";


MULTPV::MULTPV( ) : ParserKeyword("MULTPV") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("MULTPV");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string MULTPV::keywordName = "MULTPV";
const std::string MULTPV::data::itemName = "data";


MULTREGP::MULTREGP( ) : ParserKeyword("MULTREGP") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("MULTREGP");
  {
     ParserRecord record;
     {
        ParserItem item("REGION", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MULTIPLIER", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_TYPE", ParserItem::item_size::SINGLE, "M" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MULTREGP::keywordName = "MULTREGP";
const std::string MULTREGP::REGION::itemName = "REGION";
const std::string MULTREGP::MULTIPLIER::itemName = "MULTIPLIER";
const std::string MULTREGP::REGION_TYPE::itemName = "REGION_TYPE";
const std::string MULTREGP::REGION_TYPE::defaultValue = "M";


MULTREGT::MULTREGT( ) : ParserKeyword("MULTREGT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("MULTREGT");
  {
     ParserRecord record;
     {
        ParserItem item("SRC_REGION", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TARGET_REGION", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRAN_MULT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DIRECTIONS", ParserItem::item_size::SINGLE, "XYZ" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NNC_MULT", ParserItem::item_size::SINGLE, "ALL" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("REGION_DEF", ParserItem::item_size::SINGLE, "M" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MULTREGT::keywordName = "MULTREGT";
const std::string MULTREGT::SRC_REGION::itemName = "SRC_REGION";
const std::string MULTREGT::TARGET_REGION::itemName = "TARGET_REGION";
const std::string MULTREGT::TRAN_MULT::itemName = "TRAN_MULT";
const std::string MULTREGT::DIRECTIONS::itemName = "DIRECTIONS";
const std::string MULTREGT::DIRECTIONS::defaultValue = "XYZ";
const std::string MULTREGT::NNC_MULT::itemName = "NNC_MULT";
const std::string MULTREGT::NNC_MULT::defaultValue = "ALL";
const std::string MULTREGT::REGION_DEF::itemName = "REGION_DEF";
const std::string MULTREGT::REGION_DEF::defaultValue = "M";


MULT_XYZ::MULT_XYZ( ) : ParserKeyword("MULT_XYZ") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("MULTX");
  addDeckName("MULTX-");
  addDeckName("MULTY");
  addDeckName("MULTY-");
  addDeckName("MULTZ");
  addDeckName("MULTZ-");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string MULT_XYZ::keywordName = "MULT_XYZ";
const std::string MULT_XYZ::data::itemName = "data";


MW::MW( ) : ParserKeyword("MW") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("MW");
  {
     ParserRecord record;
     {
        ParserItem item("MOLAR_WEIGHT", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MW::keywordName = "MW";
const std::string MW::MOLAR_WEIGHT::itemName = "MOLAR_WEIGHT";


MWS::MWS( ) : ParserKeyword("MWS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("MWS");
  {
     ParserRecord record;
     {
        ParserItem item("MOLAR_WEIGHT", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string MWS::keywordName = "MWS";
const std::string MWS::MOLAR_WEIGHT::itemName = "MOLAR_WEIGHT";


NETBALAN::NETBALAN( ) : ParserKeyword("NETBALAN") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("NETBALAN");
  {
     ParserRecord record;
     {
        ParserItem item("TIME_INTERVAL", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PRESSURE_CONVERGENCE_LIMT", ParserItem::item_size::SINGLE, double( 1.0000000000000001e-05 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ITER", ParserItem::item_size::SINGLE, 10 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("THP_CONVERGENCE_LIMIT", ParserItem::item_size::SINGLE, double( 0.01 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ITER_THP", ParserItem::item_size::SINGLE, 10 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TARGET_BALANCE_ERROR", ParserItem::item_size::SINGLE, double( 1e+20 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_BALANCE_ERROR", ParserItem::item_size::SINGLE, double( 1e+20 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_TIME_STEP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string NETBALAN::keywordName = "NETBALAN";
const std::string NETBALAN::TIME_INTERVAL::itemName = "TIME_INTERVAL";
const double NETBALAN::TIME_INTERVAL::defaultValue = 0.000000;
const std::string NETBALAN::PRESSURE_CONVERGENCE_LIMT::itemName = "PRESSURE_CONVERGENCE_LIMT";
const double NETBALAN::PRESSURE_CONVERGENCE_LIMT::defaultValue = 0.000010;
const std::string NETBALAN::MAX_ITER::itemName = "MAX_ITER";
const int NETBALAN::MAX_ITER::defaultValue = 10;
const std::string NETBALAN::THP_CONVERGENCE_LIMIT::itemName = "THP_CONVERGENCE_LIMIT";
const double NETBALAN::THP_CONVERGENCE_LIMIT::defaultValue = 0.010000;
const std::string NETBALAN::MAX_ITER_THP::itemName = "MAX_ITER_THP";
const int NETBALAN::MAX_ITER_THP::defaultValue = 10;
const std::string NETBALAN::TARGET_BALANCE_ERROR::itemName = "TARGET_BALANCE_ERROR";
const double NETBALAN::TARGET_BALANCE_ERROR::defaultValue = 100000000000000000000.000000;
const std::string NETBALAN::MAX_BALANCE_ERROR::itemName = "MAX_BALANCE_ERROR";
const double NETBALAN::MAX_BALANCE_ERROR::defaultValue = 100000000000000000000.000000;
const std::string NETBALAN::MIN_TIME_STEP::itemName = "MIN_TIME_STEP";


NEWTRAN::NEWTRAN( ) : ParserKeyword("NEWTRAN") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("NEWTRAN");
}
const std::string NEWTRAN::keywordName = "NEWTRAN";


NEXTSTEP::NEXTSTEP( ) : ParserKeyword("NEXTSTEP") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("NEXTSTEP");
  {
     ParserRecord record;
     {
        ParserItem item("MAX_STEP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Time");
        record.addItem(item);
     }
     {
        ParserItem item("APPLY_TO_ALL", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string NEXTSTEP::keywordName = "NEXTSTEP";
const std::string NEXTSTEP::MAX_STEP::itemName = "MAX_STEP";
const std::string NEXTSTEP::APPLY_TO_ALL::itemName = "APPLY_TO_ALL";
const std::string NEXTSTEP::APPLY_TO_ALL::defaultValue = "NO";


NNC::NNC( ) : ParserKeyword("NNC") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("NNC");
  {
     ParserRecord record;
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRAN", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Transmissibility");
        record.addItem(item);
     }
     {
        ParserItem item("SIM_DEPENDENT1", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ContextDependent");
        record.addItem(item);
     }
     {
        ParserItem item("SIM_DEPENDENT2", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ContextDependent");
        record.addItem(item);
     }
     {
        ParserItem item("PRESSURE_TABLE1", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PRESSURE_TABLE2", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VE_FACE1", ParserItem::item_size::SINGLE, "" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VE_FACE2", ParserItem::item_size::SINGLE, "" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DIFFUSIVITY", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SIM_DEPENDENT3", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ContextDependent");
        record.addItem(item);
     }
     {
        ParserItem item("VDFLOW_AREA", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length*Length");
        record.addItem(item);
     }
     {
        ParserItem item("VDFLOW_PERM", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string NNC::keywordName = "NNC";
const std::string NNC::I1::itemName = "I1";
const std::string NNC::J1::itemName = "J1";
const std::string NNC::K1::itemName = "K1";
const std::string NNC::I2::itemName = "I2";
const std::string NNC::J2::itemName = "J2";
const std::string NNC::K2::itemName = "K2";
const std::string NNC::TRAN::itemName = "TRAN";
const double NNC::TRAN::defaultValue = 0.000000;
const std::string NNC::SIM_DEPENDENT1::itemName = "SIM_DEPENDENT1";
const double NNC::SIM_DEPENDENT1::defaultValue = 0.000000;
const std::string NNC::SIM_DEPENDENT2::itemName = "SIM_DEPENDENT2";
const double NNC::SIM_DEPENDENT2::defaultValue = 0.000000;
const std::string NNC::PRESSURE_TABLE1::itemName = "PRESSURE_TABLE1";
const int NNC::PRESSURE_TABLE1::defaultValue = 0;
const std::string NNC::PRESSURE_TABLE2::itemName = "PRESSURE_TABLE2";
const int NNC::PRESSURE_TABLE2::defaultValue = 0;
const std::string NNC::VE_FACE1::itemName = "VE_FACE1";
const std::string NNC::VE_FACE1::defaultValue = "";
const std::string NNC::VE_FACE2::itemName = "VE_FACE2";
const std::string NNC::VE_FACE2::defaultValue = "";
const std::string NNC::DIFFUSIVITY::itemName = "DIFFUSIVITY";
const double NNC::DIFFUSIVITY::defaultValue = 0.000000;
const std::string NNC::SIM_DEPENDENT3::itemName = "SIM_DEPENDENT3";
const double NNC::SIM_DEPENDENT3::defaultValue = 0.000000;
const std::string NNC::VDFLOW_AREA::itemName = "VDFLOW_AREA";
const double NNC::VDFLOW_AREA::defaultValue = 0.000000;
const std::string NNC::VDFLOW_PERM::itemName = "VDFLOW_PERM";
const double NNC::VDFLOW_PERM::defaultValue = 0.000000;


NOCASC::NOCASC( ) : ParserKeyword("NOCASC") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("NOCASC");
}
const std::string NOCASC::keywordName = "NOCASC";


NOECHO::NOECHO( ) : ParserKeyword("NOECHO") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("NOECHO");
}
const std::string NOECHO::keywordName = "NOECHO";


NOGGF::NOGGF( ) : ParserKeyword("NOGGF") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("NOGGF");
}
const std::string NOGGF::keywordName = "NOGGF";


NOGRAV::NOGRAV( ) : ParserKeyword("NOGRAV") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("NOGRAV");
}
const std::string NOGRAV::keywordName = "NOGRAV";


NOINSPEC::NOINSPEC( ) : ParserKeyword("NOINSPEC") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("NOINSPEC");
}
const std::string NOINSPEC::keywordName = "NOINSPEC";


NOMONITO::NOMONITO( ) : ParserKeyword("NOMONITO") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("NOMONITO");
}
const std::string NOMONITO::keywordName = "NOMONITO";


NONNC::NONNC( ) : ParserKeyword("NONNC") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("NONNC");
}
const std::string NONNC::keywordName = "NONNC";


NORSSPEC::NORSSPEC( ) : ParserKeyword("NORSSPEC") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("NORSSPEC");
}
const std::string NORSSPEC::keywordName = "NORSSPEC";


NOSIM::NOSIM( ) : ParserKeyword("NOSIM") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("NOSIM");
}
const std::string NOSIM::keywordName = "NOSIM";


NOWARN::NOWARN( ) : ParserKeyword("NOWARN") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("NOWARN");
}
const std::string NOWARN::keywordName = "NOWARN";


NSTACK::NSTACK( ) : ParserKeyword("NSTACK") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("NSTACK");
  {
     ParserRecord record;
     {
        ParserItem item("LINEAR_SOLVER_SIZE", ParserItem::item_size::SINGLE, 10 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string NSTACK::keywordName = "NSTACK";
const std::string NSTACK::LINEAR_SOLVER_SIZE::itemName = "LINEAR_SOLVER_SIZE";
const int NSTACK::LINEAR_SOLVER_SIZE::defaultValue = 10;


NTG::NTG( ) : ParserKeyword("NTG") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("NTG");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string NTG::keywordName = "NTG";
const std::string NTG::data::itemName = "data";


NUMRES::NUMRES( ) : ParserKeyword("NUMRES") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("NUMRES");
  {
     ParserRecord record;
     {
        ParserItem item("num", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string NUMRES::keywordName = "NUMRES";
const std::string NUMRES::num::itemName = "num";
const int NUMRES::num::defaultValue = 1;


NUPCOL::NUPCOL( ) : ParserKeyword("NUPCOL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("NUPCOL");
  {
     ParserRecord record;
     {
        ParserItem item("NUM_ITER", ParserItem::item_size::SINGLE, 3 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string NUPCOL::keywordName = "NUPCOL";
const std::string NUPCOL::NUM_ITER::itemName = "NUM_ITER";
const int NUPCOL::NUM_ITER::defaultValue = 3;


OCOMPIDX::OCOMPIDX( ) : ParserKeyword("OCOMPIDX") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("OCOMPIDX");
  {
     ParserRecord record;
     {
        ParserItem item("OIL_COMPONENT_INDEX", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OCOMPIDX::keywordName = "OCOMPIDX";
const std::string OCOMPIDX::OIL_COMPONENT_INDEX::itemName = "OIL_COMPONENT_INDEX";


OIL::OIL( ) : ParserKeyword("OIL") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("OIL");
}
const std::string OIL::keywordName = "OIL";


OILCOMPR::OILCOMPR( ) : ParserKeyword("OILCOMPR") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("OILCOMPR");
  {
     ParserRecord record;
     {
        ParserItem item("COMPRESSIBILITY", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("EXPANSION_COEFF_LINEAR", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/AbsoluteTemperature");
        record.addItem(item);
     }
     {
        ParserItem item("EXPANSION_COEFF_QUADRATIC", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/AbsoluteTemperature*AbsoluteTemperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OILCOMPR::keywordName = "OILCOMPR";
const std::string OILCOMPR::COMPRESSIBILITY::itemName = "COMPRESSIBILITY";
const double OILCOMPR::COMPRESSIBILITY::defaultValue = 0.000000;
const std::string OILCOMPR::EXPANSION_COEFF_LINEAR::itemName = "EXPANSION_COEFF_LINEAR";
const double OILCOMPR::EXPANSION_COEFF_LINEAR::defaultValue = 0.000000;
const std::string OILCOMPR::EXPANSION_COEFF_QUADRATIC::itemName = "EXPANSION_COEFF_QUADRATIC";
const double OILCOMPR::EXPANSION_COEFF_QUADRATIC::defaultValue = 0.000000;


OILDENT::OILDENT( ) : ParserKeyword("OILDENT") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("OILDENT");
  {
     ParserRecord record;
     {
        ParserItem item("REFERENCE_TEMPERATURE", ParserItem::item_size::SINGLE, double( 293.15000000000003 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("AbsoluteTemperature");
        record.addItem(item);
     }
     {
        ParserItem item("EXPANSION_COEFF_LINEAR", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/AbsoluteTemperature");
        record.addItem(item);
     }
     {
        ParserItem item("EXPANSION_COEFF_QUADRATIC", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/AbsoluteTemperature*AbsoluteTemperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OILDENT::keywordName = "OILDENT";
const std::string OILDENT::REFERENCE_TEMPERATURE::itemName = "REFERENCE_TEMPERATURE";
const double OILDENT::REFERENCE_TEMPERATURE::defaultValue = 293.150000;
const std::string OILDENT::EXPANSION_COEFF_LINEAR::itemName = "EXPANSION_COEFF_LINEAR";
const double OILDENT::EXPANSION_COEFF_LINEAR::defaultValue = 0.000000;
const std::string OILDENT::EXPANSION_COEFF_QUADRATIC::itemName = "EXPANSION_COEFF_QUADRATIC";
const double OILDENT::EXPANSION_COEFF_QUADRATIC::defaultValue = 0.000000;


OILMW::OILMW( ) : ParserKeyword("OILMW") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("OILMW");
  {
     ParserRecord record;
     {
        ParserItem item("MOLAR_WEIGHT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OILMW::keywordName = "OILMW";
const std::string OILMW::MOLAR_WEIGHT::itemName = "MOLAR_WEIGHT";


OILVISCT::OILVISCT( ) : ParserKeyword("OILVISCT") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("OILVISCT");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        item.push_backDimension("Viscosity");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OILVISCT::keywordName = "OILVISCT";
const std::string OILVISCT::DATA::itemName = "DATA";


OILVTIM::OILVTIM( ) : ParserKeyword("OILVTIM") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("OILVTIM");
  {
     ParserRecord record;
     {
        ParserItem item("INTERPOLATION_METHOD", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OILVTIM::keywordName = "OILVTIM";
const std::string OILVTIM::INTERPOLATION_METHOD::itemName = "INTERPOLATION_METHOD";


OLDTRAN::OLDTRAN( ) : ParserKeyword("OLDTRAN") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("OLDTRAN");
}
const std::string OLDTRAN::keywordName = "OLDTRAN";


OPERATE::OPERATE( ) : ParserKeyword("OPERATE") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("OPERATE");
  {
     ParserRecord record;
     {
        ParserItem item("TARGET_ARRAY", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPERATION", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ARRAY", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PARAM1", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PARAM2", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OPERATE::keywordName = "OPERATE";
const std::string OPERATE::TARGET_ARRAY::itemName = "TARGET_ARRAY";
const std::string OPERATE::I1::itemName = "I1";
const std::string OPERATE::I2::itemName = "I2";
const std::string OPERATE::J1::itemName = "J1";
const std::string OPERATE::J2::itemName = "J2";
const std::string OPERATE::K1::itemName = "K1";
const std::string OPERATE::K2::itemName = "K2";
const std::string OPERATE::OPERATION::itemName = "OPERATION";
const std::string OPERATE::ARRAY::itemName = "ARRAY";
const std::string OPERATE::PARAM1::itemName = "PARAM1";
const double OPERATE::PARAM1::defaultValue = 0.000000;
const std::string OPERATE::PARAM2::itemName = "PARAM2";
const double OPERATE::PARAM2::defaultValue = 0.000000;


OPERATER::OPERATER( ) : ParserKeyword("OPERATER") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("OPERATER");
  {
     ParserRecord record;
     {
        ParserItem item("RESULT_ARRAY", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPERATION_REGION_NUMBER", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPERATION_TYPE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ARRAY_PARAMETER", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SCALAR_PARAMETER", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SCALAR_PARAMETER2", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FIP_REGION_NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OPERATER::keywordName = "OPERATER";
const std::string OPERATER::RESULT_ARRAY::itemName = "RESULT_ARRAY";
const std::string OPERATER::OPERATION_REGION_NUMBER::itemName = "OPERATION_REGION_NUMBER";
const std::string OPERATER::OPERATION_TYPE::itemName = "OPERATION_TYPE";
const std::string OPERATER::ARRAY_PARAMETER::itemName = "ARRAY_PARAMETER";
const std::string OPERATER::SCALAR_PARAMETER::itemName = "SCALAR_PARAMETER";
const std::string OPERATER::SCALAR_PARAMETER2::itemName = "SCALAR_PARAMETER2";
const std::string OPERATER::FIP_REGION_NAME::itemName = "FIP_REGION_NAME";


OPERNUM::OPERNUM( ) : ParserKeyword("OPERNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("OPERNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string OPERNUM::keywordName = "OPERNUM";
const std::string OPERNUM::data::itemName = "data";


OPTIONS::OPTIONS( ) : ParserKeyword("OPTIONS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("OPTIONS");
  {
     ParserRecord record;
     {
        ParserItem item("ITEM1", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM2", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM3", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM4", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM5", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM6", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM7", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM8", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM9", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM10", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM11", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM12", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM13", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM14", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM15", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM16", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM17", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM18", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM19", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM20", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM21", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM22", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM23", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM24", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM25", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM26", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM27", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM28", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM29", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM30", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM31", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM32", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM33", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM34", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM35", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM36", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM37", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM38", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM39", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM40", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM41", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM42", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM43", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM44", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM45", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM46", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM47", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM48", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM49", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM50", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM51", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM52", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM53", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM54", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM55", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM56", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM57", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM58", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM59", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM60", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM61", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM62", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM63", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM64", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM65", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM66", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM67", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM68", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM69", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM70", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM71", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM72", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM73", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM74", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM75", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM76", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM77", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM78", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM79", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM80", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM81", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM82", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM83", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM84", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM85", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM86", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM87", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM88", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM89", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM90", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM91", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM92", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM93", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM94", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM95", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM96", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM97", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM98", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM99", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM100", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM101", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM102", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM103", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM104", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM105", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM106", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM107", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM108", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM109", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM110", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM111", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM112", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM113", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM114", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM115", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM116", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM117", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM118", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM119", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM120", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM121", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM122", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM123", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM124", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM125", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM126", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM127", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM128", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM129", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM130", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM131", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM132", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM133", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM134", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM135", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM136", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM137", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM138", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM139", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM140", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM141", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM142", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM143", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM144", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM145", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM146", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM147", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM148", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM149", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM150", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM151", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM152", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM153", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM154", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM155", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM156", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM157", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM158", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM159", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM160", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM161", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM162", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM163", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM164", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM165", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM166", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM167", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM168", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM169", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM170", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM171", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM172", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM173", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM174", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM175", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM176", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM177", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM178", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM179", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM180", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM181", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM182", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM183", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM184", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM185", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM186", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM187", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM188", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM189", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM190", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM191", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM192", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM193", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM194", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM195", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM196", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM197", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OPTIONS::keywordName = "OPTIONS";
const std::string OPTIONS::ITEM1::itemName = "ITEM1";
const int OPTIONS::ITEM1::defaultValue = 0;
const std::string OPTIONS::ITEM2::itemName = "ITEM2";
const int OPTIONS::ITEM2::defaultValue = 0;
const std::string OPTIONS::ITEM3::itemName = "ITEM3";
const int OPTIONS::ITEM3::defaultValue = 0;
const std::string OPTIONS::ITEM4::itemName = "ITEM4";
const int OPTIONS::ITEM4::defaultValue = 0;
const std::string OPTIONS::ITEM5::itemName = "ITEM5";
const int OPTIONS::ITEM5::defaultValue = 0;
const std::string OPTIONS::ITEM6::itemName = "ITEM6";
const int OPTIONS::ITEM6::defaultValue = 0;
const std::string OPTIONS::ITEM7::itemName = "ITEM7";
const int OPTIONS::ITEM7::defaultValue = 0;
const std::string OPTIONS::ITEM8::itemName = "ITEM8";
const int OPTIONS::ITEM8::defaultValue = 0;
const std::string OPTIONS::ITEM9::itemName = "ITEM9";
const int OPTIONS::ITEM9::defaultValue = 0;
const std::string OPTIONS::ITEM10::itemName = "ITEM10";
const int OPTIONS::ITEM10::defaultValue = 0;
const std::string OPTIONS::ITEM11::itemName = "ITEM11";
const int OPTIONS::ITEM11::defaultValue = 0;
const std::string OPTIONS::ITEM12::itemName = "ITEM12";
const int OPTIONS::ITEM12::defaultValue = 0;
const std::string OPTIONS::ITEM13::itemName = "ITEM13";
const int OPTIONS::ITEM13::defaultValue = 0;
const std::string OPTIONS::ITEM14::itemName = "ITEM14";
const int OPTIONS::ITEM14::defaultValue = 0;
const std::string OPTIONS::ITEM15::itemName = "ITEM15";
const int OPTIONS::ITEM15::defaultValue = 0;
const std::string OPTIONS::ITEM16::itemName = "ITEM16";
const int OPTIONS::ITEM16::defaultValue = 0;
const std::string OPTIONS::ITEM17::itemName = "ITEM17";
const int OPTIONS::ITEM17::defaultValue = 0;
const std::string OPTIONS::ITEM18::itemName = "ITEM18";
const int OPTIONS::ITEM18::defaultValue = 0;
const std::string OPTIONS::ITEM19::itemName = "ITEM19";
const int OPTIONS::ITEM19::defaultValue = 0;
const std::string OPTIONS::ITEM20::itemName = "ITEM20";
const int OPTIONS::ITEM20::defaultValue = 0;
const std::string OPTIONS::ITEM21::itemName = "ITEM21";
const int OPTIONS::ITEM21::defaultValue = 0;
const std::string OPTIONS::ITEM22::itemName = "ITEM22";
const int OPTIONS::ITEM22::defaultValue = 0;
const std::string OPTIONS::ITEM23::itemName = "ITEM23";
const int OPTIONS::ITEM23::defaultValue = 0;
const std::string OPTIONS::ITEM24::itemName = "ITEM24";
const int OPTIONS::ITEM24::defaultValue = 0;
const std::string OPTIONS::ITEM25::itemName = "ITEM25";
const int OPTIONS::ITEM25::defaultValue = 0;
const std::string OPTIONS::ITEM26::itemName = "ITEM26";
const int OPTIONS::ITEM26::defaultValue = 0;
const std::string OPTIONS::ITEM27::itemName = "ITEM27";
const int OPTIONS::ITEM27::defaultValue = 0;
const std::string OPTIONS::ITEM28::itemName = "ITEM28";
const int OPTIONS::ITEM28::defaultValue = 0;
const std::string OPTIONS::ITEM29::itemName = "ITEM29";
const int OPTIONS::ITEM29::defaultValue = 0;
const std::string OPTIONS::ITEM30::itemName = "ITEM30";
const int OPTIONS::ITEM30::defaultValue = 0;
const std::string OPTIONS::ITEM31::itemName = "ITEM31";
const int OPTIONS::ITEM31::defaultValue = 0;
const std::string OPTIONS::ITEM32::itemName = "ITEM32";
const int OPTIONS::ITEM32::defaultValue = 0;
const std::string OPTIONS::ITEM33::itemName = "ITEM33";
const int OPTIONS::ITEM33::defaultValue = 0;
const std::string OPTIONS::ITEM34::itemName = "ITEM34";
const int OPTIONS::ITEM34::defaultValue = 0;
const std::string OPTIONS::ITEM35::itemName = "ITEM35";
const int OPTIONS::ITEM35::defaultValue = 0;
const std::string OPTIONS::ITEM36::itemName = "ITEM36";
const int OPTIONS::ITEM36::defaultValue = 0;
const std::string OPTIONS::ITEM37::itemName = "ITEM37";
const int OPTIONS::ITEM37::defaultValue = 0;
const std::string OPTIONS::ITEM38::itemName = "ITEM38";
const int OPTIONS::ITEM38::defaultValue = 0;
const std::string OPTIONS::ITEM39::itemName = "ITEM39";
const int OPTIONS::ITEM39::defaultValue = 0;
const std::string OPTIONS::ITEM40::itemName = "ITEM40";
const int OPTIONS::ITEM40::defaultValue = 0;
const std::string OPTIONS::ITEM41::itemName = "ITEM41";
const int OPTIONS::ITEM41::defaultValue = 0;
const std::string OPTIONS::ITEM42::itemName = "ITEM42";
const int OPTIONS::ITEM42::defaultValue = 0;
const std::string OPTIONS::ITEM43::itemName = "ITEM43";
const int OPTIONS::ITEM43::defaultValue = 0;
const std::string OPTIONS::ITEM44::itemName = "ITEM44";
const int OPTIONS::ITEM44::defaultValue = 0;
const std::string OPTIONS::ITEM45::itemName = "ITEM45";
const int OPTIONS::ITEM45::defaultValue = 0;
const std::string OPTIONS::ITEM46::itemName = "ITEM46";
const int OPTIONS::ITEM46::defaultValue = 0;
const std::string OPTIONS::ITEM47::itemName = "ITEM47";
const int OPTIONS::ITEM47::defaultValue = 0;
const std::string OPTIONS::ITEM48::itemName = "ITEM48";
const int OPTIONS::ITEM48::defaultValue = 0;
const std::string OPTIONS::ITEM49::itemName = "ITEM49";
const int OPTIONS::ITEM49::defaultValue = 0;
const std::string OPTIONS::ITEM50::itemName = "ITEM50";
const int OPTIONS::ITEM50::defaultValue = 0;
const std::string OPTIONS::ITEM51::itemName = "ITEM51";
const int OPTIONS::ITEM51::defaultValue = 0;
const std::string OPTIONS::ITEM52::itemName = "ITEM52";
const int OPTIONS::ITEM52::defaultValue = 0;
const std::string OPTIONS::ITEM53::itemName = "ITEM53";
const int OPTIONS::ITEM53::defaultValue = 0;
const std::string OPTIONS::ITEM54::itemName = "ITEM54";
const int OPTIONS::ITEM54::defaultValue = 0;
const std::string OPTIONS::ITEM55::itemName = "ITEM55";
const int OPTIONS::ITEM55::defaultValue = 0;
const std::string OPTIONS::ITEM56::itemName = "ITEM56";
const int OPTIONS::ITEM56::defaultValue = 0;
const std::string OPTIONS::ITEM57::itemName = "ITEM57";
const int OPTIONS::ITEM57::defaultValue = 0;
const std::string OPTIONS::ITEM58::itemName = "ITEM58";
const int OPTIONS::ITEM58::defaultValue = 0;
const std::string OPTIONS::ITEM59::itemName = "ITEM59";
const int OPTIONS::ITEM59::defaultValue = 0;
const std::string OPTIONS::ITEM60::itemName = "ITEM60";
const int OPTIONS::ITEM60::defaultValue = 0;
const std::string OPTIONS::ITEM61::itemName = "ITEM61";
const int OPTIONS::ITEM61::defaultValue = 0;
const std::string OPTIONS::ITEM62::itemName = "ITEM62";
const int OPTIONS::ITEM62::defaultValue = 0;
const std::string OPTIONS::ITEM63::itemName = "ITEM63";
const int OPTIONS::ITEM63::defaultValue = 0;
const std::string OPTIONS::ITEM64::itemName = "ITEM64";
const int OPTIONS::ITEM64::defaultValue = 0;
const std::string OPTIONS::ITEM65::itemName = "ITEM65";
const int OPTIONS::ITEM65::defaultValue = 0;
const std::string OPTIONS::ITEM66::itemName = "ITEM66";
const int OPTIONS::ITEM66::defaultValue = 0;
const std::string OPTIONS::ITEM67::itemName = "ITEM67";
const int OPTIONS::ITEM67::defaultValue = 0;
const std::string OPTIONS::ITEM68::itemName = "ITEM68";
const int OPTIONS::ITEM68::defaultValue = 0;
const std::string OPTIONS::ITEM69::itemName = "ITEM69";
const int OPTIONS::ITEM69::defaultValue = 0;
const std::string OPTIONS::ITEM70::itemName = "ITEM70";
const int OPTIONS::ITEM70::defaultValue = 0;
const std::string OPTIONS::ITEM71::itemName = "ITEM71";
const int OPTIONS::ITEM71::defaultValue = 0;
const std::string OPTIONS::ITEM72::itemName = "ITEM72";
const int OPTIONS::ITEM72::defaultValue = 0;
const std::string OPTIONS::ITEM73::itemName = "ITEM73";
const int OPTIONS::ITEM73::defaultValue = 0;
const std::string OPTIONS::ITEM74::itemName = "ITEM74";
const int OPTIONS::ITEM74::defaultValue = 0;
const std::string OPTIONS::ITEM75::itemName = "ITEM75";
const int OPTIONS::ITEM75::defaultValue = 0;
const std::string OPTIONS::ITEM76::itemName = "ITEM76";
const int OPTIONS::ITEM76::defaultValue = 0;
const std::string OPTIONS::ITEM77::itemName = "ITEM77";
const int OPTIONS::ITEM77::defaultValue = 0;
const std::string OPTIONS::ITEM78::itemName = "ITEM78";
const int OPTIONS::ITEM78::defaultValue = 0;
const std::string OPTIONS::ITEM79::itemName = "ITEM79";
const int OPTIONS::ITEM79::defaultValue = 0;
const std::string OPTIONS::ITEM80::itemName = "ITEM80";
const int OPTIONS::ITEM80::defaultValue = 0;
const std::string OPTIONS::ITEM81::itemName = "ITEM81";
const int OPTIONS::ITEM81::defaultValue = 0;
const std::string OPTIONS::ITEM82::itemName = "ITEM82";
const int OPTIONS::ITEM82::defaultValue = 0;
const std::string OPTIONS::ITEM83::itemName = "ITEM83";
const int OPTIONS::ITEM83::defaultValue = 0;
const std::string OPTIONS::ITEM84::itemName = "ITEM84";
const int OPTIONS::ITEM84::defaultValue = 0;
const std::string OPTIONS::ITEM85::itemName = "ITEM85";
const int OPTIONS::ITEM85::defaultValue = 0;
const std::string OPTIONS::ITEM86::itemName = "ITEM86";
const int OPTIONS::ITEM86::defaultValue = 0;
const std::string OPTIONS::ITEM87::itemName = "ITEM87";
const int OPTIONS::ITEM87::defaultValue = 0;
const std::string OPTIONS::ITEM88::itemName = "ITEM88";
const int OPTIONS::ITEM88::defaultValue = 0;
const std::string OPTIONS::ITEM89::itemName = "ITEM89";
const int OPTIONS::ITEM89::defaultValue = 0;
const std::string OPTIONS::ITEM90::itemName = "ITEM90";
const int OPTIONS::ITEM90::defaultValue = 0;
const std::string OPTIONS::ITEM91::itemName = "ITEM91";
const int OPTIONS::ITEM91::defaultValue = 0;
const std::string OPTIONS::ITEM92::itemName = "ITEM92";
const int OPTIONS::ITEM92::defaultValue = 0;
const std::string OPTIONS::ITEM93::itemName = "ITEM93";
const int OPTIONS::ITEM93::defaultValue = 0;
const std::string OPTIONS::ITEM94::itemName = "ITEM94";
const int OPTIONS::ITEM94::defaultValue = 0;
const std::string OPTIONS::ITEM95::itemName = "ITEM95";
const int OPTIONS::ITEM95::defaultValue = 0;
const std::string OPTIONS::ITEM96::itemName = "ITEM96";
const int OPTIONS::ITEM96::defaultValue = 0;
const std::string OPTIONS::ITEM97::itemName = "ITEM97";
const int OPTIONS::ITEM97::defaultValue = 0;
const std::string OPTIONS::ITEM98::itemName = "ITEM98";
const int OPTIONS::ITEM98::defaultValue = 0;
const std::string OPTIONS::ITEM99::itemName = "ITEM99";
const int OPTIONS::ITEM99::defaultValue = 0;
const std::string OPTIONS::ITEM100::itemName = "ITEM100";
const int OPTIONS::ITEM100::defaultValue = 0;
const std::string OPTIONS::ITEM101::itemName = "ITEM101";
const int OPTIONS::ITEM101::defaultValue = 0;
const std::string OPTIONS::ITEM102::itemName = "ITEM102";
const int OPTIONS::ITEM102::defaultValue = 0;
const std::string OPTIONS::ITEM103::itemName = "ITEM103";
const int OPTIONS::ITEM103::defaultValue = 0;
const std::string OPTIONS::ITEM104::itemName = "ITEM104";
const int OPTIONS::ITEM104::defaultValue = 0;
const std::string OPTIONS::ITEM105::itemName = "ITEM105";
const int OPTIONS::ITEM105::defaultValue = 0;
const std::string OPTIONS::ITEM106::itemName = "ITEM106";
const int OPTIONS::ITEM106::defaultValue = 0;
const std::string OPTIONS::ITEM107::itemName = "ITEM107";
const int OPTIONS::ITEM107::defaultValue = 0;
const std::string OPTIONS::ITEM108::itemName = "ITEM108";
const int OPTIONS::ITEM108::defaultValue = 0;
const std::string OPTIONS::ITEM109::itemName = "ITEM109";
const int OPTIONS::ITEM109::defaultValue = 0;
const std::string OPTIONS::ITEM110::itemName = "ITEM110";
const int OPTIONS::ITEM110::defaultValue = 0;
const std::string OPTIONS::ITEM111::itemName = "ITEM111";
const int OPTIONS::ITEM111::defaultValue = 0;
const std::string OPTIONS::ITEM112::itemName = "ITEM112";
const int OPTIONS::ITEM112::defaultValue = 0;
const std::string OPTIONS::ITEM113::itemName = "ITEM113";
const int OPTIONS::ITEM113::defaultValue = 0;
const std::string OPTIONS::ITEM114::itemName = "ITEM114";
const int OPTIONS::ITEM114::defaultValue = 0;
const std::string OPTIONS::ITEM115::itemName = "ITEM115";
const int OPTIONS::ITEM115::defaultValue = 0;
const std::string OPTIONS::ITEM116::itemName = "ITEM116";
const int OPTIONS::ITEM116::defaultValue = 0;
const std::string OPTIONS::ITEM117::itemName = "ITEM117";
const int OPTIONS::ITEM117::defaultValue = 0;
const std::string OPTIONS::ITEM118::itemName = "ITEM118";
const int OPTIONS::ITEM118::defaultValue = 0;
const std::string OPTIONS::ITEM119::itemName = "ITEM119";
const int OPTIONS::ITEM119::defaultValue = 0;
const std::string OPTIONS::ITEM120::itemName = "ITEM120";
const int OPTIONS::ITEM120::defaultValue = 0;
const std::string OPTIONS::ITEM121::itemName = "ITEM121";
const int OPTIONS::ITEM121::defaultValue = 0;
const std::string OPTIONS::ITEM122::itemName = "ITEM122";
const int OPTIONS::ITEM122::defaultValue = 0;
const std::string OPTIONS::ITEM123::itemName = "ITEM123";
const int OPTIONS::ITEM123::defaultValue = 0;
const std::string OPTIONS::ITEM124::itemName = "ITEM124";
const int OPTIONS::ITEM124::defaultValue = 0;
const std::string OPTIONS::ITEM125::itemName = "ITEM125";
const int OPTIONS::ITEM125::defaultValue = 0;
const std::string OPTIONS::ITEM126::itemName = "ITEM126";
const int OPTIONS::ITEM126::defaultValue = 0;
const std::string OPTIONS::ITEM127::itemName = "ITEM127";
const int OPTIONS::ITEM127::defaultValue = 0;
const std::string OPTIONS::ITEM128::itemName = "ITEM128";
const int OPTIONS::ITEM128::defaultValue = 0;
const std::string OPTIONS::ITEM129::itemName = "ITEM129";
const int OPTIONS::ITEM129::defaultValue = 0;
const std::string OPTIONS::ITEM130::itemName = "ITEM130";
const int OPTIONS::ITEM130::defaultValue = 0;
const std::string OPTIONS::ITEM131::itemName = "ITEM131";
const int OPTIONS::ITEM131::defaultValue = 0;
const std::string OPTIONS::ITEM132::itemName = "ITEM132";
const int OPTIONS::ITEM132::defaultValue = 0;
const std::string OPTIONS::ITEM133::itemName = "ITEM133";
const int OPTIONS::ITEM133::defaultValue = 0;
const std::string OPTIONS::ITEM134::itemName = "ITEM134";
const int OPTIONS::ITEM134::defaultValue = 0;
const std::string OPTIONS::ITEM135::itemName = "ITEM135";
const int OPTIONS::ITEM135::defaultValue = 0;
const std::string OPTIONS::ITEM136::itemName = "ITEM136";
const int OPTIONS::ITEM136::defaultValue = 0;
const std::string OPTIONS::ITEM137::itemName = "ITEM137";
const int OPTIONS::ITEM137::defaultValue = 0;
const std::string OPTIONS::ITEM138::itemName = "ITEM138";
const int OPTIONS::ITEM138::defaultValue = 0;
const std::string OPTIONS::ITEM139::itemName = "ITEM139";
const int OPTIONS::ITEM139::defaultValue = 0;
const std::string OPTIONS::ITEM140::itemName = "ITEM140";
const int OPTIONS::ITEM140::defaultValue = 0;
const std::string OPTIONS::ITEM141::itemName = "ITEM141";
const int OPTIONS::ITEM141::defaultValue = 0;
const std::string OPTIONS::ITEM142::itemName = "ITEM142";
const int OPTIONS::ITEM142::defaultValue = 0;
const std::string OPTIONS::ITEM143::itemName = "ITEM143";
const int OPTIONS::ITEM143::defaultValue = 0;
const std::string OPTIONS::ITEM144::itemName = "ITEM144";
const int OPTIONS::ITEM144::defaultValue = 0;
const std::string OPTIONS::ITEM145::itemName = "ITEM145";
const int OPTIONS::ITEM145::defaultValue = 0;
const std::string OPTIONS::ITEM146::itemName = "ITEM146";
const int OPTIONS::ITEM146::defaultValue = 0;
const std::string OPTIONS::ITEM147::itemName = "ITEM147";
const int OPTIONS::ITEM147::defaultValue = 0;
const std::string OPTIONS::ITEM148::itemName = "ITEM148";
const int OPTIONS::ITEM148::defaultValue = 0;
const std::string OPTIONS::ITEM149::itemName = "ITEM149";
const int OPTIONS::ITEM149::defaultValue = 0;
const std::string OPTIONS::ITEM150::itemName = "ITEM150";
const int OPTIONS::ITEM150::defaultValue = 0;
const std::string OPTIONS::ITEM151::itemName = "ITEM151";
const int OPTIONS::ITEM151::defaultValue = 0;
const std::string OPTIONS::ITEM152::itemName = "ITEM152";
const int OPTIONS::ITEM152::defaultValue = 0;
const std::string OPTIONS::ITEM153::itemName = "ITEM153";
const int OPTIONS::ITEM153::defaultValue = 0;
const std::string OPTIONS::ITEM154::itemName = "ITEM154";
const int OPTIONS::ITEM154::defaultValue = 0;
const std::string OPTIONS::ITEM155::itemName = "ITEM155";
const int OPTIONS::ITEM155::defaultValue = 0;
const std::string OPTIONS::ITEM156::itemName = "ITEM156";
const int OPTIONS::ITEM156::defaultValue = 0;
const std::string OPTIONS::ITEM157::itemName = "ITEM157";
const int OPTIONS::ITEM157::defaultValue = 0;
const std::string OPTIONS::ITEM158::itemName = "ITEM158";
const int OPTIONS::ITEM158::defaultValue = 0;
const std::string OPTIONS::ITEM159::itemName = "ITEM159";
const int OPTIONS::ITEM159::defaultValue = 0;
const std::string OPTIONS::ITEM160::itemName = "ITEM160";
const int OPTIONS::ITEM160::defaultValue = 0;
const std::string OPTIONS::ITEM161::itemName = "ITEM161";
const int OPTIONS::ITEM161::defaultValue = 0;
const std::string OPTIONS::ITEM162::itemName = "ITEM162";
const int OPTIONS::ITEM162::defaultValue = 0;
const std::string OPTIONS::ITEM163::itemName = "ITEM163";
const int OPTIONS::ITEM163::defaultValue = 0;
const std::string OPTIONS::ITEM164::itemName = "ITEM164";
const int OPTIONS::ITEM164::defaultValue = 0;
const std::string OPTIONS::ITEM165::itemName = "ITEM165";
const int OPTIONS::ITEM165::defaultValue = 0;
const std::string OPTIONS::ITEM166::itemName = "ITEM166";
const int OPTIONS::ITEM166::defaultValue = 0;
const std::string OPTIONS::ITEM167::itemName = "ITEM167";
const int OPTIONS::ITEM167::defaultValue = 0;
const std::string OPTIONS::ITEM168::itemName = "ITEM168";
const int OPTIONS::ITEM168::defaultValue = 0;
const std::string OPTIONS::ITEM169::itemName = "ITEM169";
const int OPTIONS::ITEM169::defaultValue = 0;
const std::string OPTIONS::ITEM170::itemName = "ITEM170";
const int OPTIONS::ITEM170::defaultValue = 0;
const std::string OPTIONS::ITEM171::itemName = "ITEM171";
const int OPTIONS::ITEM171::defaultValue = 0;
const std::string OPTIONS::ITEM172::itemName = "ITEM172";
const int OPTIONS::ITEM172::defaultValue = 0;
const std::string OPTIONS::ITEM173::itemName = "ITEM173";
const int OPTIONS::ITEM173::defaultValue = 0;
const std::string OPTIONS::ITEM174::itemName = "ITEM174";
const int OPTIONS::ITEM174::defaultValue = 0;
const std::string OPTIONS::ITEM175::itemName = "ITEM175";
const int OPTIONS::ITEM175::defaultValue = 0;
const std::string OPTIONS::ITEM176::itemName = "ITEM176";
const int OPTIONS::ITEM176::defaultValue = 0;
const std::string OPTIONS::ITEM177::itemName = "ITEM177";
const int OPTIONS::ITEM177::defaultValue = 0;
const std::string OPTIONS::ITEM178::itemName = "ITEM178";
const int OPTIONS::ITEM178::defaultValue = 0;
const std::string OPTIONS::ITEM179::itemName = "ITEM179";
const int OPTIONS::ITEM179::defaultValue = 0;
const std::string OPTIONS::ITEM180::itemName = "ITEM180";
const int OPTIONS::ITEM180::defaultValue = 0;
const std::string OPTIONS::ITEM181::itemName = "ITEM181";
const int OPTIONS::ITEM181::defaultValue = 0;
const std::string OPTIONS::ITEM182::itemName = "ITEM182";
const int OPTIONS::ITEM182::defaultValue = 0;
const std::string OPTIONS::ITEM183::itemName = "ITEM183";
const int OPTIONS::ITEM183::defaultValue = 0;
const std::string OPTIONS::ITEM184::itemName = "ITEM184";
const int OPTIONS::ITEM184::defaultValue = 0;
const std::string OPTIONS::ITEM185::itemName = "ITEM185";
const int OPTIONS::ITEM185::defaultValue = 0;
const std::string OPTIONS::ITEM186::itemName = "ITEM186";
const int OPTIONS::ITEM186::defaultValue = 0;
const std::string OPTIONS::ITEM187::itemName = "ITEM187";
const int OPTIONS::ITEM187::defaultValue = 0;
const std::string OPTIONS::ITEM188::itemName = "ITEM188";
const int OPTIONS::ITEM188::defaultValue = 0;
const std::string OPTIONS::ITEM189::itemName = "ITEM189";
const int OPTIONS::ITEM189::defaultValue = 0;
const std::string OPTIONS::ITEM190::itemName = "ITEM190";
const int OPTIONS::ITEM190::defaultValue = 0;
const std::string OPTIONS::ITEM191::itemName = "ITEM191";
const int OPTIONS::ITEM191::defaultValue = 0;
const std::string OPTIONS::ITEM192::itemName = "ITEM192";
const int OPTIONS::ITEM192::defaultValue = 0;
const std::string OPTIONS::ITEM193::itemName = "ITEM193";
const int OPTIONS::ITEM193::defaultValue = 0;
const std::string OPTIONS::ITEM194::itemName = "ITEM194";
const int OPTIONS::ITEM194::defaultValue = 0;
const std::string OPTIONS::ITEM195::itemName = "ITEM195";
const int OPTIONS::ITEM195::defaultValue = 0;
const std::string OPTIONS::ITEM196::itemName = "ITEM196";
const int OPTIONS::ITEM196::defaultValue = 0;
const std::string OPTIONS::ITEM197::itemName = "ITEM197";
const int OPTIONS::ITEM197::defaultValue = 0;


OUTRAD::OUTRAD( ) : ParserKeyword("OUTRAD") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("OUTRAD");
  {
     ParserRecord record;
     {
        ParserItem item("RADIUS", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string OUTRAD::keywordName = "OUTRAD";
const std::string OUTRAD::RADIUS::itemName = "RADIUS";


PARALLEL::PARALLEL( ) : ParserKeyword("PARALLEL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("PARALLEL");
  {
     ParserRecord record;
     {
        ParserItem item("NDMAIN", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MACHINE_TYPE", ParserItem::item_size::SINGLE, "DISTRIBUTED" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PARALLEL::keywordName = "PARALLEL";
const std::string PARALLEL::NDMAIN::itemName = "NDMAIN";
const int PARALLEL::NDMAIN::defaultValue = 1;
const std::string PARALLEL::MACHINE_TYPE::itemName = "MACHINE_TYPE";
const std::string PARALLEL::MACHINE_TYPE::defaultValue = "DISTRIBUTED";


PATHS::PATHS( ) : ParserKeyword("PATHS") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("PATHS");
  {
     ParserRecord record;
     {
        ParserItem item("PathName", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PathValue", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PATHS::keywordName = "PATHS";
const std::string PATHS::PathName::itemName = "PathName";
const std::string PATHS::PathValue::itemName = "PathValue";


PBVD::PBVD( ) : ParserKeyword("PBVD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("EQLDIMS","NTEQUL",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("PBVD");
  {
     ParserRecord record;
     {
        ParserItem item("table", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PBVD::keywordName = "PBVD";
const std::string PBVD::table::itemName = "table";


PCG::PCG( ) : ParserKeyword("PCG") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PCG");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PCG::keywordName = "PCG";
const std::string PCG::data::itemName = "data";


PERFORMANCE_PROBE::PERFORMANCE_PROBE( ) : ParserKeyword("PERFORMANCE_PROBE") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("ELAPSED");
  addDeckName("HLINEARS");
  addDeckName("HSUMLINS");
  addDeckName("MAXDPR");
  addDeckName("MAXDSG");
  addDeckName("MAXDSO");
  addDeckName("MAXDSW");
  addDeckName("MEMORYTS");
  addDeckName("MLINEARS");
  addDeckName("MSUMLINS");
  addDeckName("MSUMNEWT");
  addDeckName("NBYTOT");
  addDeckName("NEWTON");
  addDeckName("NLINEARS");
  addDeckName("NLINSMAX");
  addDeckName("NLINSMIN");
  addDeckName("PERFORMA");
  addDeckName("STEPTYPE");
  addDeckName("TCPU");
  addDeckName("TCPUDAY");
  addDeckName("TCPUH");
  addDeckName("TCPUHT");
  addDeckName("TCPUSCH");
  addDeckName("TCPUTS");
  addDeckName("TCPUTSH");
  addDeckName("TCPUTSHT");
  addDeckName("TELAPDAY");
  addDeckName("TELAPLIN");
  addDeckName("TELAPTS");
  addDeckName("TIMESTEP");
  addDeckName("WNEWTON");
  addDeckName("ZIPEFF");
  addDeckName("ZIPEFFC");
}
const std::string PERFORMANCE_PROBE::keywordName = "PERFORMANCE_PROBE";


PERMR::PERMR( ) : ParserKeyword("PERMR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PERMR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PERMR::keywordName = "PERMR";
const std::string PERMR::data::itemName = "data";


PERMTHT::PERMTHT( ) : ParserKeyword("PERMTHT") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PERMTHT");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PERMTHT::keywordName = "PERMTHT";
const std::string PERMTHT::data::itemName = "data";


PERMX::PERMX( ) : ParserKeyword("PERMX") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PERMX");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PERMX::keywordName = "PERMX";
const std::string PERMX::data::itemName = "data";


PERMXY::PERMXY( ) : ParserKeyword("PERMXY") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PERMXY");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PERMXY::keywordName = "PERMXY";
const std::string PERMXY::data::itemName = "data";


PERMY::PERMY( ) : ParserKeyword("PERMY") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PERMY");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PERMY::keywordName = "PERMY";
const std::string PERMY::data::itemName = "data";
const double PERMY::data::defaultValue = 0.000000;


PERMYZ::PERMYZ( ) : ParserKeyword("PERMYZ") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PERMYZ");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PERMYZ::keywordName = "PERMYZ";
const std::string PERMYZ::data::itemName = "data";


PERMZ::PERMZ( ) : ParserKeyword("PERMZ") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PERMZ");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PERMZ::keywordName = "PERMZ";
const std::string PERMZ::data::itemName = "data";
const double PERMZ::data::defaultValue = 0.000000;


PERMZX::PERMZX( ) : ParserKeyword("PERMZX") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PERMZX");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Permeability");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PERMZX::keywordName = "PERMZX";
const std::string PERMZX::data::itemName = "data";


PIMTDIMS::PIMTDIMS( ) : ParserKeyword("PIMTDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("PIMTDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("NTPIMT", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NPPIMT", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PIMTDIMS::keywordName = "PIMTDIMS";
const std::string PIMTDIMS::NTPIMT::itemName = "NTPIMT";
const int PIMTDIMS::NTPIMT::defaultValue = 0;
const std::string PIMTDIMS::NPPIMT::itemName = "NPPIMT";
const int PIMTDIMS::NPPIMT::defaultValue = 0;


PIMULTAB::PIMULTAB( ) : ParserKeyword("PIMULTAB") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("PIMTDIMS","NTPIMT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("PIMULTAB");
  {
     ParserRecord record;
     {
        ParserItem item("TABLE", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PIMULTAB::keywordName = "PIMULTAB";
const std::string PIMULTAB::TABLE::itemName = "TABLE";


PINCH::PINCH( ) : ParserKeyword("PINCH") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PINCH");
  {
     ParserRecord record;
     {
        ParserItem item("THRESHOLD_THICKNESS", ParserItem::item_size::SINGLE, double( 0.001 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("CONTROL_OPTION", ParserItem::item_size::SINGLE, "GAP" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_EMPTY_GAP", ParserItem::item_size::SINGLE, double( 1e+20 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("PINCHOUT_OPTION", ParserItem::item_size::SINGLE, "TOPBOT" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MULTZ_OPTION", ParserItem::item_size::SINGLE, "TOP" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PINCH::keywordName = "PINCH";
const std::string PINCH::THRESHOLD_THICKNESS::itemName = "THRESHOLD_THICKNESS";
const double PINCH::THRESHOLD_THICKNESS::defaultValue = 0.001000;
const std::string PINCH::CONTROL_OPTION::itemName = "CONTROL_OPTION";
const std::string PINCH::CONTROL_OPTION::defaultValue = "GAP";
const std::string PINCH::MAX_EMPTY_GAP::itemName = "MAX_EMPTY_GAP";
const double PINCH::MAX_EMPTY_GAP::defaultValue = 100000000000000000000.000000;
const std::string PINCH::PINCHOUT_OPTION::itemName = "PINCHOUT_OPTION";
const std::string PINCH::PINCHOUT_OPTION::defaultValue = "TOPBOT";
const std::string PINCH::MULTZ_OPTION::itemName = "MULTZ_OPTION";
const std::string PINCH::MULTZ_OPTION::defaultValue = "TOP";


PLMIXNUM::PLMIXNUM( ) : ParserKeyword("PLMIXNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("PLMIXNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PLMIXNUM::keywordName = "PLMIXNUM";
const std::string PLMIXNUM::data::itemName = "data";


PLMIXPAR::PLMIXPAR( ) : ParserKeyword("PLMIXPAR") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("REGDIMS","NPLMIX",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PLMIXPAR");
  {
     ParserRecord record;
     {
        ParserItem item("TODD_LONGSTAFF", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PLMIXPAR::keywordName = "PLMIXPAR";
const std::string PLMIXPAR::TODD_LONGSTAFF::itemName = "TODD_LONGSTAFF";


PLYADS::PLYADS( ) : ParserKeyword("PLYADS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("PLYADS");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("PolymerDensity");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PLYADS::keywordName = "PLYADS";
const std::string PLYADS::DATA::itemName = "DATA";


PLYADSS::PLYADSS( ) : ParserKeyword("PLYADSS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
setTableCollection( true );
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PLYADSS");
  {
     ParserRecord record;
     {
        ParserItem item("POLYMER_C", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("PolymerDensity");
        record.addItem(item);
     }
     {
        ParserItem item("POLYMER_ADS_C", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PLYADSS::keywordName = "PLYADSS";
const std::string PLYADSS::POLYMER_C::itemName = "POLYMER_C";
const std::string PLYADSS::POLYMER_ADS_C::itemName = "POLYMER_ADS_C";
const std::string PLYADSS::DATA::itemName = "DATA";


PLYDHFLF::PLYDHFLF( ) : ParserKeyword("PLYDHFLF") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("PLYDHFLF");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        item.push_backDimension("Time");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PLYDHFLF::keywordName = "PLYDHFLF";
const std::string PLYDHFLF::DATA::itemName = "DATA";


PLYMAX::PLYMAX( ) : ParserKeyword("PLYMAX") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("REGDIMS","NPLMIX",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("PLYMAX");
  {
     ParserRecord record;
     {
        ParserItem item("MAX_POLYMER_CONCENTRATION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("PolymerDensity");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_SALT_CONCENTRATION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("PolymerDensity");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PLYMAX::keywordName = "PLYMAX";
const std::string PLYMAX::MAX_POLYMER_CONCENTRATION::itemName = "MAX_POLYMER_CONCENTRATION";
const std::string PLYMAX::MAX_SALT_CONCENTRATION::itemName = "MAX_SALT_CONCENTRATION";


PLYROCK::PLYROCK( ) : ParserKeyword("PLYROCK") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("PLYROCK");
  {
     ParserRecord record;
     {
        ParserItem item("IPV", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("RRF", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("ROCK_DENSITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addItem(item);
     }
     {
        ParserItem item("AI", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ADSORPTION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PLYROCK::keywordName = "PLYROCK";
const std::string PLYROCK::IPV::itemName = "IPV";
const std::string PLYROCK::RRF::itemName = "RRF";
const std::string PLYROCK::ROCK_DENSITY::itemName = "ROCK_DENSITY";
const std::string PLYROCK::AI::itemName = "AI";
const double PLYROCK::AI::defaultValue = 1.000000;
const std::string PLYROCK::MAX_ADSORPTION::itemName = "MAX_ADSORPTION";


PLYSHEAR::PLYSHEAR( ) : ParserKeyword("PLYSHEAR") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("PLYSHEAR");
  {
     ParserRecord record;
     {
        ParserItem item("WATER_VELOCITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length/Time");
        record.addItem(item);
     }
     {
        ParserItem item("VRF", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PLYSHEAR::keywordName = "PLYSHEAR";
const std::string PLYSHEAR::WATER_VELOCITY::itemName = "WATER_VELOCITY";
const std::string PLYSHEAR::VRF::itemName = "VRF";


PLYSHLOG::PLYSHLOG( ) : ParserKeyword("PLYSHLOG") {
  setFixedSize( (size_t) 2);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("PLYSHLOG");
  {
     ParserRecord record;
     {
        ParserItem item("REF_POLYMER_CONCENTRATION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("PolymerDensity");
        record.addItem(item);
     }
     {
        ParserItem item("REF_SALINITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Salinity");
        record.addItem(item);
     }
     {
        ParserItem item("REF_TEMPERATURE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PLYSHLOG::keywordName = "PLYSHLOG";
const std::string PLYSHLOG::REF_POLYMER_CONCENTRATION::itemName = "REF_POLYMER_CONCENTRATION";
const std::string PLYSHLOG::REF_SALINITY::itemName = "REF_SALINITY";
const std::string PLYSHLOG::REF_TEMPERATURE::itemName = "REF_TEMPERATURE";
const std::string PLYSHLOG::DATA::itemName = "DATA";


PLYVISC::PLYVISC( ) : ParserKeyword("PLYVISC") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("PLYVISC");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("PolymerDensity");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PLYVISC::keywordName = "PLYVISC";
const std::string PLYVISC::DATA::itemName = "DATA";


PMISC::PMISC( ) : ParserKeyword("PMISC") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("MISCIBLE","NTMISC",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PMISC");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PMISC::keywordName = "PMISC";
const std::string PMISC::DATA::itemName = "DATA";


POLYMER::POLYMER( ) : ParserKeyword("POLYMER") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("POLYMER");
}
const std::string POLYMER::keywordName = "POLYMER";


PORO::PORO( ) : ParserKeyword("PORO") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("PORO");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PORO::keywordName = "PORO";
const std::string PORO::data::itemName = "data";
const double PORO::data::defaultValue = 0.000000;


PORV::PORV( ) : ParserKeyword("PORV") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  clearDeckNames();
  addDeckName("PORV");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ReservoirVolume");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PORV::keywordName = "PORV";
const std::string PORV::data::itemName = "data";


PPCWMAX::PPCWMAX( ) : ParserKeyword("PPCWMAX") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PPCWMAX");
  {
     ParserRecord record;
     {
        ParserItem item("MAXIMUM_CAPILLARY_PRESSURE", ParserItem::item_size::SINGLE, double( 1e+20 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MODIFY_CONNATE_SATURATION", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PPCWMAX::keywordName = "PPCWMAX";
const std::string PPCWMAX::MAXIMUM_CAPILLARY_PRESSURE::itemName = "MAXIMUM_CAPILLARY_PRESSURE";
const double PPCWMAX::MAXIMUM_CAPILLARY_PRESSURE::defaultValue = 100000000000000000000.000000;
const std::string PPCWMAX::MODIFY_CONNATE_SATURATION::itemName = "MODIFY_CONNATE_SATURATION";
const std::string PPCWMAX::MODIFY_CONNATE_SATURATION::defaultValue = "NO";


PREF::PREF( ) : ParserKeyword("PREF") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PREF");
  {
     ParserRecord record;
     {
        ParserItem item("PRESSURE", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PREF::keywordName = "PREF";
const std::string PREF::PRESSURE::itemName = "PRESSURE";


PREFS::PREFS( ) : ParserKeyword("PREFS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PREFS");
  {
     ParserRecord record;
     {
        ParserItem item("PRESSURE", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PREFS::keywordName = "PREFS";
const std::string PREFS::PRESSURE::itemName = "PRESSURE";


PRESSURE::PRESSURE( ) : ParserKeyword("PRESSURE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("PRESSURE");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PRESSURE::keywordName = "PRESSURE";
const std::string PRESSURE::data::itemName = "data";


PROPS::PROPS( ) : ParserKeyword("PROPS") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  clearDeckNames();
  addDeckName("PROPS");
}
const std::string PROPS::keywordName = "PROPS";


PRORDER::PRORDER( ) : ParserKeyword("PRORDER") {
  setFixedSize( (size_t) 2);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("PRORDER");
  {
     ParserRecord record;
     {
        ParserItem item("NO1", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NO2", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NO3", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NO4", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NO5", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("OPT1", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPT2", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPT3", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPT4", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OPT5", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PRORDER::keywordName = "PRORDER";
const std::string PRORDER::NO1::itemName = "NO1";
const std::string PRORDER::NO2::itemName = "NO2";
const std::string PRORDER::NO3::itemName = "NO3";
const std::string PRORDER::NO4::itemName = "NO4";
const std::string PRORDER::NO5::itemName = "NO5";
const std::string PRORDER::OPT1::itemName = "OPT1";
const std::string PRORDER::OPT1::defaultValue = "YES";
const std::string PRORDER::OPT2::itemName = "OPT2";
const std::string PRORDER::OPT2::defaultValue = "YES";
const std::string PRORDER::OPT3::itemName = "OPT3";
const std::string PRORDER::OPT3::defaultValue = "YES";
const std::string PRORDER::OPT4::itemName = "OPT4";
const std::string PRORDER::OPT4::defaultValue = "YES";
const std::string PRORDER::OPT5::itemName = "OPT5";
const std::string PRORDER::OPT5::defaultValue = "YES";


PVCDO::PVCDO( ) : ParserKeyword("PVCDO") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PVCDO");
  {
     ParserRecord record;
     {
        ParserItem item("P_REF", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("OIL_VOL_FACTOR", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("OIL_COMPRESSIBILITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("OIL_VISCOSITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Viscosity");
        record.addItem(item);
     }
     {
        ParserItem item("OIL_VISCOSIBILITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PVCDO::keywordName = "PVCDO";
const std::string PVCDO::P_REF::itemName = "P_REF";
const std::string PVCDO::OIL_VOL_FACTOR::itemName = "OIL_VOL_FACTOR";
const std::string PVCDO::OIL_COMPRESSIBILITY::itemName = "OIL_COMPRESSIBILITY";
const std::string PVCDO::OIL_VISCOSITY::itemName = "OIL_VISCOSITY";
const std::string PVCDO::OIL_VISCOSIBILITY::itemName = "OIL_VISCOSIBILITY";


PVDG::PVDG( ) : ParserKeyword("PVDG") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PVDG");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        item.push_backDimension("OilDissolutionFactor");
        item.push_backDimension("Viscosity");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PVDG::keywordName = "PVDG";
const std::string PVDG::data::itemName = "data";


PVDO::PVDO( ) : ParserKeyword("PVDO") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PVDO");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        item.push_backDimension("1");
        item.push_backDimension("Viscosity");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PVDO::keywordName = "PVDO";
const std::string PVDO::data::itemName = "data";


PVDS::PVDS( ) : ParserKeyword("PVDS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PVDS");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        item.push_backDimension("OilDissolutionFactor");
        item.push_backDimension("Viscosity");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PVDS::keywordName = "PVDS";
const std::string PVDS::data::itemName = "data";


PVTG::PVTG( ) : ParserKeyword("PVTG") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
setTableCollection( true );
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PVTG");
  {
     ParserRecord record;
     {
        ParserItem item("GAS_PRESSURE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("OilDissolutionFactor");
        item.push_backDimension("OilDissolutionFactor");
        item.push_backDimension("Viscosity");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PVTG::keywordName = "PVTG";
const std::string PVTG::GAS_PRESSURE::itemName = "GAS_PRESSURE";
const std::string PVTG::DATA::itemName = "DATA";


PVTNUM::PVTNUM( ) : ParserKeyword("PVTNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("PVTNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string PVTNUM::keywordName = "PVTNUM";
const std::string PVTNUM::data::itemName = "data";


PVTO::PVTO( ) : ParserKeyword("PVTO") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
setTableCollection( true );
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PVTO");
  {
     ParserRecord record;
     {
        ParserItem item("RS", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("GasDissolutionFactor");
        record.addItem(item);
     }
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        item.push_backDimension("1");
        item.push_backDimension("Viscosity");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PVTO::keywordName = "PVTO";
const std::string PVTO::RS::itemName = "RS";
const std::string PVTO::DATA::itemName = "DATA";


PVTW::PVTW( ) : ParserKeyword("PVTW") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("PVTW");
  {
     ParserRecord record;
     {
        ParserItem item("P_REF", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_VOL_FACTOR", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_COMPRESSIBILITY", ParserItem::item_size::SINGLE, double( 4.0000000000000003e-05 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_VISCOSITY", ParserItem::item_size::SINGLE, double( 0.5 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Viscosity");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_VISCOSIBILITY", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string PVTW::keywordName = "PVTW";
const std::string PVTW::P_REF::itemName = "P_REF";
const std::string PVTW::WATER_VOL_FACTOR::itemName = "WATER_VOL_FACTOR";
const double PVTW::WATER_VOL_FACTOR::defaultValue = 1.000000;
const std::string PVTW::WATER_COMPRESSIBILITY::itemName = "WATER_COMPRESSIBILITY";
const double PVTW::WATER_COMPRESSIBILITY::defaultValue = 0.000040;
const std::string PVTW::WATER_VISCOSITY::itemName = "WATER_VISCOSITY";
const double PVTW::WATER_VISCOSITY::defaultValue = 0.500000;
const std::string PVTW::WATER_VISCOSIBILITY::itemName = "WATER_VISCOSIBILITY";
const double PVTW::WATER_VISCOSIBILITY::defaultValue = 0.000000;


PVT_M::PVT_M( ) : ParserKeyword("PVT_M") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("PVT-M");
}
const std::string PVT_M::keywordName = "PVT_M";


QDRILL::QDRILL( ) : ParserKeyword("QDRILL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("QDRILL");
  {
     ParserRecord record;
     {
        ParserItem item("WELL_NAME", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string QDRILL::keywordName = "QDRILL";
const std::string QDRILL::WELL_NAME::itemName = "WELL_NAME";


RADFIN4::RADFIN4( ) : ParserKeyword("RADFIN4") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("RADFIN4");
  {
     ParserRecord record;
     {
        ParserItem item("NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NR", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTHETA", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NZ", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NWMAX", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RADFIN4::keywordName = "RADFIN4";
const std::string RADFIN4::NAME::itemName = "NAME";
const std::string RADFIN4::I1::itemName = "I1";
const std::string RADFIN4::I2::itemName = "I2";
const std::string RADFIN4::J1::itemName = "J1";
const std::string RADFIN4::J2::itemName = "J2";
const std::string RADFIN4::K1::itemName = "K1";
const std::string RADFIN4::K2::itemName = "K2";
const std::string RADFIN4::NR::itemName = "NR";
const std::string RADFIN4::NTHETA::itemName = "NTHETA";
const std::string RADFIN4::NZ::itemName = "NZ";
const std::string RADFIN4::NWMAX::itemName = "NWMAX";
const int RADFIN4::NWMAX::defaultValue = 1;


RADIAL::RADIAL( ) : ParserKeyword("RADIAL") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("RADIAL");
}
const std::string RADIAL::keywordName = "RADIAL";


REGDIMS::REGDIMS( ) : ParserKeyword("REGDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("REGDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("NTFIP", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NMFIPR", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NRFREG", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTFREG", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ETRACK", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTCREG", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_OPERNUM", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_OPERATE_DWORK", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_OPERATE_IWORK", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NPLMIX", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string REGDIMS::keywordName = "REGDIMS";
const std::string REGDIMS::NTFIP::itemName = "NTFIP";
const int REGDIMS::NTFIP::defaultValue = 1;
const std::string REGDIMS::NMFIPR::itemName = "NMFIPR";
const int REGDIMS::NMFIPR::defaultValue = 1;
const std::string REGDIMS::NRFREG::itemName = "NRFREG";
const int REGDIMS::NRFREG::defaultValue = 0;
const std::string REGDIMS::NTFREG::itemName = "NTFREG";
const int REGDIMS::NTFREG::defaultValue = 0;
const std::string REGDIMS::MAX_ETRACK::itemName = "MAX_ETRACK";
const int REGDIMS::MAX_ETRACK::defaultValue = 0;
const std::string REGDIMS::NTCREG::itemName = "NTCREG";
const int REGDIMS::NTCREG::defaultValue = 1;
const std::string REGDIMS::MAX_OPERNUM::itemName = "MAX_OPERNUM";
const int REGDIMS::MAX_OPERNUM::defaultValue = 0;
const std::string REGDIMS::MAX_OPERATE_DWORK::itemName = "MAX_OPERATE_DWORK";
const int REGDIMS::MAX_OPERATE_DWORK::defaultValue = 0;
const std::string REGDIMS::MAX_OPERATE_IWORK::itemName = "MAX_OPERATE_IWORK";
const int REGDIMS::MAX_OPERATE_IWORK::defaultValue = 0;
const std::string REGDIMS::NPLMIX::itemName = "NPLMIX";
const int REGDIMS::NPLMIX::defaultValue = 1;


REGIONS::REGIONS( ) : ParserKeyword("REGIONS") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  clearDeckNames();
  addDeckName("REGIONS");
}
const std::string REGIONS::keywordName = "REGIONS";


REGION_PROBE::REGION_PROBE( ) : ParserKeyword("REGION_PROBE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("RAPI");
  addDeckName("RCAD");
  addDeckName("RCFT");
  addDeckName("RCGC");
  addDeckName("RCIP");
  addDeckName("RCSC");
  addDeckName("RGDEN");
  addDeckName("RGFT");
  addDeckName("RGFTG");
  addDeckName("RGFTL");
  addDeckName("RGIP");
  addDeckName("RGIPG");
  addDeckName("RGIPL");
  addDeckName("RGIR");
  addDeckName("RGIT");
  addDeckName("RGP");
  addDeckName("RGPR");
  addDeckName("RGPRF");
  addDeckName("RGPRS");
  addDeckName("RGPT");
  addDeckName("RGPTF");
  addDeckName("RGPTS");
  addDeckName("RGPV");
  addDeckName("RGSAT");
  addDeckName("RGVIS");
  addDeckName("RHPV");
  addDeckName("RNFT");
  addDeckName("RNIP");
  addDeckName("RODEN");
  addDeckName("ROE");
  addDeckName("ROEIG");
  addDeckName("ROEIW");
  addDeckName("ROEW");
  addDeckName("ROEWG");
  addDeckName("ROEWW");
  addDeckName("ROFT");
  addDeckName("ROIP");
  addDeckName("ROIPG");
  addDeckName("ROIPL");
  addDeckName("ROIR");
  addDeckName("ROIT");
  addDeckName("ROP");
  addDeckName("ROPR");
  addDeckName("ROPT");
  addDeckName("ROPV");
  addDeckName("RORFE");
  addDeckName("RORFF");
  addDeckName("RORFG");
  addDeckName("RORFR");
  addDeckName("RORFS");
  addDeckName("RORFW");
  addDeckName("RORFX");
  addDeckName("RORFY");
  addDeckName("RORME");
  addDeckName("RORMF");
  addDeckName("RORMG");
  addDeckName("RORMR");
  addDeckName("RORMS");
  addDeckName("RORMW");
  addDeckName("RORMX");
  addDeckName("RORMY");
  addDeckName("ROSAT");
  addDeckName("ROVIS");
  addDeckName("RPPC");
  addDeckName("RPPG");
  addDeckName("RPPO");
  addDeckName("RPPW");
  addDeckName("RPR");
  addDeckName("RPRGZ");
  addDeckName("RPRH");
  addDeckName("RPRP");
  addDeckName("RRPV");
  addDeckName("RRS");
  addDeckName("RRTM");
  addDeckName("RRV");
  addDeckName("RSFT");
  addDeckName("RSIP");
  addDeckName("RTADSFOA");
  addDeckName("RTADSUR");
  addDeckName("RTDCYFOA");
  addDeckName("RTFTTFOA");
  addDeckName("RTFTTSUR");
  addDeckName("RTIPT");
  addDeckName("RTIPTFOA");
  addDeckName("RTIPTHEA");
  addDeckName("RTIPTSUR");
  addDeckName("RTMOBFOA");
  addDeckName("RWDEN");
  addDeckName("RWFT");
  addDeckName("RWIP");
  addDeckName("RWIR");
  addDeckName("RWIT");
  addDeckName("RWP");
  addDeckName("RWPR");
  addDeckName("RWPT");
  addDeckName("RWPV");
  addDeckName("RWSAT");
  addDeckName("RWVIS");
  setMatchRegex("R[OGW]?[IP][PRT]_.+|RU.+|RTIPF.+|RTIPS.+|RTFTF.+|RTFTS.+|RTFTT.+|RTIPT.+|RTIPF.+|RTIPS.+|RTIP[1-9][0-9]*.+|RTFTT.+|RTFTF.+|RTFTS.+|RTFT[1-9][0-9]*.+|RTADS.+|RTDCY.+");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string REGION_PROBE::keywordName = "REGION_PROBE";
const std::string REGION_PROBE::data::itemName = "data";


RESTART::RESTART( ) : ParserKeyword("RESTART") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RESTART");
  {
     ParserRecord record;
     {
        ParserItem item("ROOTNAME", ParserItem::item_size::SINGLE, "BASE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("REPORTNUMBER", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SAVEFILE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SAVEFILE_FORMAT", ParserItem::item_size::SINGLE, "UNFORMATTED" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RESTART::keywordName = "RESTART";
const std::string RESTART::ROOTNAME::itemName = "ROOTNAME";
const std::string RESTART::ROOTNAME::defaultValue = "BASE";
const std::string RESTART::REPORTNUMBER::itemName = "REPORTNUMBER";
const std::string RESTART::SAVEFILE::itemName = "SAVEFILE";
const std::string RESTART::SAVEFILE_FORMAT::itemName = "SAVEFILE_FORMAT";
const std::string RESTART::SAVEFILE_FORMAT::defaultValue = "UNFORMATTED";


RHO::RHO( ) : ParserKeyword("RHO") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("RHO");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string RHO::keywordName = "RHO";
const std::string RHO::data::itemName = "data";
const double RHO::data::defaultValue = 0.000000;


RKTRMDIR::RKTRMDIR( ) : ParserKeyword("RKTRMDIR") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("RKTRMDIR");
}
const std::string RKTRMDIR::keywordName = "RKTRMDIR";


ROCK::ROCK( ) : ParserKeyword("ROCK") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ROCK");
  {
     ParserRecord record;
     {
        ParserItem item("PREF", ParserItem::item_size::SINGLE, double( 1.0132000000000001 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("COMPRESSIBILITY", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ROCK::keywordName = "ROCK";
const std::string ROCK::PREF::itemName = "PREF";
const double ROCK::PREF::defaultValue = 1.013200;
const std::string ROCK::COMPRESSIBILITY::itemName = "COMPRESSIBILITY";
const double ROCK::COMPRESSIBILITY::defaultValue = 0.000000;


ROCKCOMP::ROCKCOMP( ) : ParserKeyword("ROCKCOMP") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("ROCKCOMP");
  {
     ParserRecord record;
     {
        ParserItem item("HYSTERESIS", ParserItem::item_size::SINGLE, "REVERS" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTROCC", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WATER_COMPACTION", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ROCKCOMP::keywordName = "ROCKCOMP";
const std::string ROCKCOMP::HYSTERESIS::itemName = "HYSTERESIS";
const std::string ROCKCOMP::HYSTERESIS::defaultValue = "REVERS";
const std::string ROCKCOMP::NTROCC::itemName = "NTROCC";
const int ROCKCOMP::NTROCC::defaultValue = 1;
const std::string ROCKCOMP::WATER_COMPACTION::itemName = "WATER_COMPACTION";
const std::string ROCKCOMP::WATER_COMPACTION::defaultValue = "NO";


ROCKNUM::ROCKNUM( ) : ParserKeyword("ROCKNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("ROCKNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ROCKNUM::keywordName = "ROCKNUM";
const std::string ROCKNUM::data::itemName = "data";


ROCKOPTS::ROCKOPTS( ) : ParserKeyword("ROCKOPTS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ROCKOPTS");
  {
     ParserRecord record;
     {
        ParserItem item("METHOD", ParserItem::item_size::SINGLE, "PRESSURE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("REF_PRESSURE", ParserItem::item_size::SINGLE, "NOSTORE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TABLE_TYPE", ParserItem::item_size::SINGLE, "PVTNUM" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("HYST_TYPE", ParserItem::item_size::SINGLE, "DEFLATION" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ROCKOPTS::keywordName = "ROCKOPTS";
const std::string ROCKOPTS::METHOD::itemName = "METHOD";
const std::string ROCKOPTS::METHOD::defaultValue = "PRESSURE";
const std::string ROCKOPTS::REF_PRESSURE::itemName = "REF_PRESSURE";
const std::string ROCKOPTS::REF_PRESSURE::defaultValue = "NOSTORE";
const std::string ROCKOPTS::TABLE_TYPE::itemName = "TABLE_TYPE";
const std::string ROCKOPTS::TABLE_TYPE::defaultValue = "PVTNUM";
const std::string ROCKOPTS::HYST_TYPE::itemName = "HYST_TYPE";
const std::string ROCKOPTS::HYST_TYPE::defaultValue = "DEFLATION";


ROCKTAB::ROCKTAB( ) : ParserKeyword("ROCKTAB") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("ROCKCOMP","NTROCC",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ROCKTAB");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ROCKTAB::keywordName = "ROCKTAB";
const std::string ROCKTAB::DATA::itemName = "DATA";


RPTGRID::RPTGRID( ) : ParserKeyword("RPTGRID") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("RPTGRID");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RPTGRID::keywordName = "RPTGRID";
const std::string RPTGRID::DATA::itemName = "DATA";


RPTONLY::RPTONLY( ) : ParserKeyword("RPTONLY") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("RPTONLY");
}
const std::string RPTONLY::keywordName = "RPTONLY";


RPTONLYO::RPTONLYO( ) : ParserKeyword("RPTONLYO") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("RPTONLYO");
}
const std::string RPTONLYO::keywordName = "RPTONLYO";


RPTPROPS::RPTPROPS( ) : ParserKeyword("RPTPROPS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("RPTPROPS");
  {
     ParserRecord record;
     {
        ParserItem item("mnemonics", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RPTPROPS::keywordName = "RPTPROPS";
const std::string RPTPROPS::mnemonics::itemName = "mnemonics";


RPTREGS::RPTREGS( ) : ParserKeyword("RPTREGS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("RPTREGS");
  {
     ParserRecord record;
     {
        ParserItem item("MNEMONIC_LIST", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RPTREGS::keywordName = "RPTREGS";
const std::string RPTREGS::MNEMONIC_LIST::itemName = "MNEMONIC_LIST";


RPTRST::RPTRST( ) : ParserKeyword("RPTRST") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RPTRST");
  {
     ParserRecord record;
     {
        ParserItem item("MNEMONIC_LIST", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RPTRST::keywordName = "RPTRST";
const std::string RPTRST::MNEMONIC_LIST::itemName = "MNEMONIC_LIST";


RPTRUNSP::RPTRUNSP( ) : ParserKeyword("RPTRUNSP") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("RPTRUNSP");
}
const std::string RPTRUNSP::keywordName = "RPTRUNSP";


RPTSCHED::RPTSCHED( ) : ParserKeyword("RPTSCHED") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("RPTSCHED");
  {
     ParserRecord record;
     {
        ParserItem item("MNEMONIC_LIST", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RPTSCHED::keywordName = "RPTSCHED";
const std::string RPTSCHED::MNEMONIC_LIST::itemName = "MNEMONIC_LIST";


RPTSMRY::RPTSMRY( ) : ParserKeyword("RPTSMRY") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("RPTSMRY");
  {
     ParserRecord record;
     {
        ParserItem item("WRITE", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RPTSMRY::keywordName = "RPTSMRY";
const std::string RPTSMRY::WRITE::itemName = "WRITE";


RPTSOL::RPTSOL( ) : ParserKeyword("RPTSOL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RPTSOL");
  {
     ParserRecord record;
     {
        ParserItem item("mnemonics", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RPTSOL::keywordName = "RPTSOL";
const std::string RPTSOL::mnemonics::itemName = "mnemonics";


RS::RS( ) : ParserKeyword("RS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RS");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("GasDissolutionFactor");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string RS::keywordName = "RS";
const std::string RS::data::itemName = "data";


RSCONST::RSCONST( ) : ParserKeyword("RSCONST") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("RSCONST");
  {
     ParserRecord record;
     {
        ParserItem item("RS", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PB", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RSCONST::keywordName = "RSCONST";
const std::string RSCONST::RS::itemName = "RS";
const std::string RSCONST::PB::itemName = "PB";


RSCONSTT::RSCONSTT( ) : ParserKeyword("RSCONSTT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("RSCONSTT");
  {
     ParserRecord record;
     {
        ParserItem item("RS_CONSTT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PB_CONSTT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RSCONSTT::keywordName = "RSCONSTT";
const std::string RSCONSTT::RS_CONSTT::itemName = "RS_CONSTT";
const std::string RSCONSTT::PB_CONSTT::itemName = "PB_CONSTT";


RSVD::RSVD( ) : ParserKeyword("RSVD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("EQLDIMS","NTEQUL",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RSVD");
  {
     ParserRecord record;
     {
        ParserItem item("table", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("GasDissolutionFactor");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RSVD::keywordName = "RSVD";
const std::string RSVD::table::itemName = "table";


RTEMP::RTEMP( ) : ParserKeyword("RTEMP") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RTEMP");
  {
     ParserRecord record;
     {
        ParserItem item("TEMP", ParserItem::item_size::SINGLE, double( 15.555 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RTEMP::keywordName = "RTEMP";
const std::string RTEMP::TEMP::itemName = "TEMP";
const double RTEMP::TEMP::defaultValue = 15.555000;


RTEMPA::RTEMPA( ) : ParserKeyword("RTEMPA") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RTEMPA");
  {
     ParserRecord record;
     {
        ParserItem item("TEMP", ParserItem::item_size::SINGLE, double( 15.555 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RTEMPA::keywordName = "RTEMPA";
const std::string RTEMPA::TEMP::itemName = "TEMP";
const double RTEMPA::TEMP::defaultValue = 15.555000;


RTEMPVD::RTEMPVD( ) : ParserKeyword("RTEMPVD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("EQLDIMS","NTEQUL",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RTEMPVD");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("Temperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RTEMPVD::keywordName = "RTEMPVD";
const std::string RTEMPVD::DATA::itemName = "DATA";


RUNSPEC::RUNSPEC( ) : ParserKeyword("RUNSPEC") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  clearDeckNames();
  addDeckName("RUNSPEC");
}
const std::string RUNSPEC::keywordName = "RUNSPEC";


RUNSUM::RUNSUM( ) : ParserKeyword("RUNSUM") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("RUNSUM");
}
const std::string RUNSUM::keywordName = "RUNSUM";


RV::RV( ) : ParserKeyword("RV") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RV");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("OilDissolutionFactor");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string RV::keywordName = "RV";
const std::string RV::data::itemName = "data";


RVVD::RVVD( ) : ParserKeyword("RVVD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("EQLDIMS","NTEQUL",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("RVVD");
  {
     ParserRecord record;
     {
        ParserItem item("table", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("OilDissolutionFactor");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string RVVD::keywordName = "RVVD";
const std::string RVVD::table::itemName = "table";


SATNUM::SATNUM( ) : ParserKeyword("SATNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  addDeckName("SATNUM");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SATNUM::keywordName = "SATNUM";
const std::string SATNUM::data::itemName = "data";


SATOPTS::SATOPTS( ) : ParserKeyword("SATOPTS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("SATOPTS");
  {
     ParserRecord record;
     {
        ParserItem item("options", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SATOPTS::keywordName = "SATOPTS";
const std::string SATOPTS::options::itemName = "options";


SAVE::SAVE( ) : ParserKeyword("SAVE") {
  setSizeType(UNKNOWN);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("SAVE");
  {
     ParserRecord record;
     {
        ParserItem item("FILE_TYPE", ParserItem::item_size::SINGLE, "UNFORMATTED" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SAVE::keywordName = "SAVE";
const std::string SAVE::FILE_TYPE::itemName = "FILE_TYPE";
const std::string SAVE::FILE_TYPE::defaultValue = "UNFORMATTED";


SCALECRS::SCALECRS( ) : ParserKeyword("SCALECRS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SCALECRS");
  {
     ParserRecord record;
     {
        ParserItem item("VALUE", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SCALECRS::keywordName = "SCALECRS";
const std::string SCALECRS::VALUE::itemName = "VALUE";
const std::string SCALECRS::VALUE::defaultValue = "NO";


SCHEDULE::SCHEDULE( ) : ParserKeyword("SCHEDULE") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  clearDeckNames();
  addDeckName("SCHEDULE");
}
const std::string SCHEDULE::keywordName = "SCHEDULE";


SDENSITY::SDENSITY( ) : ParserKeyword("SDENSITY") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SDENSITY");
  {
     ParserRecord record;
     {
        ParserItem item("SOLVENT_DENSITY", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SDENSITY::keywordName = "SDENSITY";
const std::string SDENSITY::SOLVENT_DENSITY::itemName = "SOLVENT_DENSITY";
const double SDENSITY::SOLVENT_DENSITY::defaultValue = 1.000000;


SEPARATE::SEPARATE( ) : ParserKeyword("SEPARATE") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("SEPARATE");
}
const std::string SEPARATE::keywordName = "SEPARATE";


SGAS::SGAS( ) : ParserKeyword("SGAS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("SGAS");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SGAS::keywordName = "SGAS";
const std::string SGAS::data::itemName = "data";


SGCR::SGCR( ) : ParserKeyword("SGCR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SGCR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SGCR::keywordName = "SGCR";
const std::string SGCR::data::itemName = "data";


SGCWMIS::SGCWMIS( ) : ParserKeyword("SGCWMIS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("MISCIBLE","NTMISC",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SGCWMIS");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SGCWMIS::keywordName = "SGCWMIS";
const std::string SGCWMIS::DATA::itemName = "DATA";


SGFN::SGFN( ) : ParserKeyword("SGFN") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SGFN");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SGFN::keywordName = "SGFN";
const std::string SGFN::DATA::itemName = "DATA";


SGL::SGL( ) : ParserKeyword("SGL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SGL");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SGL::keywordName = "SGL";
const std::string SGL::data::itemName = "data";


SGOF::SGOF( ) : ParserKeyword("SGOF") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SGOF");
  {
     ParserRecord record;
     {
        ParserItem item("table", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SGOF::keywordName = "SGOF";
const std::string SGOF::table::itemName = "table";


SGU::SGU( ) : ParserKeyword("SGU") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SGU");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SGU::keywordName = "SGU";
const std::string SGU::data::itemName = "data";


SGWFN::SGWFN( ) : ParserKeyword("SGWFN") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SGWFN");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SGWFN::keywordName = "SGWFN";
const std::string SGWFN::DATA::itemName = "DATA";


SHRATE::SHRATE( ) : ParserKeyword("SHRATE") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SHRATE");
  {
     ParserRecord record;
     {
        ParserItem item("SHEAR_RATE", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SHRATE::keywordName = "SHRATE";
const std::string SHRATE::SHEAR_RATE::itemName = "SHEAR_RATE";


SKIP::SKIP( ) : ParserKeyword("SKIP") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("SKIP");
}
const std::string SKIP::keywordName = "SKIP";


SKIP100::SKIP100( ) : ParserKeyword("SKIP100") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("SKIP100");
}
const std::string SKIP100::keywordName = "SKIP100";


SKIP300::SKIP300( ) : ParserKeyword("SKIP300") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("SKIP300");
}
const std::string SKIP300::keywordName = "SKIP300";


SKIPREST::SKIPREST( ) : ParserKeyword("SKIPREST") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("SKIPREST");
}
const std::string SKIPREST::keywordName = "SKIPREST";


SLGOF::SLGOF( ) : ParserKeyword("SLGOF") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SLGOF");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SLGOF::keywordName = "SLGOF";
const std::string SLGOF::DATA::itemName = "DATA";


SMRYDIMS::SMRYDIMS( ) : ParserKeyword("SMRYDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("SMRYDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("DIMS", ParserItem::item_size::SINGLE, 10000 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SMRYDIMS::keywordName = "SMRYDIMS";
const std::string SMRYDIMS::DIMS::itemName = "DIMS";
const int SMRYDIMS::DIMS::defaultValue = 10000;


SOF2::SOF2( ) : ParserKeyword("SOF2") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SOF2");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SOF2::keywordName = "SOF2";
const std::string SOF2::DATA::itemName = "DATA";


SOF3::SOF3( ) : ParserKeyword("SOF3") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SOF3");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SOF3::keywordName = "SOF3";
const std::string SOF3::DATA::itemName = "DATA";


SOGCR::SOGCR( ) : ParserKeyword("SOGCR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SOGCR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SOGCR::keywordName = "SOGCR";
const std::string SOGCR::data::itemName = "data";


SOIL::SOIL( ) : ParserKeyword("SOIL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("SOIL");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SOIL::keywordName = "SOIL";
const std::string SOIL::data::itemName = "data";


SOLUTION::SOLUTION( ) : ParserKeyword("SOLUTION") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  clearDeckNames();
  addDeckName("SOLUTION");
}
const std::string SOLUTION::keywordName = "SOLUTION";


SOLVENT::SOLVENT( ) : ParserKeyword("SOLVENT") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("SOLVENT");
}
const std::string SOLVENT::keywordName = "SOLVENT";


SORWMIS::SORWMIS( ) : ParserKeyword("SORWMIS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("MISCIBLE","NTMISC",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SORWMIS");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SORWMIS::keywordName = "SORWMIS";
const std::string SORWMIS::DATA::itemName = "DATA";


SOWCR::SOWCR( ) : ParserKeyword("SOWCR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SOWCR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SOWCR::keywordName = "SOWCR";
const std::string SOWCR::data::itemName = "data";


SPECGRID::SPECGRID( ) : ParserKeyword("SPECGRID") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("SPECGRID");
  {
     ParserRecord record;
     {
        ParserItem item("NX", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NY", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NZ", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NUMRES", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("COORD_TYPE", ParserItem::item_size::SINGLE, "F" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SPECGRID::keywordName = "SPECGRID";
const std::string SPECGRID::NX::itemName = "NX";
const int SPECGRID::NX::defaultValue = 1;
const std::string SPECGRID::NY::itemName = "NY";
const int SPECGRID::NY::defaultValue = 1;
const std::string SPECGRID::NZ::itemName = "NZ";
const int SPECGRID::NZ::defaultValue = 1;
const std::string SPECGRID::NUMRES::itemName = "NUMRES";
const int SPECGRID::NUMRES::defaultValue = 1;
const std::string SPECGRID::COORD_TYPE::itemName = "COORD_TYPE";
const std::string SPECGRID::COORD_TYPE::defaultValue = "F";


SPECHEAT::SPECHEAT( ) : ParserKeyword("SPECHEAT") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SPECHEAT");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        item.push_backDimension("Energy/Mass*AbsoluteTemperature");
        item.push_backDimension("Energy/Mass*AbsoluteTemperature");
        item.push_backDimension("Energy/Mass*AbsoluteTemperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SPECHEAT::keywordName = "SPECHEAT";
const std::string SPECHEAT::DATA::itemName = "DATA";


SPECROCK::SPECROCK( ) : ParserKeyword("SPECROCK") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SPECROCK");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        item.push_backDimension("Energy/Length*Length*Length*AbsoluteTemperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SPECROCK::keywordName = "SPECROCK";
const std::string SPECROCK::DATA::itemName = "DATA";


SPOLY::SPOLY( ) : ParserKeyword("SPOLY") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("SPOLY");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Density");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SPOLY::keywordName = "SPOLY";
const std::string SPOLY::data::itemName = "data";


SSFN::SSFN( ) : ParserKeyword("SSFN") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SSFN");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SSFN::keywordName = "SSFN";
const std::string SSFN::DATA::itemName = "DATA";


SSOL::SSOL( ) : ParserKeyword("SSOL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("SSOL");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SSOL::keywordName = "SSOL";
const std::string SSOL::data::itemName = "data";


START::START( ) : ParserKeyword("START") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("START");
  {
     ParserRecord record;
     {
        ParserItem item("DAY", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MONTH", ParserItem::item_size::SINGLE, "JAN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("YEAR", ParserItem::item_size::SINGLE, 1983 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TIME", ParserItem::item_size::SINGLE, "00:00:00.000" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string START::keywordName = "START";
const std::string START::DAY::itemName = "DAY";
const int START::DAY::defaultValue = 1;
const std::string START::MONTH::itemName = "MONTH";
const std::string START::MONTH::defaultValue = "JAN";
const std::string START::YEAR::itemName = "YEAR";
const int START::YEAR::defaultValue = 1983;
const std::string START::TIME::itemName = "TIME";
const std::string START::TIME::defaultValue = "00:00:00.000";


STCOND::STCOND( ) : ParserKeyword("STCOND") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("STCOND");
  {
     ParserRecord record;
     {
        ParserItem item("TEMPERATURE", ParserItem::item_size::SINGLE, double( 15.56 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        record.addItem(item);
     }
     {
        ParserItem item("PRESSURE", ParserItem::item_size::SINGLE, double( 1.01325 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string STCOND::keywordName = "STCOND";
const std::string STCOND::TEMPERATURE::itemName = "TEMPERATURE";
const double STCOND::TEMPERATURE::defaultValue = 15.560000;
const std::string STCOND::PRESSURE::itemName = "PRESSURE";
const double STCOND::PRESSURE::defaultValue = 1.013250;


STONE1::STONE1( ) : ParserKeyword("STONE1") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("STONE1");
}
const std::string STONE1::keywordName = "STONE1";


STONE1EX::STONE1EX( ) : ParserKeyword("STONE1EX") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("STONE1EX");
  {
     ParserRecord record;
     {
        ParserItem item("EXP_VALUE", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string STONE1EX::keywordName = "STONE1EX";
const std::string STONE1EX::EXP_VALUE::itemName = "EXP_VALUE";
const double STONE1EX::EXP_VALUE::defaultValue = 1.000000;


SUMMARY::SUMMARY( ) : ParserKeyword("SUMMARY") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  clearDeckNames();
  addDeckName("SUMMARY");
}
const std::string SUMMARY::keywordName = "SUMMARY";


SUMTHIN::SUMTHIN( ) : ParserKeyword("SUMTHIN") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("SUMTHIN");
  {
     ParserRecord record;
     {
        ParserItem item("TIME", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Time");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SUMTHIN::keywordName = "SUMTHIN";
const std::string SUMTHIN::TIME::itemName = "TIME";


SWAT::SWAT( ) : ParserKeyword("SWAT") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("SWAT");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SWAT::keywordName = "SWAT";
const std::string SWAT::data::itemName = "data";


SWATINIT::SWATINIT( ) : ParserKeyword("SWATINIT") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SWATINIT");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SWATINIT::keywordName = "SWATINIT";
const std::string SWATINIT::data::itemName = "data";


SWCR::SWCR( ) : ParserKeyword("SWCR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SWCR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SWCR::keywordName = "SWCR";
const std::string SWCR::data::itemName = "data";


SWFN::SWFN( ) : ParserKeyword("SWFN") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SWFN");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SWFN::keywordName = "SWFN";
const std::string SWFN::DATA::itemName = "DATA";


SWL::SWL( ) : ParserKeyword("SWL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SWL");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SWL::keywordName = "SWL";
const std::string SWL::data::itemName = "data";


SWOF::SWOF( ) : ParserKeyword("SWOF") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTSFUN",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SWOF");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("1");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string SWOF::keywordName = "SWOF";
const std::string SWOF::DATA::itemName = "DATA";


SWU::SWU( ) : ParserKeyword("SWU") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("SWU");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string SWU::keywordName = "SWU";
const std::string SWU::data::itemName = "data";


TABDIMS::TABDIMS( ) : ParserKeyword("TABDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("TABDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("NTSFUN", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTPVT", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NSSFUN", ParserItem::item_size::SINGLE, 20 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NPPVT", ParserItem::item_size::SINGLE, 20 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTFIP", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NRPVT", ParserItem::item_size::SINGLE, 20 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_RV_NODES", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTENDP", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NUM_STATE_EQ", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NUM_EOS_RES", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NUM_EOS_SURFACE", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_FLUX_REGIONS", ParserItem::item_size::SINGLE, 10 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_THERMAL_REGIONS", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTROCC", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_PRESSURE_MAINTAINANCE_REGIONS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_KVALUE_TABLES", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTALPHA", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ASPHALTENE_ASPKDAM_MAX_ROWS", ParserItem::item_size::SINGLE, 10 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ASPHALTENE_ASPREWG_MAX_ROWS", ParserItem::item_size::SINGLE, 10 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ASPHALTENE_ASPVISO_MAX_ROWS", ParserItem::item_size::SINGLE, 10 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ITEM20_NOT_USED", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ASPHALTENE_ASPPW2D_MAX_COLUMNS", ParserItem::item_size::SINGLE, 5 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ASPHALTENE_ASPPW2D_MAX_ROWS", ParserItem::item_size::SINGLE, 5 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ASPHALTENE_ASPWETF_MAX_ROWS", ParserItem::item_size::SINGLE, 5 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NUM_KVALUE_TABLES", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("RESERVED", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TABDIMS::keywordName = "TABDIMS";
const std::string TABDIMS::NTSFUN::itemName = "NTSFUN";
const int TABDIMS::NTSFUN::defaultValue = 1;
const std::string TABDIMS::NTPVT::itemName = "NTPVT";
const int TABDIMS::NTPVT::defaultValue = 1;
const std::string TABDIMS::NSSFUN::itemName = "NSSFUN";
const int TABDIMS::NSSFUN::defaultValue = 20;
const std::string TABDIMS::NPPVT::itemName = "NPPVT";
const int TABDIMS::NPPVT::defaultValue = 20;
const std::string TABDIMS::NTFIP::itemName = "NTFIP";
const int TABDIMS::NTFIP::defaultValue = 1;
const std::string TABDIMS::NRPVT::itemName = "NRPVT";
const int TABDIMS::NRPVT::defaultValue = 20;
const std::string TABDIMS::MAX_RV_NODES::itemName = "MAX_RV_NODES";
const std::string TABDIMS::NTENDP::itemName = "NTENDP";
const int TABDIMS::NTENDP::defaultValue = 1;
const std::string TABDIMS::NUM_STATE_EQ::itemName = "NUM_STATE_EQ";
const int TABDIMS::NUM_STATE_EQ::defaultValue = 1;
const std::string TABDIMS::NUM_EOS_RES::itemName = "NUM_EOS_RES";
const int TABDIMS::NUM_EOS_RES::defaultValue = 1;
const std::string TABDIMS::NUM_EOS_SURFACE::itemName = "NUM_EOS_SURFACE";
const std::string TABDIMS::MAX_FLUX_REGIONS::itemName = "MAX_FLUX_REGIONS";
const int TABDIMS::MAX_FLUX_REGIONS::defaultValue = 10;
const std::string TABDIMS::MAX_THERMAL_REGIONS::itemName = "MAX_THERMAL_REGIONS";
const int TABDIMS::MAX_THERMAL_REGIONS::defaultValue = 1;
const std::string TABDIMS::NTROCC::itemName = "NTROCC";
const std::string TABDIMS::MAX_PRESSURE_MAINTAINANCE_REGIONS::itemName = "MAX_PRESSURE_MAINTAINANCE_REGIONS";
const int TABDIMS::MAX_PRESSURE_MAINTAINANCE_REGIONS::defaultValue = 0;
const std::string TABDIMS::MAX_KVALUE_TABLES::itemName = "MAX_KVALUE_TABLES";
const int TABDIMS::MAX_KVALUE_TABLES::defaultValue = 0;
const std::string TABDIMS::NTALPHA::itemName = "NTALPHA";
const std::string TABDIMS::ASPHALTENE_ASPKDAM_MAX_ROWS::itemName = "ASPHALTENE_ASPKDAM_MAX_ROWS";
const int TABDIMS::ASPHALTENE_ASPKDAM_MAX_ROWS::defaultValue = 10;
const std::string TABDIMS::ASPHALTENE_ASPREWG_MAX_ROWS::itemName = "ASPHALTENE_ASPREWG_MAX_ROWS";
const int TABDIMS::ASPHALTENE_ASPREWG_MAX_ROWS::defaultValue = 10;
const std::string TABDIMS::ASPHALTENE_ASPVISO_MAX_ROWS::itemName = "ASPHALTENE_ASPVISO_MAX_ROWS";
const int TABDIMS::ASPHALTENE_ASPVISO_MAX_ROWS::defaultValue = 10;
const std::string TABDIMS::ITEM20_NOT_USED::itemName = "ITEM20_NOT_USED";
const std::string TABDIMS::ASPHALTENE_ASPPW2D_MAX_COLUMNS::itemName = "ASPHALTENE_ASPPW2D_MAX_COLUMNS";
const int TABDIMS::ASPHALTENE_ASPPW2D_MAX_COLUMNS::defaultValue = 5;
const std::string TABDIMS::ASPHALTENE_ASPPW2D_MAX_ROWS::itemName = "ASPHALTENE_ASPPW2D_MAX_ROWS";
const int TABDIMS::ASPHALTENE_ASPPW2D_MAX_ROWS::defaultValue = 5;
const std::string TABDIMS::ASPHALTENE_ASPWETF_MAX_ROWS::itemName = "ASPHALTENE_ASPWETF_MAX_ROWS";
const int TABDIMS::ASPHALTENE_ASPWETF_MAX_ROWS::defaultValue = 5;
const std::string TABDIMS::NUM_KVALUE_TABLES::itemName = "NUM_KVALUE_TABLES";
const int TABDIMS::NUM_KVALUE_TABLES::defaultValue = 0;
const std::string TABDIMS::RESERVED::itemName = "RESERVED";


TEMP::TEMP( ) : ParserKeyword("TEMP") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("TEMP");
}
const std::string TEMP::keywordName = "TEMP";


TEMPI::TEMPI( ) : ParserKeyword("TEMPI") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("TEMPI");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string TEMPI::keywordName = "TEMPI";
const std::string TEMPI::data::itemName = "data";


TEMPVD::TEMPVD( ) : ParserKeyword("TEMPVD") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("EQLDIMS","NTEQUL",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("TEMPVD");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("Temperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TEMPVD::keywordName = "TEMPVD";
const std::string TEMPVD::DATA::itemName = "DATA";


THCGAS::THCGAS( ) : ParserKeyword("THCGAS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("THCGAS");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Energy/AbsoluteTemperature*Length*Time");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string THCGAS::keywordName = "THCGAS";
const std::string THCGAS::data::itemName = "data";


THCOIL::THCOIL( ) : ParserKeyword("THCOIL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("THCOIL");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Energy/AbsoluteTemperature*Length*Time");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string THCOIL::keywordName = "THCOIL";
const std::string THCOIL::data::itemName = "data";


THCONR::THCONR( ) : ParserKeyword("THCONR") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("THCONR");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Energy/AbsoluteTemperature*Length*Time");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string THCONR::keywordName = "THCONR";
const std::string THCONR::data::itemName = "data";


THCONSF::THCONSF( ) : ParserKeyword("THCONSF") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("THCONSF");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string THCONSF::keywordName = "THCONSF";
const std::string THCONSF::data::itemName = "data";


THCROCK::THCROCK( ) : ParserKeyword("THCROCK") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("THCROCK");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Energy/AbsoluteTemperature*Length*Time");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string THCROCK::keywordName = "THCROCK";
const std::string THCROCK::data::itemName = "data";


THCWATER::THCWATER( ) : ParserKeyword("THCWATER") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("THCWATER");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Energy/AbsoluteTemperature*Length*Time");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string THCWATER::keywordName = "THCWATER";
const std::string THCWATER::data::itemName = "data";


THERMAL::THERMAL( ) : ParserKeyword("THERMAL") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("THERMAL");
}
const std::string THERMAL::keywordName = "THERMAL";


THERMEX1::THERMEX1( ) : ParserKeyword("THERMEX1") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("THERMEX1");
  {
     ParserRecord record;
     {
        ParserItem item("EXPANSION_COEFF", ParserItem::item_size::ALL, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/AbsoluteTemperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string THERMEX1::keywordName = "THERMEX1";
const std::string THERMEX1::EXPANSION_COEFF::itemName = "EXPANSION_COEFF";
const double THERMEX1::EXPANSION_COEFF::defaultValue = 0.000000;


THPRES::THPRES( ) : ParserKeyword("THPRES") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("THPRES");
  {
     ParserRecord record;
     {
        ParserItem item("REGION1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("REGION2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VALUE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string THPRES::keywordName = "THPRES";
const std::string THPRES::REGION1::itemName = "REGION1";
const std::string THPRES::REGION2::itemName = "REGION2";
const std::string THPRES::VALUE::itemName = "VALUE";


TITLE::TITLE( ) : ParserKeyword("TITLE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("TITLE");
  {
     ParserRecord record;
     {
        ParserItem item("TitleText", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TITLE::keywordName = "TITLE";
const std::string TITLE::TitleText::itemName = "TitleText";


TLMIXPAR::TLMIXPAR( ) : ParserKeyword("TLMIXPAR") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("MISCIBLE","NTMISC",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("TLMIXPAR");
  {
     ParserRecord record;
     {
        ParserItem item("TL_VISCOSITY_PARAMETER", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     {
        ParserItem item("TL_DENSITY_PARAMETER", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TLMIXPAR::keywordName = "TLMIXPAR";
const std::string TLMIXPAR::TL_VISCOSITY_PARAMETER::itemName = "TL_VISCOSITY_PARAMETER";
const std::string TLMIXPAR::TL_DENSITY_PARAMETER::itemName = "TL_DENSITY_PARAMETER";


TLPMIXPA::TLPMIXPA( ) : ParserKeyword("TLPMIXPA") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("MISCIBLE","NTMISC",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("TLPMIXPA");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TLPMIXPA::keywordName = "TLPMIXPA";
const std::string TLPMIXPA::DATA::itemName = "DATA";


TNUM::TNUM( ) : ParserKeyword("TNUM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("REGIONS");
  clearDeckNames();
  setMatchRegex("TNUM(F|S).{1,3}");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( int() );
        item.setDescription("");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string TNUM::keywordName = "TNUM";
const std::string TNUM::data::itemName = "data";


TOPS::TOPS( ) : ParserKeyword("TOPS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("TOPS");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string TOPS::keywordName = "TOPS";
const std::string TOPS::data::itemName = "data";


TRACER::TRACER( ) : ParserKeyword("TRACER") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("TRACER");
  {
     ParserRecord record;
     {
        ParserItem item("NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FLUID", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("UNIT", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SOLUTION_PHASE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NUM_PART_TABLE", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ADSORB_PHASE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TRACER::keywordName = "TRACER";
const std::string TRACER::NAME::itemName = "NAME";
const std::string TRACER::FLUID::itemName = "FLUID";
const std::string TRACER::UNIT::itemName = "UNIT";
const std::string TRACER::SOLUTION_PHASE::itemName = "SOLUTION_PHASE";
const std::string TRACER::NUM_PART_TABLE::itemName = "NUM_PART_TABLE";
const std::string TRACER::ADSORB_PHASE::itemName = "ADSORB_PHASE";


TRACERS::TRACERS( ) : ParserKeyword("TRACERS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("TRACERS");
  {
     ParserRecord record;
     {
        ParserItem item("MAX_OIL_TRACERS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WATER_TRACERS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_GAS_TRACERS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ENV_TRACERS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NUMERIC_DIFF", ParserItem::item_size::SINGLE, "NODIFF" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ITER", ParserItem::item_size::SINGLE, 12 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_ITER", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PASSIVE_NONLINEAR", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ONEOFF_LIN_TIGHT", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ONEOFF_NLIN_TIGHT", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TIGHTENING_FACTORS", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NTIGHTFACTORS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TRACERS::keywordName = "TRACERS";
const std::string TRACERS::MAX_OIL_TRACERS::itemName = "MAX_OIL_TRACERS";
const int TRACERS::MAX_OIL_TRACERS::defaultValue = 0;
const std::string TRACERS::MAX_WATER_TRACERS::itemName = "MAX_WATER_TRACERS";
const int TRACERS::MAX_WATER_TRACERS::defaultValue = 0;
const std::string TRACERS::MAX_GAS_TRACERS::itemName = "MAX_GAS_TRACERS";
const int TRACERS::MAX_GAS_TRACERS::defaultValue = 0;
const std::string TRACERS::MAX_ENV_TRACERS::itemName = "MAX_ENV_TRACERS";
const int TRACERS::MAX_ENV_TRACERS::defaultValue = 0;
const std::string TRACERS::NUMERIC_DIFF::itemName = "NUMERIC_DIFF";
const std::string TRACERS::NUMERIC_DIFF::defaultValue = "NODIFF";
const std::string TRACERS::MAX_ITER::itemName = "MAX_ITER";
const int TRACERS::MAX_ITER::defaultValue = 12;
const std::string TRACERS::MIN_ITER::itemName = "MIN_ITER";
const int TRACERS::MIN_ITER::defaultValue = 1;
const std::string TRACERS::PASSIVE_NONLINEAR::itemName = "PASSIVE_NONLINEAR";
const std::string TRACERS::PASSIVE_NONLINEAR::defaultValue = "NO";
const std::string TRACERS::ONEOFF_LIN_TIGHT::itemName = "ONEOFF_LIN_TIGHT";
const std::string TRACERS::ONEOFF_NLIN_TIGHT::itemName = "ONEOFF_NLIN_TIGHT";
const std::string TRACERS::TIGHTENING_FACTORS::itemName = "TIGHTENING_FACTORS";
const double TRACERS::TIGHTENING_FACTORS::defaultValue = 1.000000;
const std::string TRACERS::NTIGHTFACTORS::itemName = "NTIGHTFACTORS";
const int TRACERS::NTIGHTFACTORS::defaultValue = 0;


TRANX::TRANX( ) : ParserKeyword("TRANX") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  clearDeckNames();
  addDeckName("TRANX");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Transmissibility");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string TRANX::keywordName = "TRANX";
const std::string TRANX::data::itemName = "data";


TRANY::TRANY( ) : ParserKeyword("TRANY") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  clearDeckNames();
  addDeckName("TRANY");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Transmissibility");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string TRANY::keywordName = "TRANY";
const std::string TRANY::data::itemName = "data";


TRANZ::TRANZ( ) : ParserKeyword("TRANZ") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  clearDeckNames();
  addDeckName("TRANZ");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Transmissibility");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string TRANZ::keywordName = "TRANZ";
const std::string TRANZ::data::itemName = "data";


TREF::TREF( ) : ParserKeyword("TREF") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("TREF");
  {
     ParserRecord record;
     {
        ParserItem item("TEMPERATURE", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("AbsoluteTemperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TREF::keywordName = "TREF";
const std::string TREF::TEMPERATURE::itemName = "TEMPERATURE";


TREFS::TREFS( ) : ParserKeyword("TREFS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("TREFS");
  {
     ParserRecord record;
     {
        ParserItem item("TEMPERATURE", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("AbsoluteTemperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TREFS::keywordName = "TREFS";
const std::string TREFS::TEMPERATURE::itemName = "TEMPERATURE";


TSTEP::TSTEP( ) : ParserKeyword("TSTEP") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("TSTEP");
  {
     ParserRecord record;
     {
        ParserItem item("step_list", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Timestep");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TSTEP::keywordName = "TSTEP";
const std::string TSTEP::step_list::itemName = "step_list";


TUNING::TUNING( ) : ParserKeyword("TUNING") {
  setFixedSize( (size_t) 3);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("TUNING");
  {
     ParserRecord record;
     {
        ParserItem item("TSINIT", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Time");
        record.addItem(item);
     }
     {
        ParserItem item("TSMAXZ", ParserItem::item_size::SINGLE, double( 365 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Time");
        record.addItem(item);
     }
     {
        ParserItem item("TSMINZ", ParserItem::item_size::SINGLE, double( 0.10000000000000001 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Time");
        record.addItem(item);
     }
     {
        ParserItem item("TSMCHP", ParserItem::item_size::SINGLE, double( 0.14999999999999999 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Time");
        record.addItem(item);
     }
     {
        ParserItem item("TSFMAX", ParserItem::item_size::SINGLE, double( 3 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TSFMIN", ParserItem::item_size::SINGLE, double( 0.30000000000000004 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TSFCNV", ParserItem::item_size::SINGLE, double( 0.10000000000000001 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TFDIFF", ParserItem::item_size::SINGLE, double( 1.25 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("THRUPT", ParserItem::item_size::SINGLE, double( 1e+20 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TMAXWC", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Time");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("TRGTTE", ParserItem::item_size::SINGLE, double( 0.10000000000000001 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRGCNV", ParserItem::item_size::SINGLE, double( 0.001 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRGMBE", ParserItem::item_size::SINGLE, double( 9.9999999999999995e-08 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRGLCV", ParserItem::item_size::SINGLE, double( 0.0001 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("XXXTTE", ParserItem::item_size::SINGLE, double( 10 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("XXXCNV", ParserItem::item_size::SINGLE, double( 0.01 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("XXXMBE", ParserItem::item_size::SINGLE, double( 9.9999999999999995e-07 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("XXXLCV", ParserItem::item_size::SINGLE, double( 0.001 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("XXXWFL", ParserItem::item_size::SINGLE, double( 0.001 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRGFIP", ParserItem::item_size::SINGLE, double( 0.025000000000000001 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRGSFT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("THIONX", ParserItem::item_size::SINGLE, double( 0.01 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRWGHT", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("NEWTMX", ParserItem::item_size::SINGLE, 12 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NEWTMN", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("LITMAX", ParserItem::item_size::SINGLE, 25 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("LITMIN", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MXWSIT", ParserItem::item_size::SINGLE, 8 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MXWPIT", ParserItem::item_size::SINGLE, 8 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DDPLIM", ParserItem::item_size::SINGLE, double( 1000000 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("DDSLIM", ParserItem::item_size::SINGLE, double( 1000000 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRGDPR", ParserItem::item_size::SINGLE, double( 1000000 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("XXXDPR", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TUNING::keywordName = "TUNING";
const std::string TUNING::TSINIT::itemName = "TSINIT";
const double TUNING::TSINIT::defaultValue = 1.000000;
const std::string TUNING::TSMAXZ::itemName = "TSMAXZ";
const double TUNING::TSMAXZ::defaultValue = 365.000000;
const std::string TUNING::TSMINZ::itemName = "TSMINZ";
const double TUNING::TSMINZ::defaultValue = 0.100000;
const std::string TUNING::TSMCHP::itemName = "TSMCHP";
const double TUNING::TSMCHP::defaultValue = 0.150000;
const std::string TUNING::TSFMAX::itemName = "TSFMAX";
const double TUNING::TSFMAX::defaultValue = 3.000000;
const std::string TUNING::TSFMIN::itemName = "TSFMIN";
const double TUNING::TSFMIN::defaultValue = 0.300000;
const std::string TUNING::TSFCNV::itemName = "TSFCNV";
const double TUNING::TSFCNV::defaultValue = 0.100000;
const std::string TUNING::TFDIFF::itemName = "TFDIFF";
const double TUNING::TFDIFF::defaultValue = 1.250000;
const std::string TUNING::THRUPT::itemName = "THRUPT";
const double TUNING::THRUPT::defaultValue = 100000000000000000000.000000;
const std::string TUNING::TMAXWC::itemName = "TMAXWC";
const std::string TUNING::TRGTTE::itemName = "TRGTTE";
const double TUNING::TRGTTE::defaultValue = 0.100000;
const std::string TUNING::TRGCNV::itemName = "TRGCNV";
const double TUNING::TRGCNV::defaultValue = 0.001000;
const std::string TUNING::TRGMBE::itemName = "TRGMBE";
const double TUNING::TRGMBE::defaultValue = 0.000000;
const std::string TUNING::TRGLCV::itemName = "TRGLCV";
const double TUNING::TRGLCV::defaultValue = 0.000100;
const std::string TUNING::XXXTTE::itemName = "XXXTTE";
const double TUNING::XXXTTE::defaultValue = 10.000000;
const std::string TUNING::XXXCNV::itemName = "XXXCNV";
const double TUNING::XXXCNV::defaultValue = 0.010000;
const std::string TUNING::XXXMBE::itemName = "XXXMBE";
const double TUNING::XXXMBE::defaultValue = 0.000001;
const std::string TUNING::XXXLCV::itemName = "XXXLCV";
const double TUNING::XXXLCV::defaultValue = 0.001000;
const std::string TUNING::XXXWFL::itemName = "XXXWFL";
const double TUNING::XXXWFL::defaultValue = 0.001000;
const std::string TUNING::TRGFIP::itemName = "TRGFIP";
const double TUNING::TRGFIP::defaultValue = 0.025000;
const std::string TUNING::TRGSFT::itemName = "TRGSFT";
const std::string TUNING::THIONX::itemName = "THIONX";
const double TUNING::THIONX::defaultValue = 0.010000;
const std::string TUNING::TRWGHT::itemName = "TRWGHT";
const int TUNING::TRWGHT::defaultValue = 1;
const std::string TUNING::NEWTMX::itemName = "NEWTMX";
const int TUNING::NEWTMX::defaultValue = 12;
const std::string TUNING::NEWTMN::itemName = "NEWTMN";
const int TUNING::NEWTMN::defaultValue = 1;
const std::string TUNING::LITMAX::itemName = "LITMAX";
const int TUNING::LITMAX::defaultValue = 25;
const std::string TUNING::LITMIN::itemName = "LITMIN";
const int TUNING::LITMIN::defaultValue = 1;
const std::string TUNING::MXWSIT::itemName = "MXWSIT";
const int TUNING::MXWSIT::defaultValue = 8;
const std::string TUNING::MXWPIT::itemName = "MXWPIT";
const int TUNING::MXWPIT::defaultValue = 8;
const std::string TUNING::DDPLIM::itemName = "DDPLIM";
const double TUNING::DDPLIM::defaultValue = 1000000.000000;
const std::string TUNING::DDSLIM::itemName = "DDSLIM";
const double TUNING::DDSLIM::defaultValue = 1000000.000000;
const std::string TUNING::TRGDPR::itemName = "TRGDPR";
const double TUNING::TRGDPR::defaultValue = 1000000.000000;
const std::string TUNING::XXXDPR::itemName = "XXXDPR";


TUNINGDP::TUNINGDP( ) : ParserKeyword("TUNINGDP") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("TUNINGDP");
  {
     ParserRecord record;
     {
        ParserItem item("TRGLCV", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("XXXLCV", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRGDDP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRGDDS", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TUNINGDP::keywordName = "TUNINGDP";
const std::string TUNINGDP::TRGLCV::itemName = "TRGLCV";
const std::string TUNINGDP::XXXLCV::itemName = "XXXLCV";
const std::string TUNINGDP::TRGDDP::itemName = "TRGDDP";
const std::string TUNINGDP::TRGDDS::itemName = "TRGDDS";


TVDP::TVDP( ) : ParserKeyword("TVDP") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("EQLDIMS","NTTRVD",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SOLUTION");
  clearDeckNames();
  setMatchRegex("TVDP.+");
  {
     ParserRecord record;
     {
        ParserItem item("table", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        item.push_backDimension("ContextDependent");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string TVDP::keywordName = "TVDP";
const std::string TVDP::table::itemName = "table";


UDADIMS::UDADIMS( ) : ParserKeyword("UDADIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("UDADIMS");
  {
     ParserRecord record;
     {
        ParserItem item("NUM_UDQ_REPLACE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("IGNORED", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TOTAL_UDQ_UNIQUE", ParserItem::item_size::SINGLE, 100 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string UDADIMS::keywordName = "UDADIMS";
const std::string UDADIMS::NUM_UDQ_REPLACE::itemName = "NUM_UDQ_REPLACE";
const int UDADIMS::NUM_UDQ_REPLACE::defaultValue = 0;
const std::string UDADIMS::IGNORED::itemName = "IGNORED";
const int UDADIMS::IGNORED::defaultValue = 0;
const std::string UDADIMS::TOTAL_UDQ_UNIQUE::itemName = "TOTAL_UDQ_UNIQUE";
const int UDADIMS::TOTAL_UDQ_UNIQUE::defaultValue = 100;


UDQDIMS::UDQDIMS( ) : ParserKeyword("UDQDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("UDQDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("MAX_FUNCTIONS", ParserItem::item_size::SINGLE, 16 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ITEMS", ParserItem::item_size::SINGLE, 16 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_CONNECTIONS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_FIELDS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_GROUP", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_REGION", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_SEGMENT", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WELL", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_AQUIFER", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_BLOCK", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("RESTART_NEW_SEED", ParserItem::item_size::SINGLE, "N" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string UDQDIMS::keywordName = "UDQDIMS";
const std::string UDQDIMS::MAX_FUNCTIONS::itemName = "MAX_FUNCTIONS";
const int UDQDIMS::MAX_FUNCTIONS::defaultValue = 16;
const std::string UDQDIMS::MAX_ITEMS::itemName = "MAX_ITEMS";
const int UDQDIMS::MAX_ITEMS::defaultValue = 16;
const std::string UDQDIMS::MAX_CONNECTIONS::itemName = "MAX_CONNECTIONS";
const int UDQDIMS::MAX_CONNECTIONS::defaultValue = 0;
const std::string UDQDIMS::MAX_FIELDS::itemName = "MAX_FIELDS";
const int UDQDIMS::MAX_FIELDS::defaultValue = 0;
const std::string UDQDIMS::MAX_GROUP::itemName = "MAX_GROUP";
const int UDQDIMS::MAX_GROUP::defaultValue = 0;
const std::string UDQDIMS::MAX_REGION::itemName = "MAX_REGION";
const int UDQDIMS::MAX_REGION::defaultValue = 0;
const std::string UDQDIMS::MAX_SEGMENT::itemName = "MAX_SEGMENT";
const int UDQDIMS::MAX_SEGMENT::defaultValue = 0;
const std::string UDQDIMS::MAX_WELL::itemName = "MAX_WELL";
const int UDQDIMS::MAX_WELL::defaultValue = 0;
const std::string UDQDIMS::MAX_AQUIFER::itemName = "MAX_AQUIFER";
const int UDQDIMS::MAX_AQUIFER::defaultValue = 0;
const std::string UDQDIMS::MAX_BLOCK::itemName = "MAX_BLOCK";
const int UDQDIMS::MAX_BLOCK::defaultValue = 0;
const std::string UDQDIMS::RESTART_NEW_SEED::itemName = "RESTART_NEW_SEED";
const std::string UDQDIMS::RESTART_NEW_SEED::defaultValue = "N";


UNIFIN::UNIFIN( ) : ParserKeyword("UNIFIN") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("UNIFIN");
}
const std::string UNIFIN::keywordName = "UNIFIN";


UNIFOUT::UNIFOUT( ) : ParserKeyword("UNIFOUT") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("UNIFOUT");
}
const std::string UNIFOUT::keywordName = "UNIFOUT";


VAPOIL::VAPOIL( ) : ParserKeyword("VAPOIL") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("VAPOIL");
}
const std::string VAPOIL::keywordName = "VAPOIL";


VAPPARS::VAPPARS( ) : ParserKeyword("VAPPARS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  clearDeckNames();
  addDeckName("VAPPARS");
  {
     ParserRecord record;
     {
        ParserItem item("OIL_VAP_PROPENSITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OIL_DENSITY_PROPENSITY", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string VAPPARS::keywordName = "VAPPARS";
const std::string VAPPARS::OIL_VAP_PROPENSITY::itemName = "OIL_VAP_PROPENSITY";
const std::string VAPPARS::OIL_DENSITY_PROPENSITY::itemName = "OIL_DENSITY_PROPENSITY";


VFPIDIMS::VFPIDIMS( ) : ParserKeyword("VFPIDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("VFPIDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("MAX_FLOW_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_THP_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_INJ_VFP_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string VFPIDIMS::keywordName = "VFPIDIMS";
const std::string VFPIDIMS::MAX_FLOW_TABLE::itemName = "MAX_FLOW_TABLE";
const int VFPIDIMS::MAX_FLOW_TABLE::defaultValue = 0;
const std::string VFPIDIMS::MAX_THP_TABLE::itemName = "MAX_THP_TABLE";
const int VFPIDIMS::MAX_THP_TABLE::defaultValue = 0;
const std::string VFPIDIMS::MAX_INJ_VFP_TABLE::itemName = "MAX_INJ_VFP_TABLE";
const int VFPIDIMS::MAX_INJ_VFP_TABLE::defaultValue = 0;


VFPINJ::VFPINJ( ) : ParserKeyword("VFPINJ") {
  setSizeType(UNKNOWN);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("VFPINJ");
  {
     ParserRecord record;
     {
        ParserItem item("TABLE", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DATUM_DEPTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("RATE_TYPE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PRESSURE_DEF", ParserItem::item_size::SINGLE, "THP" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("UNITS", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("BODY_DEF", ParserItem::item_size::SINGLE, "BHP" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("FLOW_VALUES", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("THP_VALUES", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("THP_INDEX", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VALUES", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string VFPINJ::keywordName = "VFPINJ";
const std::string VFPINJ::TABLE::itemName = "TABLE";
const std::string VFPINJ::DATUM_DEPTH::itemName = "DATUM_DEPTH";
const std::string VFPINJ::RATE_TYPE::itemName = "RATE_TYPE";
const std::string VFPINJ::PRESSURE_DEF::itemName = "PRESSURE_DEF";
const std::string VFPINJ::PRESSURE_DEF::defaultValue = "THP";
const std::string VFPINJ::UNITS::itemName = "UNITS";
const std::string VFPINJ::BODY_DEF::itemName = "BODY_DEF";
const std::string VFPINJ::BODY_DEF::defaultValue = "BHP";
const std::string VFPINJ::FLOW_VALUES::itemName = "FLOW_VALUES";
const std::string VFPINJ::THP_VALUES::itemName = "THP_VALUES";
const std::string VFPINJ::THP_INDEX::itemName = "THP_INDEX";
const std::string VFPINJ::VALUES::itemName = "VALUES";


VFPPDIMS::VFPPDIMS( ) : ParserKeyword("VFPPDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("VFPPDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("MAX_FLOW_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_THP_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WCT_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_GCT_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_ALQ_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_PROD_VFP_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string VFPPDIMS::keywordName = "VFPPDIMS";
const std::string VFPPDIMS::MAX_FLOW_TABLE::itemName = "MAX_FLOW_TABLE";
const int VFPPDIMS::MAX_FLOW_TABLE::defaultValue = 0;
const std::string VFPPDIMS::MAX_THP_TABLE::itemName = "MAX_THP_TABLE";
const int VFPPDIMS::MAX_THP_TABLE::defaultValue = 0;
const std::string VFPPDIMS::MAX_WCT_TABLE::itemName = "MAX_WCT_TABLE";
const int VFPPDIMS::MAX_WCT_TABLE::defaultValue = 0;
const std::string VFPPDIMS::MAX_GCT_TABLE::itemName = "MAX_GCT_TABLE";
const int VFPPDIMS::MAX_GCT_TABLE::defaultValue = 0;
const std::string VFPPDIMS::MAX_ALQ_TABLE::itemName = "MAX_ALQ_TABLE";
const int VFPPDIMS::MAX_ALQ_TABLE::defaultValue = 0;
const std::string VFPPDIMS::MAX_PROD_VFP_TABLE::itemName = "MAX_PROD_VFP_TABLE";
const int VFPPDIMS::MAX_PROD_VFP_TABLE::defaultValue = 0;


VFPPROD::VFPPROD( ) : ParserKeyword("VFPPROD") {
  setSizeType(UNKNOWN);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("VFPPROD");
  {
     ParserRecord record;
     {
        ParserItem item("TABLE", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DATUM_DEPTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("RATE_TYPE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WFR", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GFR", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PRESSURE_DEF", ParserItem::item_size::SINGLE, "THP" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ALQ_DEF", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("UNITS", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("BODY_DEF", ParserItem::item_size::SINGLE, "BHP" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("FLOW_VALUES", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("THP_VALUES", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("WFR_VALUES", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("GFR_VALUES", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("ALQ_VALUES", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("THP_INDEX", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WFR_INDEX", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GFR_INDEX", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ALQ_INDEX", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VALUES", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string VFPPROD::keywordName = "VFPPROD";
const std::string VFPPROD::TABLE::itemName = "TABLE";
const std::string VFPPROD::DATUM_DEPTH::itemName = "DATUM_DEPTH";
const std::string VFPPROD::RATE_TYPE::itemName = "RATE_TYPE";
const std::string VFPPROD::WFR::itemName = "WFR";
const std::string VFPPROD::GFR::itemName = "GFR";
const std::string VFPPROD::PRESSURE_DEF::itemName = "PRESSURE_DEF";
const std::string VFPPROD::PRESSURE_DEF::defaultValue = "THP";
const std::string VFPPROD::ALQ_DEF::itemName = "ALQ_DEF";
const std::string VFPPROD::UNITS::itemName = "UNITS";
const std::string VFPPROD::BODY_DEF::itemName = "BODY_DEF";
const std::string VFPPROD::BODY_DEF::defaultValue = "BHP";
const std::string VFPPROD::FLOW_VALUES::itemName = "FLOW_VALUES";
const std::string VFPPROD::THP_VALUES::itemName = "THP_VALUES";
const std::string VFPPROD::WFR_VALUES::itemName = "WFR_VALUES";
const std::string VFPPROD::GFR_VALUES::itemName = "GFR_VALUES";
const std::string VFPPROD::ALQ_VALUES::itemName = "ALQ_VALUES";
const std::string VFPPROD::THP_INDEX::itemName = "THP_INDEX";
const std::string VFPPROD::WFR_INDEX::itemName = "WFR_INDEX";
const std::string VFPPROD::GFR_INDEX::itemName = "GFR_INDEX";
const std::string VFPPROD::ALQ_INDEX::itemName = "ALQ_INDEX";
const std::string VFPPROD::VALUES::itemName = "VALUES";


VISCREF::VISCREF( ) : ParserKeyword("VISCREF") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("VISCREF");
  {
     ParserRecord record;
     {
        ParserItem item("REFERENCE_PRESSURE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("REFERENCE_RS", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("GasDissolutionFactor");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string VISCREF::keywordName = "VISCREF";
const std::string VISCREF::REFERENCE_PRESSURE::itemName = "REFERENCE_PRESSURE";
const std::string VISCREF::REFERENCE_RS::itemName = "REFERENCE_RS";


WARN::WARN( ) : ParserKeyword("WARN") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("EDIT");
  addValidSectionName("GRID");
  addValidSectionName("PROPS");
  addValidSectionName("REGIONS");
  addValidSectionName("RUNSPEC");
  addValidSectionName("SCHEDULE");
  addValidSectionName("SOLUTION");
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("WARN");
}
const std::string WARN::keywordName = "WARN";


WATDENT::WATDENT( ) : ParserKeyword("WATDENT") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("WATDENT");
  {
     ParserRecord record;
     {
        ParserItem item("REFERENCE_TEMPERATURE", ParserItem::item_size::SINGLE, double( 293.15000000000003 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("AbsoluteTemperature");
        record.addItem(item);
     }
     {
        ParserItem item("EXPANSION_COEFF_LINEAR", ParserItem::item_size::SINGLE, double( 0.00030000000000000003 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/AbsoluteTemperature");
        record.addItem(item);
     }
     {
        ParserItem item("EXPANSION_COEFF_QUADRATIC", ParserItem::item_size::SINGLE, double( 3.0000000000000001e-06 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1/AbsoluteTemperature*AbsoluteTemperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WATDENT::keywordName = "WATDENT";
const std::string WATDENT::REFERENCE_TEMPERATURE::itemName = "REFERENCE_TEMPERATURE";
const double WATDENT::REFERENCE_TEMPERATURE::defaultValue = 293.150000;
const std::string WATDENT::EXPANSION_COEFF_LINEAR::itemName = "EXPANSION_COEFF_LINEAR";
const double WATDENT::EXPANSION_COEFF_LINEAR::defaultValue = 0.000300;
const std::string WATDENT::EXPANSION_COEFF_QUADRATIC::itemName = "EXPANSION_COEFF_QUADRATIC";
const double WATDENT::EXPANSION_COEFF_QUADRATIC::defaultValue = 0.000003;


WATER::WATER( ) : ParserKeyword("WATER") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("WATER");
}
const std::string WATER::keywordName = "WATER";


WATVISCT::WATVISCT( ) : ParserKeyword("WATVISCT") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NTPVT",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("WATVISCT");
  {
     ParserRecord record;
     {
        ParserItem item("DATA", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        item.push_backDimension("Viscosity");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WATVISCT::keywordName = "WATVISCT";
const std::string WATVISCT::DATA::itemName = "DATA";


WCONHIST::WCONHIST( ) : ParserKeyword("WCONHIST") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WCONHIST");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("STATUS", ParserItem::item_size::SINGLE, "OPEN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CMODE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ORAT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("WRAT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("GRAT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("GasSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("VFPTable", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("Lift", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("THP", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("BHP", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("NGLRAT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WCONHIST::keywordName = "WCONHIST";
const std::string WCONHIST::WELL::itemName = "WELL";
const std::string WCONHIST::STATUS::itemName = "STATUS";
const std::string WCONHIST::STATUS::defaultValue = "OPEN";
const std::string WCONHIST::CMODE::itemName = "CMODE";
const std::string WCONHIST::ORAT::itemName = "ORAT";
const double WCONHIST::ORAT::defaultValue = 0.000000;
const std::string WCONHIST::WRAT::itemName = "WRAT";
const double WCONHIST::WRAT::defaultValue = 0.000000;
const std::string WCONHIST::GRAT::itemName = "GRAT";
const double WCONHIST::GRAT::defaultValue = 0.000000;
const std::string WCONHIST::VFPTable::itemName = "VFPTable";
const int WCONHIST::VFPTable::defaultValue = 0;
const std::string WCONHIST::Lift::itemName = "Lift";
const double WCONHIST::Lift::defaultValue = 0.000000;
const std::string WCONHIST::THP::itemName = "THP";
const double WCONHIST::THP::defaultValue = 0.000000;
const std::string WCONHIST::BHP::itemName = "BHP";
const double WCONHIST::BHP::defaultValue = 0.000000;
const std::string WCONHIST::NGLRAT::itemName = "NGLRAT";
const double WCONHIST::NGLRAT::defaultValue = 0.000000;


WCONINJ::WCONINJ( ) : ParserKeyword("WCONINJ") {
  setFixedSize( (size_t) 0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WCONINJ");
}
const std::string WCONINJ::keywordName = "WCONINJ";


WCONINJE::WCONINJE( ) : ParserKeyword("WCONINJE") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WCONINJE");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TYPE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("STATUS", ParserItem::item_size::SINGLE, "OPEN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CMODE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("RATE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ContextDependent");
        record.addItem(item);
     }
     {
        ParserItem item("RESV", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ReservoirVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("BHP", ParserItem::item_size::SINGLE, double( 6895 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("THP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("VFP_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VAPOIL_C", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GAS_STEAM_RATIO", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SURFACE_OIL_FRACTION", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SURFACE_GAS_FRACTION", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OIL_STEAM_RATIO", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WCONINJE::keywordName = "WCONINJE";
const std::string WCONINJE::WELL::itemName = "WELL";
const std::string WCONINJE::TYPE::itemName = "TYPE";
const std::string WCONINJE::STATUS::itemName = "STATUS";
const std::string WCONINJE::STATUS::defaultValue = "OPEN";
const std::string WCONINJE::CMODE::itemName = "CMODE";
const std::string WCONINJE::RATE::itemName = "RATE";
const std::string WCONINJE::RESV::itemName = "RESV";
const std::string WCONINJE::BHP::itemName = "BHP";
const double WCONINJE::BHP::defaultValue = 6895.000000;
const std::string WCONINJE::THP::itemName = "THP";
const std::string WCONINJE::VFP_TABLE::itemName = "VFP_TABLE";
const int WCONINJE::VFP_TABLE::defaultValue = 0;
const std::string WCONINJE::VAPOIL_C::itemName = "VAPOIL_C";
const double WCONINJE::VAPOIL_C::defaultValue = 0.000000;
const std::string WCONINJE::GAS_STEAM_RATIO::itemName = "GAS_STEAM_RATIO";
const double WCONINJE::GAS_STEAM_RATIO::defaultValue = 0.000000;
const std::string WCONINJE::SURFACE_OIL_FRACTION::itemName = "SURFACE_OIL_FRACTION";
const double WCONINJE::SURFACE_OIL_FRACTION::defaultValue = 0.000000;
const std::string WCONINJE::SURFACE_GAS_FRACTION::itemName = "SURFACE_GAS_FRACTION";
const double WCONINJE::SURFACE_GAS_FRACTION::defaultValue = 0.000000;
const std::string WCONINJE::OIL_STEAM_RATIO::itemName = "OIL_STEAM_RATIO";
const double WCONINJE::OIL_STEAM_RATIO::defaultValue = 0.000000;


WCONINJH::WCONINJH( ) : ParserKeyword("WCONINJH") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WCONINJH");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TYPE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("STATUS", ParserItem::item_size::SINGLE, "OPEN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("RATE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ContextDependent");
        record.addItem(item);
     }
     {
        ParserItem item("BHP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("THP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("VFP_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("VAPOIL_C", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SURFACE_OIL_FRACTION", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SURFACE_WATER_FRACTION", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SURFACE_GAS_FRACTION", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CMODE", ParserItem::item_size::SINGLE, "RATE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WCONINJH::keywordName = "WCONINJH";
const std::string WCONINJH::WELL::itemName = "WELL";
const std::string WCONINJH::TYPE::itemName = "TYPE";
const std::string WCONINJH::STATUS::itemName = "STATUS";
const std::string WCONINJH::STATUS::defaultValue = "OPEN";
const std::string WCONINJH::RATE::itemName = "RATE";
const std::string WCONINJH::BHP::itemName = "BHP";
const std::string WCONINJH::THP::itemName = "THP";
const std::string WCONINJH::VFP_TABLE::itemName = "VFP_TABLE";
const int WCONINJH::VFP_TABLE::defaultValue = 0;
const std::string WCONINJH::VAPOIL_C::itemName = "VAPOIL_C";
const double WCONINJH::VAPOIL_C::defaultValue = 0.000000;
const std::string WCONINJH::SURFACE_OIL_FRACTION::itemName = "SURFACE_OIL_FRACTION";
const double WCONINJH::SURFACE_OIL_FRACTION::defaultValue = 0.000000;
const std::string WCONINJH::SURFACE_WATER_FRACTION::itemName = "SURFACE_WATER_FRACTION";
const double WCONINJH::SURFACE_WATER_FRACTION::defaultValue = 0.000000;
const std::string WCONINJH::SURFACE_GAS_FRACTION::itemName = "SURFACE_GAS_FRACTION";
const double WCONINJH::SURFACE_GAS_FRACTION::defaultValue = 0.000000;
const std::string WCONINJH::CMODE::itemName = "CMODE";
const std::string WCONINJH::CMODE::defaultValue = "RATE";


WCONPROD::WCONPROD( ) : ParserKeyword("WCONPROD") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WCONPROD");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("STATUS", ParserItem::item_size::SINGLE, "OPEN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CMODE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ORAT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("WRAT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("GRAT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("GasSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("LRAT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("RESV", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("BHP", ParserItem::item_size::SINGLE, double( 1.01325 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("THP", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("VFP_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ALQ", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("E300_ITEM13", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("E300_ITEM14", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("E300_ITEM15", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("E300_ITEM16", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("E300_ITEM17", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("E300_ITEM18", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("E300_ITEM19", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("E300_ITEM20", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WCONPROD::keywordName = "WCONPROD";
const std::string WCONPROD::WELL::itemName = "WELL";
const std::string WCONPROD::STATUS::itemName = "STATUS";
const std::string WCONPROD::STATUS::defaultValue = "OPEN";
const std::string WCONPROD::CMODE::itemName = "CMODE";
const std::string WCONPROD::ORAT::itemName = "ORAT";
const double WCONPROD::ORAT::defaultValue = 0.000000;
const std::string WCONPROD::WRAT::itemName = "WRAT";
const double WCONPROD::WRAT::defaultValue = 0.000000;
const std::string WCONPROD::GRAT::itemName = "GRAT";
const double WCONPROD::GRAT::defaultValue = 0.000000;
const std::string WCONPROD::LRAT::itemName = "LRAT";
const double WCONPROD::LRAT::defaultValue = 0.000000;
const std::string WCONPROD::RESV::itemName = "RESV";
const double WCONPROD::RESV::defaultValue = 0.000000;
const std::string WCONPROD::BHP::itemName = "BHP";
const double WCONPROD::BHP::defaultValue = 1.013250;
const std::string WCONPROD::THP::itemName = "THP";
const double WCONPROD::THP::defaultValue = 0.000000;
const std::string WCONPROD::VFP_TABLE::itemName = "VFP_TABLE";
const int WCONPROD::VFP_TABLE::defaultValue = 0;
const std::string WCONPROD::ALQ::itemName = "ALQ";
const double WCONPROD::ALQ::defaultValue = 0.000000;
const std::string WCONPROD::E300_ITEM13::itemName = "E300_ITEM13";
const std::string WCONPROD::E300_ITEM14::itemName = "E300_ITEM14";
const std::string WCONPROD::E300_ITEM15::itemName = "E300_ITEM15";
const std::string WCONPROD::E300_ITEM16::itemName = "E300_ITEM16";
const std::string WCONPROD::E300_ITEM17::itemName = "E300_ITEM17";
const std::string WCONPROD::E300_ITEM18::itemName = "E300_ITEM18";
const std::string WCONPROD::E300_ITEM19::itemName = "E300_ITEM19";
const std::string WCONPROD::E300_ITEM20::itemName = "E300_ITEM20";


WDFACCOR::WDFACCOR( ) : ParserKeyword("WDFACCOR") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WDFACCOR");
  {
     ParserRecord record;
     {
        ParserItem item("WELLNAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("A", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("B", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("C", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WDFACCOR::keywordName = "WDFACCOR";
const std::string WDFACCOR::WELLNAME::itemName = "WELLNAME";
const std::string WDFACCOR::A::itemName = "A";
const double WDFACCOR::A::defaultValue = 0.000000;
const std::string WDFACCOR::B::itemName = "B";
const double WDFACCOR::B::defaultValue = 0.000000;
const std::string WDFACCOR::C::itemName = "C";
const double WDFACCOR::C::defaultValue = 0.000000;


WDRILTIM::WDRILTIM( ) : ParserKeyword("WDRILTIM") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WDRILTIM");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DRILL_TIME", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Time");
        record.addItem(item);
     }
     {
        ParserItem item("WORKOVER_CLOSE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("COMPARTMENT", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WDRILTIM::keywordName = "WDRILTIM";
const std::string WDRILTIM::WELL::itemName = "WELL";
const std::string WDRILTIM::DRILL_TIME::itemName = "DRILL_TIME";
const std::string WDRILTIM::WORKOVER_CLOSE::itemName = "WORKOVER_CLOSE";
const std::string WDRILTIM::COMPARTMENT::itemName = "COMPARTMENT";


WECON::WECON( ) : ParserKeyword("WECON") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WECON");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_OIL_PRODUCTION", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_GAS_PRODUCTION", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("GasSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WATER_CUT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_GAS_OIL_RATIO", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WATER_GAS_RATIO", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WORKOVER_RATIO_LIMIT", ParserItem::item_size::SINGLE, "NONE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("END_RUN_FLAG", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FOLLOW_ON_WELL", ParserItem::item_size::SINGLE, "'" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("LIMITED_QUANTITY", ParserItem::item_size::SINGLE, "RATE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SECOND_MAX_WATER_CUT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WORKOVER_SECOND_WATER_CUT_LIMIT", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_GAS_LIQUID_RATIO", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_LIQUID_PRODCUTION_RATE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("LiquidSurfaceVolume/Time");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_TEMP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        record.addItem(item);
     }
     {
        ParserItem item("MIN_RES_FLUID_RATE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("ReservoirVolume/Time");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WECON::keywordName = "WECON";
const std::string WECON::WELL::itemName = "WELL";
const std::string WECON::MIN_OIL_PRODUCTION::itemName = "MIN_OIL_PRODUCTION";
const double WECON::MIN_OIL_PRODUCTION::defaultValue = 0.000000;
const std::string WECON::MIN_GAS_PRODUCTION::itemName = "MIN_GAS_PRODUCTION";
const double WECON::MIN_GAS_PRODUCTION::defaultValue = 0.000000;
const std::string WECON::MAX_WATER_CUT::itemName = "MAX_WATER_CUT";
const double WECON::MAX_WATER_CUT::defaultValue = 0.000000;
const std::string WECON::MAX_GAS_OIL_RATIO::itemName = "MAX_GAS_OIL_RATIO";
const double WECON::MAX_GAS_OIL_RATIO::defaultValue = 0.000000;
const std::string WECON::MAX_WATER_GAS_RATIO::itemName = "MAX_WATER_GAS_RATIO";
const double WECON::MAX_WATER_GAS_RATIO::defaultValue = 0.000000;
const std::string WECON::WORKOVER_RATIO_LIMIT::itemName = "WORKOVER_RATIO_LIMIT";
const std::string WECON::WORKOVER_RATIO_LIMIT::defaultValue = "NONE";
const std::string WECON::END_RUN_FLAG::itemName = "END_RUN_FLAG";
const std::string WECON::END_RUN_FLAG::defaultValue = "NO";
const std::string WECON::FOLLOW_ON_WELL::itemName = "FOLLOW_ON_WELL";
const std::string WECON::FOLLOW_ON_WELL::defaultValue = "'";
const std::string WECON::LIMITED_QUANTITY::itemName = "LIMITED_QUANTITY";
const std::string WECON::LIMITED_QUANTITY::defaultValue = "RATE";
const std::string WECON::SECOND_MAX_WATER_CUT::itemName = "SECOND_MAX_WATER_CUT";
const double WECON::SECOND_MAX_WATER_CUT::defaultValue = 0.000000;
const std::string WECON::WORKOVER_SECOND_WATER_CUT_LIMIT::itemName = "WORKOVER_SECOND_WATER_CUT_LIMIT";
const std::string WECON::MAX_GAS_LIQUID_RATIO::itemName = "MAX_GAS_LIQUID_RATIO";
const double WECON::MAX_GAS_LIQUID_RATIO::defaultValue = 0.000000;
const std::string WECON::MIN_LIQUID_PRODCUTION_RATE::itemName = "MIN_LIQUID_PRODCUTION_RATE";
const double WECON::MIN_LIQUID_PRODCUTION_RATE::defaultValue = 0.000000;
const std::string WECON::MAX_TEMP::itemName = "MAX_TEMP";
const std::string WECON::MIN_RES_FLUID_RATE::itemName = "MIN_RES_FLUID_RATE";
const double WECON::MIN_RES_FLUID_RATE::defaultValue = 0.000000;


WEFAC::WEFAC( ) : ParserKeyword("WEFAC") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WEFAC");
  {
     ParserRecord record;
     {
        ParserItem item("WELLNAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("EFFICIENCY_FACTOR", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("EXTENDED_NETWORK_OPT", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WEFAC::keywordName = "WEFAC";
const std::string WEFAC::WELLNAME::itemName = "WELLNAME";
const std::string WEFAC::EFFICIENCY_FACTOR::itemName = "EFFICIENCY_FACTOR";
const double WEFAC::EFFICIENCY_FACTOR::defaultValue = 1.000000;
const std::string WEFAC::EXTENDED_NETWORK_OPT::itemName = "EXTENDED_NETWORK_OPT";
const std::string WEFAC::EXTENDED_NETWORK_OPT::defaultValue = "YES";


WELLDIMS::WELLDIMS( ) : ParserKeyword("WELLDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("WELLDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("MAXWELLS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAXCONN", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAXGROUPS", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_GROUPSIZE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_STAGES", ParserItem::item_size::SINGLE, 5 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_STREAMS", ParserItem::item_size::SINGLE, 10 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_MIXTURES", ParserItem::item_size::SINGLE, 5 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_SEPARATORS", ParserItem::item_size::SINGLE, 4 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_MIXTURE_ITEMS", ParserItem::item_size::SINGLE, 3 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_COMPLETION_X", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_WELLIST_PR_WELL", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_DYNAMIC_WELLIST", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_SECONDARY_WELLS", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WELLDIMS::keywordName = "WELLDIMS";
const std::string WELLDIMS::MAXWELLS::itemName = "MAXWELLS";
const int WELLDIMS::MAXWELLS::defaultValue = 0;
const std::string WELLDIMS::MAXCONN::itemName = "MAXCONN";
const int WELLDIMS::MAXCONN::defaultValue = 0;
const std::string WELLDIMS::MAXGROUPS::itemName = "MAXGROUPS";
const int WELLDIMS::MAXGROUPS::defaultValue = 0;
const std::string WELLDIMS::MAX_GROUPSIZE::itemName = "MAX_GROUPSIZE";
const int WELLDIMS::MAX_GROUPSIZE::defaultValue = 0;
const std::string WELLDIMS::MAX_STAGES::itemName = "MAX_STAGES";
const int WELLDIMS::MAX_STAGES::defaultValue = 5;
const std::string WELLDIMS::MAX_STREAMS::itemName = "MAX_STREAMS";
const int WELLDIMS::MAX_STREAMS::defaultValue = 10;
const std::string WELLDIMS::MAX_MIXTURES::itemName = "MAX_MIXTURES";
const int WELLDIMS::MAX_MIXTURES::defaultValue = 5;
const std::string WELLDIMS::MAX_SEPARATORS::itemName = "MAX_SEPARATORS";
const int WELLDIMS::MAX_SEPARATORS::defaultValue = 4;
const std::string WELLDIMS::MAX_MIXTURE_ITEMS::itemName = "MAX_MIXTURE_ITEMS";
const int WELLDIMS::MAX_MIXTURE_ITEMS::defaultValue = 3;
const std::string WELLDIMS::MAX_COMPLETION_X::itemName = "MAX_COMPLETION_X";
const int WELLDIMS::MAX_COMPLETION_X::defaultValue = 0;
const std::string WELLDIMS::MAX_WELLIST_PR_WELL::itemName = "MAX_WELLIST_PR_WELL";
const int WELLDIMS::MAX_WELLIST_PR_WELL::defaultValue = 1;
const std::string WELLDIMS::MAX_DYNAMIC_WELLIST::itemName = "MAX_DYNAMIC_WELLIST";
const int WELLDIMS::MAX_DYNAMIC_WELLIST::defaultValue = 1;
const std::string WELLDIMS::MAX_SECONDARY_WELLS::itemName = "MAX_SECONDARY_WELLS";
const int WELLDIMS::MAX_SECONDARY_WELLS::defaultValue = 1;


WELL_PROBE::WELL_PROBE( ) : ParserKeyword("WELL_PROBE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SUMMARY");
  clearDeckNames();
  addDeckName("NGOPAS");
  addDeckName("WALQ");
  addDeckName("WAPI");
  addDeckName("WBGLR");
  addDeckName("WBHP");
  addDeckName("WBHPFP");
  addDeckName("WBHPH");
  addDeckName("WBP");
  addDeckName("WBP4");
  addDeckName("WBP5");
  addDeckName("WBP9");
  addDeckName("WCIC");
  addDeckName("WCIR");
  addDeckName("WCIT");
  addDeckName("WCPC");
  addDeckName("WCPR");
  addDeckName("WCPT");
  addDeckName("WDRPR");
  addDeckName("WEDC");
  addDeckName("WEFF");
  addDeckName("WEFFG");
  addDeckName("WEPR");
  addDeckName("WEPT");
  addDeckName("WGCV");
  addDeckName("WGDC");
  addDeckName("WGFRL");
  addDeckName("WGIGR");
  addDeckName("WGIP");
  addDeckName("WGIP2");
  addDeckName("WGIR");
  addDeckName("WGIRH");
  addDeckName("WGIRL");
  addDeckName("WGIRT");
  addDeckName("WGIT");
  addDeckName("WGITH");
  addDeckName("WGITL");
  addDeckName("WGLIR");
  addDeckName("WGLR");
  addDeckName("WGLRH");
  addDeckName("WGLRL");
  addDeckName("WGOR");
  addDeckName("WGORH");
  addDeckName("WGORL");
  addDeckName("WGPGR");
  addDeckName("WGPI");
  addDeckName("WGPI2");
  addDeckName("WGPP");
  addDeckName("WGPP2");
  addDeckName("WGPPF");
  addDeckName("WGPPF2");
  addDeckName("WGPPS");
  addDeckName("WGPPS2");
  addDeckName("WGPR");
  addDeckName("WGPRF");
  addDeckName("WGPRFP");
  addDeckName("WGPRH");
  addDeckName("WGPRL");
  addDeckName("WGPRS");
  addDeckName("WGPRT");
  addDeckName("WGPT");
  addDeckName("WGPTF");
  addDeckName("WGPTH");
  addDeckName("WGPTL");
  addDeckName("WGPTS");
  addDeckName("WGQ");
  addDeckName("WHD");
  addDeckName("WHDF");
  addDeckName("WJPR");
  addDeckName("WJPRH");
  addDeckName("WJPRT");
  addDeckName("WJPT");
  addDeckName("WJPTH");
  addDeckName("WLFRL");
  addDeckName("WLPR");
  addDeckName("WLPRH");
  addDeckName("WLPRT");
  addDeckName("WLPT");
  addDeckName("WLPTH");
  addDeckName("WLPTL");
  addDeckName("WMCON");
  addDeckName("WMCTL");
  addDeckName("WMIR");
  addDeckName("WMIT");
  addDeckName("WMMW");
  addDeckName("WMPR");
  addDeckName("WMPT");
  addDeckName("WMVFP");
  addDeckName("WNIR");
  addDeckName("WNIT");
  addDeckName("WNPR");
  addDeckName("WNPT");
  addDeckName("WOFRL");
  addDeckName("WOGLR");
  addDeckName("WOGR");
  addDeckName("WOGRH");
  addDeckName("WOGRL");
  addDeckName("WOIGR");
  addDeckName("WOIR");
  addDeckName("WOIRH");
  addDeckName("WOIRT");
  addDeckName("WOIT");
  addDeckName("WOITH");
  addDeckName("WOITL");
  addDeckName("WOPGR");
  addDeckName("WOPI");
  addDeckName("WOPI2");
  addDeckName("WOPP");
  addDeckName("WOPP2");
  addDeckName("WOPR");
  addDeckName("WOPRF");
  addDeckName("WOPRH");
  addDeckName("WOPRL");
  addDeckName("WOPRS");
  addDeckName("WOPRT");
  addDeckName("WOPT");
  addDeckName("WOPTF");
  addDeckName("WOPTH");
  addDeckName("WOPTL");
  addDeckName("WOPTS");
  addDeckName("WOVPR");
  addDeckName("WPI");
  addDeckName("WPI1");
  addDeckName("WPI4");
  addDeckName("WPI5");
  addDeckName("WPI9");
  addDeckName("WPWE0");
  addDeckName("WPWE1");
  addDeckName("WPWE2");
  addDeckName("WPWE3");
  addDeckName("WPWE4");
  addDeckName("WPWE5");
  addDeckName("WPWE6");
  addDeckName("WPWE7");
  addDeckName("WPWEM");
  addDeckName("WSIC");
  addDeckName("WSIR");
  addDeckName("WSIT");
  addDeckName("WSPC");
  addDeckName("WSPR");
  addDeckName("WSPT");
  addDeckName("WSTAT");
  addDeckName("WTHP");
  addDeckName("WTHPFP");
  addDeckName("WTHPH");
  addDeckName("WTHT");
  addDeckName("WTIC");
  addDeckName("WTICF");
  addDeckName("WTICHEA");
  addDeckName("WTICS");
  addDeckName("WTIR");
  addDeckName("WTIRALK");
  addDeckName("WTIRANI");
  addDeckName("WTIRCAT");
  addDeckName("WTIRF");
  addDeckName("WTIRFOA");
  addDeckName("WTIRHEA");
  addDeckName("WTIRS");
  addDeckName("WTIRSUR");
  addDeckName("WTIT");
  addDeckName("WTITALK");
  addDeckName("WTITANI");
  addDeckName("WTITCAT");
  addDeckName("WTITF");
  addDeckName("WTITFOA");
  addDeckName("WTITHEA");
  addDeckName("WTITS");
  addDeckName("WTITSUR");
  addDeckName("WTPC");
  addDeckName("WTPCF");
  addDeckName("WTPCHEA");
  addDeckName("WTPCS");
  addDeckName("WTPR");
  addDeckName("WTPRALK");
  addDeckName("WTPRANI");
  addDeckName("WTPRCAT");
  addDeckName("WTPRF");
  addDeckName("WTPRFOA");
  addDeckName("WTPRHEA");
  addDeckName("WTPRS");
  addDeckName("WTPRSUR");
  addDeckName("WTPT");
  addDeckName("WTPTALK");
  addDeckName("WTPTANI");
  addDeckName("WTPTCAT");
  addDeckName("WTPTF");
  addDeckName("WTPTFOA");
  addDeckName("WTPTHEA");
  addDeckName("WTPTS");
  addDeckName("WTPTSUR");
  addDeckName("WVFRL");
  addDeckName("WVIR");
  addDeckName("WVIRL");
  addDeckName("WVIRT");
  addDeckName("WVIT");
  addDeckName("WVITL");
  addDeckName("WVPGR");
  addDeckName("WVPR");
  addDeckName("WVPRT");
  addDeckName("WVPT");
  addDeckName("WVPTL");
  addDeckName("WWCT");
  addDeckName("WWCTH");
  addDeckName("WWCTL");
  addDeckName("WWFRL");
  addDeckName("WWGR");
  addDeckName("WWGRH");
  addDeckName("WWGRL");
  addDeckName("WWIGR");
  addDeckName("WWIP");
  addDeckName("WWIP2");
  addDeckName("WWIR");
  addDeckName("WWIRH");
  addDeckName("WWIRL");
  addDeckName("WWIRT");
  addDeckName("WWIT");
  addDeckName("WWITH");
  addDeckName("WWITL");
  addDeckName("WWPGR");
  addDeckName("WWPI");
  addDeckName("WWPI2");
  addDeckName("WWPIR");
  addDeckName("WWPP");
  addDeckName("WWPP2");
  addDeckName("WWPR");
  addDeckName("WWPRH");
  addDeckName("WWPRL");
  addDeckName("WWPRT");
  addDeckName("WWPT");
  addDeckName("WWPTH");
  addDeckName("WWPTL");
  setMatchRegex("WU.+|(WBHWC|WGFWC|WOFWC|WWFWC)[1-9][0-9]?|WTPR.+|WTPT.+|WTPC.+|WTIR.+|WTIT.+|WTIC.+");
  {
     ParserRecord record;
     {
        ParserItem item("WELLS", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WELL_PROBE::keywordName = "WELL_PROBE";
const std::string WELL_PROBE::WELLS::itemName = "WELLS";


WELOPEN::WELOPEN( ) : ParserKeyword("WELOPEN") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WELOPEN");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("STATUS", ParserItem::item_size::SINGLE, "OPEN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("C1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("C2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WELOPEN::keywordName = "WELOPEN";
const std::string WELOPEN::WELL::itemName = "WELL";
const std::string WELOPEN::STATUS::itemName = "STATUS";
const std::string WELOPEN::STATUS::defaultValue = "OPEN";
const std::string WELOPEN::I::itemName = "I";
const std::string WELOPEN::J::itemName = "J";
const std::string WELOPEN::K::itemName = "K";
const std::string WELOPEN::C1::itemName = "C1";
const std::string WELOPEN::C2::itemName = "C2";


WELPI::WELPI( ) : ParserKeyword("WELPI") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WELPI");
  {
     ParserRecord record;
     {
        ParserItem item("WELL_NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("STEADY_STATE_PRODUCTIVITY_OR_INJECTIVITY_INDEX_VALUE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WELPI::keywordName = "WELPI";
const std::string WELPI::WELL_NAME::itemName = "WELL_NAME";
const std::string WELPI::STEADY_STATE_PRODUCTIVITY_OR_INJECTIVITY_INDEX_VALUE::itemName = "STEADY_STATE_PRODUCTIVITY_OR_INJECTIVITY_INDEX_VALUE";


WELSEGS::WELSEGS( ) : ParserKeyword("WELSEGS") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WELSEGS");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DEPTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("LENGTH", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("WELLBORE_VOLUME", ParserItem::item_size::SINGLE, double( 1.0000000000000001e-05 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length*Length*Length");
        record.addItem(item);
     }
     {
        ParserItem item("INFO_TYPE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PRESSURE_COMPONENTS", ParserItem::item_size::SINGLE, "HFA" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FLOW_MODEL", ParserItem::item_size::SINGLE, "HO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TOP_X", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("TOP_Y", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     addRecord( record );
  }
  {
     ParserRecord record;
     {
        ParserItem item("SEGMENT1", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SEGMENT2", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("BRANCH", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("JOIN_SEGMENT", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SEGMENT_LENGTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("DEPTH_CHANGE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("DIAMETER", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("ROUGHNESS", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("AREA", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length*Length");
        record.addItem(item);
     }
     {
        ParserItem item("VOLUME", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length*Length*Length");
        record.addItem(item);
     }
     {
        ParserItem item("LENGTH_X", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("LENGTH_Y", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WELSEGS::keywordName = "WELSEGS";
const std::string WELSEGS::WELL::itemName = "WELL";
const std::string WELSEGS::DEPTH::itemName = "DEPTH";
const std::string WELSEGS::LENGTH::itemName = "LENGTH";
const double WELSEGS::LENGTH::defaultValue = 0.000000;
const std::string WELSEGS::WELLBORE_VOLUME::itemName = "WELLBORE_VOLUME";
const double WELSEGS::WELLBORE_VOLUME::defaultValue = 0.000010;
const std::string WELSEGS::INFO_TYPE::itemName = "INFO_TYPE";
const std::string WELSEGS::PRESSURE_COMPONENTS::itemName = "PRESSURE_COMPONENTS";
const std::string WELSEGS::PRESSURE_COMPONENTS::defaultValue = "HFA";
const std::string WELSEGS::FLOW_MODEL::itemName = "FLOW_MODEL";
const std::string WELSEGS::FLOW_MODEL::defaultValue = "HO";
const std::string WELSEGS::TOP_X::itemName = "TOP_X";
const double WELSEGS::TOP_X::defaultValue = 0.000000;
const std::string WELSEGS::TOP_Y::itemName = "TOP_Y";
const double WELSEGS::TOP_Y::defaultValue = 0.000000;
const std::string WELSEGS::SEGMENT1::itemName = "SEGMENT1";
const std::string WELSEGS::SEGMENT2::itemName = "SEGMENT2";
const std::string WELSEGS::BRANCH::itemName = "BRANCH";
const std::string WELSEGS::JOIN_SEGMENT::itemName = "JOIN_SEGMENT";
const std::string WELSEGS::SEGMENT_LENGTH::itemName = "SEGMENT_LENGTH";
const std::string WELSEGS::DEPTH_CHANGE::itemName = "DEPTH_CHANGE";
const std::string WELSEGS::DIAMETER::itemName = "DIAMETER";
const std::string WELSEGS::ROUGHNESS::itemName = "ROUGHNESS";
const std::string WELSEGS::AREA::itemName = "AREA";
const std::string WELSEGS::VOLUME::itemName = "VOLUME";
const std::string WELSEGS::LENGTH_X::itemName = "LENGTH_X";
const double WELSEGS::LENGTH_X::defaultValue = 0.000000;
const std::string WELSEGS::LENGTH_Y::itemName = "LENGTH_Y";
const double WELSEGS::LENGTH_Y::defaultValue = 0.000000;


WELSPECS::WELSPECS( ) : ParserKeyword("WELSPECS") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WELSPECS");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GROUP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("HEAD_I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("HEAD_J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("REF_DEPTH", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("PHASE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("D_RADIUS", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addItem(item);
     }
     {
        ParserItem item("INFLOW_EQ", ParserItem::item_size::SINGLE, "STD" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("AUTO_SHUTIN", ParserItem::item_size::SINGLE, "SHUT" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CROSSFLOW", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("P_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DENSITY_CALC", ParserItem::item_size::SINGLE, "SEG" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FIP_REGION", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FRONTSIM1", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FRONTSIM2", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("well_model", ParserItem::item_size::SINGLE, "STD" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("POLYMER_TABLE", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WELSPECS::keywordName = "WELSPECS";
const std::string WELSPECS::WELL::itemName = "WELL";
const std::string WELSPECS::GROUP::itemName = "GROUP";
const std::string WELSPECS::HEAD_I::itemName = "HEAD_I";
const std::string WELSPECS::HEAD_J::itemName = "HEAD_J";
const std::string WELSPECS::REF_DEPTH::itemName = "REF_DEPTH";
const std::string WELSPECS::PHASE::itemName = "PHASE";
const std::string WELSPECS::D_RADIUS::itemName = "D_RADIUS";
const double WELSPECS::D_RADIUS::defaultValue = 0.000000;
const std::string WELSPECS::INFLOW_EQ::itemName = "INFLOW_EQ";
const std::string WELSPECS::INFLOW_EQ::defaultValue = "STD";
const std::string WELSPECS::AUTO_SHUTIN::itemName = "AUTO_SHUTIN";
const std::string WELSPECS::AUTO_SHUTIN::defaultValue = "SHUT";
const std::string WELSPECS::CROSSFLOW::itemName = "CROSSFLOW";
const std::string WELSPECS::CROSSFLOW::defaultValue = "YES";
const std::string WELSPECS::P_TABLE::itemName = "P_TABLE";
const int WELSPECS::P_TABLE::defaultValue = 0;
const std::string WELSPECS::DENSITY_CALC::itemName = "DENSITY_CALC";
const std::string WELSPECS::DENSITY_CALC::defaultValue = "SEG";
const std::string WELSPECS::FIP_REGION::itemName = "FIP_REGION";
const int WELSPECS::FIP_REGION::defaultValue = 0;
const std::string WELSPECS::FRONTSIM1::itemName = "FRONTSIM1";
const std::string WELSPECS::FRONTSIM2::itemName = "FRONTSIM2";
const std::string WELSPECS::well_model::itemName = "well_model";
const std::string WELSPECS::well_model::defaultValue = "STD";
const std::string WELSPECS::POLYMER_TABLE::itemName = "POLYMER_TABLE";
const int WELSPECS::POLYMER_TABLE::defaultValue = 0;


WELTARG::WELTARG( ) : ParserKeyword("WELTARG") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WELTARG");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CMODE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NEW_VALUE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WELTARG::keywordName = "WELTARG";
const std::string WELTARG::WELL::itemName = "WELL";
const std::string WELTARG::CMODE::itemName = "CMODE";
const std::string WELTARG::NEW_VALUE::itemName = "NEW_VALUE";


WGASPROD::WGASPROD( ) : ParserKeyword("WGASPROD") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WGASPROD");
  {
     ParserRecord record;
     {
        ParserItem item("WELL_NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("INCREMENTAL_GAS_PRODUCTION_RATE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_INCREMENTS", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WGASPROD::keywordName = "WGASPROD";
const std::string WGASPROD::WELL_NAME::itemName = "WELL_NAME";
const std::string WGASPROD::INCREMENTAL_GAS_PRODUCTION_RATE::itemName = "INCREMENTAL_GAS_PRODUCTION_RATE";
const std::string WGASPROD::MAX_INCREMENTS::itemName = "MAX_INCREMENTS";


WGRUPCON::WGRUPCON( ) : ParserKeyword("WGRUPCON") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WGRUPCON");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GROUP_CONTROLLED", ParserItem::item_size::SINGLE, "YES" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GUIDE_RATE", ParserItem::item_size::SINGLE, double( -1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PHASE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SCALING_FACTOR", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WGRUPCON::keywordName = "WGRUPCON";
const std::string WGRUPCON::WELL::itemName = "WELL";
const std::string WGRUPCON::GROUP_CONTROLLED::itemName = "GROUP_CONTROLLED";
const std::string WGRUPCON::GROUP_CONTROLLED::defaultValue = "YES";
const std::string WGRUPCON::GUIDE_RATE::itemName = "GUIDE_RATE";
const double WGRUPCON::GUIDE_RATE::defaultValue = -1.000000;
const std::string WGRUPCON::PHASE::itemName = "PHASE";
const std::string WGRUPCON::SCALING_FACTOR::itemName = "SCALING_FACTOR";
const double WGRUPCON::SCALING_FACTOR::defaultValue = 1.000000;


WHISTCTL::WHISTCTL( ) : ParserKeyword("WHISTCTL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WHISTCTL");
  {
     ParserRecord record;
     {
        ParserItem item("CMODE", ParserItem::item_size::SINGLE, "NONE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("BPH_TERMINATE", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WHISTCTL::keywordName = "WHISTCTL";
const std::string WHISTCTL::CMODE::itemName = "CMODE";
const std::string WHISTCTL::CMODE::defaultValue = "NONE";
const std::string WHISTCTL::BPH_TERMINATE::itemName = "BPH_TERMINATE";
const std::string WHISTCTL::BPH_TERMINATE::defaultValue = "NO";


WINJMULT::WINJMULT( ) : ParserKeyword("WINJMULT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WINJMULT");
  {
     ParserRecord record;
     {
        ParserItem item("WELL_NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FRACTURING_PRESSURE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MULTIPLIER_GRADIENT", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MODE", ParserItem::item_size::SINGLE, "WREV" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE, -1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE, -1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE, -1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WINJMULT::keywordName = "WINJMULT";
const std::string WINJMULT::WELL_NAME::itemName = "WELL_NAME";
const std::string WINJMULT::FRACTURING_PRESSURE::itemName = "FRACTURING_PRESSURE";
const std::string WINJMULT::MULTIPLIER_GRADIENT::itemName = "MULTIPLIER_GRADIENT";
const double WINJMULT::MULTIPLIER_GRADIENT::defaultValue = 0.000000;
const std::string WINJMULT::MODE::itemName = "MODE";
const std::string WINJMULT::MODE::defaultValue = "WREV";
const std::string WINJMULT::I::itemName = "I";
const int WINJMULT::I::defaultValue = -1;
const std::string WINJMULT::J::itemName = "J";
const int WINJMULT::J::defaultValue = -1;
const std::string WINJMULT::K::itemName = "K";
const int WINJMULT::K::defaultValue = -1;


WINJTEMP::WINJTEMP( ) : ParserKeyword("WINJTEMP") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WINJTEMP");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("STEAM_QUALITY", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TEMPERATURE", ParserItem::item_size::SINGLE, double( 15.56 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        record.addItem(item);
     }
     {
        ParserItem item("PRESSURE", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("ENTHALPY", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Energy/Mass");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WINJTEMP::keywordName = "WINJTEMP";
const std::string WINJTEMP::WELL::itemName = "WELL";
const std::string WINJTEMP::STEAM_QUALITY::itemName = "STEAM_QUALITY";
const double WINJTEMP::STEAM_QUALITY::defaultValue = 1.000000;
const std::string WINJTEMP::TEMPERATURE::itemName = "TEMPERATURE";
const double WINJTEMP::TEMPERATURE::defaultValue = 15.560000;
const std::string WINJTEMP::PRESSURE::itemName = "PRESSURE";
const double WINJTEMP::PRESSURE::defaultValue = 0.000000;
const std::string WINJTEMP::ENTHALPY::itemName = "ENTHALPY";
const double WINJTEMP::ENTHALPY::defaultValue = 0.000000;


WLIFT::WLIFT( ) : ParserKeyword("WLIFT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WLIFT");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRIGGER_LIMIT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRIGGRE_PHASE", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NEW_VFP_TABLE", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NEW_ALQ_VALUE", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NEW_WEFAC", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WWCT_LIMIT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NEW_THP_LIMIT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     {
        ParserItem item("WGOR_LIMIT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("ALQ_SHIFT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("THP_SHIFT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Pressure");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WLIFT::keywordName = "WLIFT";
const std::string WLIFT::WELL::itemName = "WELL";
const std::string WLIFT::TRIGGER_LIMIT::itemName = "TRIGGER_LIMIT";
const std::string WLIFT::TRIGGRE_PHASE::itemName = "TRIGGRE_PHASE";
const std::string WLIFT::NEW_VFP_TABLE::itemName = "NEW_VFP_TABLE";
const std::string WLIFT::NEW_ALQ_VALUE::itemName = "NEW_ALQ_VALUE";
const std::string WLIFT::NEW_WEFAC::itemName = "NEW_WEFAC";
const std::string WLIFT::WWCT_LIMIT::itemName = "WWCT_LIMIT";
const std::string WLIFT::NEW_THP_LIMIT::itemName = "NEW_THP_LIMIT";
const std::string WLIFT::WGOR_LIMIT::itemName = "WGOR_LIMIT";
const std::string WLIFT::ALQ_SHIFT::itemName = "ALQ_SHIFT";
const std::string WLIFT::THP_SHIFT::itemName = "THP_SHIFT";


WLIMTOL::WLIMTOL( ) : ParserKeyword("WLIMTOL") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WLIMTOL");
  {
     ParserRecord record;
     {
        ParserItem item("TOLERANCE_FRACTION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WLIMTOL::keywordName = "WLIMTOL";
const std::string WLIMTOL::TOLERANCE_FRACTION::itemName = "TOLERANCE_FRACTION";


WORKLIM::WORKLIM( ) : ParserKeyword("WORKLIM") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WORKLIM");
  {
     ParserRecord record;
     {
        ParserItem item("LIMIT", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WORKLIM::keywordName = "WORKLIM";
const std::string WORKLIM::LIMIT::itemName = "LIMIT";


WORKTHP::WORKTHP( ) : ParserKeyword("WORKTHP") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WORKTHP");
  {
     ParserRecord record;
     {
        ParserItem item("WELL_NAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WORK_OVER_PROCEDURE", ParserItem::item_size::SINGLE, "NONE" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WORKTHP::keywordName = "WORKTHP";
const std::string WORKTHP::WELL_NAME::itemName = "WELL_NAME";
const std::string WORKTHP::WORK_OVER_PROCEDURE::itemName = "WORK_OVER_PROCEDURE";
const std::string WORKTHP::WORK_OVER_PROCEDURE::defaultValue = "NONE";


WPAVE::WPAVE( ) : ParserKeyword("WPAVE") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WPAVE");
  {
     ParserRecord record;
     {
        ParserItem item("WEIGTH_FACTOR1", ParserItem::item_size::SINGLE, double( 0.5 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WEIGTH_FACTOR2", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("DEPTH_CORRECTION", ParserItem::item_size::SINGLE, "WELL" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CONNECTION", ParserItem::item_size::SINGLE, "OPEN" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WPAVE::keywordName = "WPAVE";
const std::string WPAVE::WEIGTH_FACTOR1::itemName = "WEIGTH_FACTOR1";
const double WPAVE::WEIGTH_FACTOR1::defaultValue = 0.500000;
const std::string WPAVE::WEIGTH_FACTOR2::itemName = "WEIGTH_FACTOR2";
const double WPAVE::WEIGTH_FACTOR2::defaultValue = 1.000000;
const std::string WPAVE::DEPTH_CORRECTION::itemName = "DEPTH_CORRECTION";
const std::string WPAVE::DEPTH_CORRECTION::defaultValue = "WELL";
const std::string WPAVE::CONNECTION::itemName = "CONNECTION";
const std::string WPAVE::CONNECTION::defaultValue = "OPEN";


WPAVEDEP::WPAVEDEP( ) : ParserKeyword("WPAVEDEP") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WPAVEDEP");
  {
     ParserRecord record;
     {
        ParserItem item("WELLNAME", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("REFDEPTH", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WPAVEDEP::keywordName = "WPAVEDEP";
const std::string WPAVEDEP::WELLNAME::itemName = "WELLNAME";
const std::string WPAVEDEP::REFDEPTH::itemName = "REFDEPTH";
const double WPAVEDEP::REFDEPTH::defaultValue = 0.000000;


WPIMULT::WPIMULT( ) : ParserKeyword("WPIMULT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WPIMULT");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("WELLPI", ParserItem::item_size::SINGLE, double( 1 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("I", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("J", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("K", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("FIRST", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("LAST", ParserItem::item_size::SINGLE ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WPIMULT::keywordName = "WPIMULT";
const std::string WPIMULT::WELL::itemName = "WELL";
const std::string WPIMULT::WELLPI::itemName = "WELLPI";
const double WPIMULT::WELLPI::defaultValue = 1.000000;
const std::string WPIMULT::I::itemName = "I";
const std::string WPIMULT::J::itemName = "J";
const std::string WPIMULT::K::itemName = "K";
const std::string WPIMULT::FIRST::itemName = "FIRST";
const std::string WPIMULT::LAST::itemName = "LAST";


WPITAB::WPITAB( ) : ParserKeyword("WPITAB") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WPITAB");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PI", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WPITAB::keywordName = "WPITAB";
const std::string WPITAB::WELL::itemName = "WELL";
const std::string WPITAB::PI::itemName = "PI";
const double WPITAB::PI::defaultValue = 0.000000;


WPOLYMER::WPOLYMER( ) : ParserKeyword("WPOLYMER") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  addValidSectionName("SPECIAL");
  clearDeckNames();
  addDeckName("WPOLYMER");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("POLYMER_CONCENTRATION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("PolymerDensity");
        record.addItem(item);
     }
     {
        ParserItem item("SALT_CONCENTRATION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("PolymerDensity");
        record.addItem(item);
     }
     {
        ParserItem item("GROUP_POLYMER_CONCENTRATION", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("GROUP_SALT_CONCENTRATION", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WPOLYMER::keywordName = "WPOLYMER";
const std::string WPOLYMER::WELL::itemName = "WELL";
const std::string WPOLYMER::POLYMER_CONCENTRATION::itemName = "POLYMER_CONCENTRATION";
const std::string WPOLYMER::SALT_CONCENTRATION::itemName = "SALT_CONCENTRATION";
const std::string WPOLYMER::GROUP_POLYMER_CONCENTRATION::itemName = "GROUP_POLYMER_CONCENTRATION";
const std::string WPOLYMER::GROUP_SALT_CONCENTRATION::itemName = "GROUP_SALT_CONCENTRATION";


WRFT::WRFT( ) : ParserKeyword("WRFT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WRFT");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WRFT::keywordName = "WRFT";
const std::string WRFT::WELL::itemName = "WELL";


WRFTPLT::WRFTPLT( ) : ParserKeyword("WRFTPLT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WRFTPLT");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OUTPUT_RFT", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OUTPUT_PLT", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("OUTPUT_SEGMENT", ParserItem::item_size::SINGLE, "NO" ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WRFTPLT::keywordName = "WRFTPLT";
const std::string WRFTPLT::WELL::itemName = "WELL";
const std::string WRFTPLT::OUTPUT_RFT::itemName = "OUTPUT_RFT";
const std::string WRFTPLT::OUTPUT_RFT::defaultValue = "NO";
const std::string WRFTPLT::OUTPUT_PLT::itemName = "OUTPUT_PLT";
const std::string WRFTPLT::OUTPUT_PLT::defaultValue = "NO";
const std::string WRFTPLT::OUTPUT_SEGMENT::itemName = "OUTPUT_SEGMENT";
const std::string WRFTPLT::OUTPUT_SEGMENT::defaultValue = "NO";


WSEGDIMS::WSEGDIMS( ) : ParserKeyword("WSEGDIMS") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("RUNSPEC");
  clearDeckNames();
  addDeckName("WSEGDIMS");
  {
     ParserRecord record;
     {
        ParserItem item("NSWLMX", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NSEGMX", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NLBRMX", ParserItem::item_size::SINGLE, 1 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("NCRDMX", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WSEGDIMS::keywordName = "WSEGDIMS";
const std::string WSEGDIMS::NSWLMX::itemName = "NSWLMX";
const int WSEGDIMS::NSWLMX::defaultValue = 0;
const std::string WSEGDIMS::NSEGMX::itemName = "NSEGMX";
const int WSEGDIMS::NSEGMX::defaultValue = 1;
const std::string WSEGDIMS::NLBRMX::itemName = "NLBRMX";
const int WSEGDIMS::NLBRMX::defaultValue = 1;
const std::string WSEGDIMS::NCRDMX::itemName = "NCRDMX";
const int WSEGDIMS::NCRDMX::defaultValue = 0;


WSEGITER::WSEGITER( ) : ParserKeyword("WSEGITER") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WSEGITER");
  {
     ParserRecord record;
     {
        ParserItem item("MAX_WELL_ITERATIONS", ParserItem::item_size::SINGLE, 20 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("MAX_TIMES_REDUCED", ParserItem::item_size::SINGLE, 5 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("REDUCTION_FACTOR", ParserItem::item_size::SINGLE, double( 0.30000000000000004 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("INCREASING_FACTOR", ParserItem::item_size::SINGLE, double( 2 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WSEGITER::keywordName = "WSEGITER";
const std::string WSEGITER::MAX_WELL_ITERATIONS::itemName = "MAX_WELL_ITERATIONS";
const int WSEGITER::MAX_WELL_ITERATIONS::defaultValue = 20;
const std::string WSEGITER::MAX_TIMES_REDUCED::itemName = "MAX_TIMES_REDUCED";
const int WSEGITER::MAX_TIMES_REDUCED::defaultValue = 5;
const std::string WSEGITER::REDUCTION_FACTOR::itemName = "REDUCTION_FACTOR";
const double WSEGITER::REDUCTION_FACTOR::defaultValue = 0.300000;
const std::string WSEGITER::INCREASING_FACTOR::itemName = "INCREASING_FACTOR";
const double WSEGITER::INCREASING_FACTOR::defaultValue = 2.000000;


WSOLVENT::WSOLVENT( ) : ParserKeyword("WSOLVENT") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WSOLVENT");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("SOLVENT_FRACTION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WSOLVENT::keywordName = "WSOLVENT";
const std::string WSOLVENT::WELL::itemName = "WELL";
const std::string WSOLVENT::SOLVENT_FRACTION::itemName = "SOLVENT_FRACTION";


WTEMP::WTEMP( ) : ParserKeyword("WTEMP") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WTEMP");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TEMP", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Temperature");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WTEMP::keywordName = "WTEMP";
const std::string WTEMP::WELL::itemName = "WELL";
const std::string WTEMP::TEMP::itemName = "TEMP";


WTEST::WTEST( ) : ParserKeyword("WTEST") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WTEST");
  {
     ParserRecord record;
     {
        ParserItem item("well", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("interval", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("reason", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TEST_NUM", ParserItem::item_size::SINGLE, 0 ); item.setType( int() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("START_TIME", ParserItem::item_size::SINGLE, double( 0 ) ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WTEST::keywordName = "WTEST";
const std::string WTEST::well::itemName = "well";
const std::string WTEST::interval::itemName = "interval";
const std::string WTEST::reason::itemName = "reason";
const std::string WTEST::TEST_NUM::itemName = "TEST_NUM";
const int WTEST::TEST_NUM::defaultValue = 0;
const std::string WTEST::START_TIME::itemName = "START_TIME";
const double WTEST::START_TIME::defaultValue = 0.000000;


WTRACER::WTRACER( ) : ParserKeyword("WTRACER") {
  setSizeType(SLASH_TERMINATED);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("WTRACER");
  {
     ParserRecord record;
     {
        ParserItem item("WELL", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("TRACER", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CONCENTRATION", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("CUM_TRACER_FACTOR", ParserItem::item_size::SINGLE ); item.setType( double() );
        item.setDescription("");
        record.addItem(item);
     }
     {
        ParserItem item("PRODUCTION_GROUP", ParserItem::item_size::SINGLE ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string WTRACER::keywordName = "WTRACER";
const std::string WTRACER::WELL::itemName = "WELL";
const std::string WTRACER::TRACER::itemName = "TRACER";
const std::string WTRACER::CONCENTRATION::itemName = "CONCENTRATION";
const std::string WTRACER::CUM_TRACER_FACTOR::itemName = "CUM_TRACER_FACTOR";
const std::string WTRACER::PRODUCTION_GROUP::itemName = "PRODUCTION_GROUP";


ZCORN::ZCORN( ) : ParserKeyword("ZCORN") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("GRID");
  clearDeckNames();
  addDeckName("ZCORN");
  {
     ParserRecord record;
     {
        ParserItem item("data", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("Length");
        record.addDataItem(item);
     }
     addDataRecord( record );
  }
}
const std::string ZCORN::keywordName = "ZCORN";
const std::string ZCORN::data::itemName = "data";


ZFACT1::ZFACT1( ) : ParserKeyword("ZFACT1") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ZFACT1");
  {
     ParserRecord record;
     {
        ParserItem item("Z0", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ZFACT1::keywordName = "ZFACT1";
const std::string ZFACT1::Z0::itemName = "Z0";


ZFACT1S::ZFACT1S( ) : ParserKeyword("ZFACT1S") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ZFACT1S");
  {
     ParserRecord record;
     {
        ParserItem item("Z0", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ZFACT1S::keywordName = "ZFACT1S";
const std::string ZFACT1S::Z0::itemName = "Z0";


ZFACTOR::ZFACTOR( ) : ParserKeyword("ZFACTOR") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ZFACTOR");
  {
     ParserRecord record;
     {
        ParserItem item("Z0", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ZFACTOR::keywordName = "ZFACTOR";
const std::string ZFACTOR::Z0::itemName = "Z0";


ZFACTORS::ZFACTORS( ) : ParserKeyword("ZFACTORS") {
  setSizeType(OTHER_KEYWORD_IN_DECK);
  initSizeKeyword("TABDIMS","NUM_STATE_EQ",0);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("PROPS");
  clearDeckNames();
  addDeckName("ZFACTORS");
  {
     ParserRecord record;
     {
        ParserItem item("Z0", ParserItem::item_size::ALL ); item.setType( double() );
        item.setDescription("");
        item.push_backDimension("1");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ZFACTORS::keywordName = "ZFACTORS";
const std::string ZFACTORS::Z0::itemName = "Z0";


ZIPPY2::ZIPPY2( ) : ParserKeyword("ZIPPY2") {
  setFixedSize( (size_t) 1);
  setDescription("");
  clearValidSectionNames();
  addValidSectionName("SCHEDULE");
  clearDeckNames();
  addDeckName("ZIPPY2");
  {
     ParserRecord record;
     {
        ParserItem item("SETTINGS", ParserItem::item_size::ALL ); item.setType( std::string() );
        item.setDescription("");
        record.addItem(item);
     }
     addRecord( record );
  }
}
const std::string ZIPPY2::keywordName = "ZIPPY2";
const std::string ZIPPY2::SETTINGS::itemName = "SETTINGS";


}
void Parser::addDefaultKeywords() {
Opm::ParserKeywords::addDefaultKeywords(*this);
}}
