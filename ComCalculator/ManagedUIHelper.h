#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;

namespace ComCalculator {
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for ManagedUIHelper
	/// </summary>
	public ref class ManagedUIHelper
	{
	private:

	public:
		ManagedUIHelper(void)
		{
		}

		String^ GetDomain()
		{
			return AppDomain::CurrentDomain->FriendlyName;
		}

		BSTR GetDomainBSTR()
		{
			return (BSTR)Marshal::StringToBSTR(this->GetDomain()).ToPointer();
		}
	};
}
