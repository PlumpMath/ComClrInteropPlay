// TheCalculator.h : Declaration of the CTheCalculator

#pragma once
#include "resource.h"       // main symbols



#include "ComCalculator_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CTheCalculator

class ATL_NO_VTABLE CTheCalculator :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTheCalculator, &CLSID_TheCalculator>,
	public IDispatchImpl<ITheCalculator, &IID_ITheCalculator, &LIBID_ComCalculatorLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTheCalculator()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_THECALCULATOR)


BEGIN_COM_MAP(CTheCalculator)
	COM_INTERFACE_ENTRY(ITheCalculator)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHOD(Add)(int left, int right, int* result);
};

OBJECT_ENTRY_AUTO(__uuidof(TheCalculator), CTheCalculator)