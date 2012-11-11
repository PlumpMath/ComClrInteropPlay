// CalculatorApplication.cpp : Implementation of CCalculatorApplication

#include "stdafx.h"
#include "CalculatorApplication.h"


// CCalculatorApplication
CCalculatorApplication::CCalculatorApplication()
{
}


STDMETHODIMP CCalculatorApplication::GetPlugin(BSTR progId, ICalculatorPlugin** result)
{
	
	// See if we've already loaded the plugin
	auto existing = mPlugins.find(progId);

	if ( existing != mPlugins.end() )
	{
		*result = existing->second;
		return S_OK;
	}	

	// Load the plugin
	CComPtr<ICalculatorPlugin> calc;
	CLSID addin;
	HRESULT gotClassId = CLSIDFromProgID(progId, &addin);
	HRESULT gotCalc = calc.CoCreateInstance(addin, NULL, CLSCTX_ALL);

	// Initialize it
	CComQIPtr<ICalculatorApplication> application(this);
	calc->Initialize(application);
	
	// Cache 	
	mPlugins.insert(std::make_pair(progId, calc));

	// Make sure we detach the CComPtr for the plugin!
	*result = calc.Detach();
	return S_OK;
}


STDMETHODIMP CCalculatorApplication::get_Name(BSTR* pVal)
{
	*pVal = CComBSTR("Super Calculator Application").Detach();
	return S_OK;
}
