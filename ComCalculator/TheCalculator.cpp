// TheCalculator.cpp : Implementation of CTheCalculator

#include "stdafx.h"
#include "TheCalculator.h"

STDMETHODIMP CTheCalculator::Add(int left, int right, int* result)
{
	*result = left + right;
	return S_OK;
}
