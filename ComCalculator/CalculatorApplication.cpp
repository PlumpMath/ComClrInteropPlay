// CalculatorApplication.cpp : Implementation of CCalculatorApplication

#include "stdafx.h"
#include "CalculatorApplication.h"


// CCalculatorApplication
CCalculatorApplication::CCalculatorApplication()
{
}


STDMETHODIMP CCalculatorApplication::LoadPlugin(BSTR progId)
{
	
	// Load plugins
	CComPtr<ITheCalculator> calc;

	CLSID addin = __uuidof(TheCalculator);

	HRESULT gotClassId = CLSIDFromProgID(progId, &addin);

	HRESULT gotCalc = calc.CoCreateInstance(addin, NULL, CLSCTX_ALL);

	int addResult;

	calc->Add(3, 4, &addResult);

	return S_OK;
}
