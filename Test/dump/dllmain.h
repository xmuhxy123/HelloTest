// dllmain.h : Declaration of module class.

class CdumpModule : public ATL::CAtlDllModuleT< CdumpModule >
{
public :
	DECLARE_LIBID(LIBID_dumpLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DUMP, "{182ABD50-DEF5-4C05-99C8-2B57D647636B}")
};

extern class CdumpModule _AtlModule;
