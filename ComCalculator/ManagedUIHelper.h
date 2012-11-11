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
			return String::Format("{0} (CLR: {1})", AppDomain::CurrentDomain->FriendlyName, Environment::Version);
		}

		BSTR GetDomainBSTR()
		{
			return (BSTR)Marshal::StringToBSTR(this->GetDomain()).ToPointer();
		}
	};
}
