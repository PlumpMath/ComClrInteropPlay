// ComConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#import "../ComCalculator/Debug/ComCalculator.tlb" no_namespace

// using namespace ComCalculatorLib;

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);


	CComPtr<ITheCalculator> calc;

	CLSID addin = __uuidof(TheCalculator);

	HRESULT gotClassId = CLSIDFromProgID(L"ComPlugin.MyCalculator", &addin);

	HRESULT gotCalc = calc.CoCreateInstance(addin, NULL, CLSCTX_ALL);

	int result = calc->Add(3, 4);


	return 0;
}

