// CalculatorApplication.h : Declaration of the CCalculatorApplication

#pragma once
#include "resource.h"       // main symbols

// STL
#include <map>
#include <string>

// ATL
#include "ComCalculator_i.h"

// CLR
#include <vcclr.h>

// Application
#include "ManagedUIHelper.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCalculatorApplication

class ATL_NO_VTABLE CCalculatorApplication :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCalculatorApplication, &CLSID_CalculatorApplication>,
	public IDispatchImpl<ICalculatorApplication, &IID_ICalculatorApplication, &LIBID_ComCalculatorLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
private:
	gcroot<ComCalculator::ManagedUIHelper^> mUIHelperInDomain1;
	gcroot<ComCalculator::ManagedUIHelper^> mUIHelperInDomain2;
	std::map<std::wstring, ICalculatorPlugin*> mPlugins;

public:
	CCalculatorApplication();

	DECLARE_REGISTRY_RESOURCEID(IDR_CALCULATORAPPLICATION)


	BEGIN_COM_MAP(CCalculatorApplication)
		COM_INTERFACE_ENTRY(ICalculatorApplication)
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
	STDMETHOD(GetPlugin)(BSTR progId, ICalculatorPlugin** result);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(GetDomainOfManagedHelperInDefaultDomain)(BSTR* result);
	STDMETHOD(GetDomainOfManagedHelperInOtherDomain)(BSTR* result);
};

OBJECT_ENTRY_AUTO(__uuidof(CalculatorApplication), CCalculatorApplication)
