// CalculatorApplication.cpp : Implementation of CCalculatorApplication

#include "stdafx.h"
#include "CalculatorApplication.h"


// CCalculatorApplication
CCalculatorApplication::CCalculatorApplication()
{
}


STDMETHODIMP CCalculatorApplication::LoadPlugin(BSTR progId)
{
	
	// Load the plugin
	CComPtr<ITheCalculator> calc;
	CLSID addin;
	HRESULT gotClassId = CLSIDFromProgID(progId, &addin);
	HRESULT gotCalc = calc.CoCreateInstance(addin, NULL, CLSCTX_ALL);

	// Initialize it
	CComQIPtr<ICalculatorApplication> application(this);
	calc->Initialize(application);


	int addResult;

	calc->Add(3, 4, &addResult);

	return S_OK;
}


STDMETHODIMP CCalculatorApplication::get_Name(BSTR* pVal)
{
	*pVal = CComBSTR("Super Calculator Application").Detach();
	return S_OK;
}
