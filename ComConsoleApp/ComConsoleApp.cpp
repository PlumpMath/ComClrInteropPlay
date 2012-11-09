// ComConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);

	CComPtr<IXMLDocument> document;

	document.CoCreateInstance(__uuidof(XMLDocument), NULL, CLSCTX_ALL);

	


	return 0;
}

