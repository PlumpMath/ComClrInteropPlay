// dllmain.h : Declaration of module class.

class CComCalculatorModule : public ATL::CAtlDllModuleT< CComCalculatorModule >
{
public :
	DECLARE_LIBID(LIBID_ComCalculatorLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMCALCULATOR, "{CBB86A03-0D81-4724-BD70-9272B70F57A9}")
};

extern class CComCalculatorModule _AtlModule;
