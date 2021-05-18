#include "mixedmodelibrary.h"

extern "C" {
	__declspec(dllexport) INT __cdecl test_mixed_export(INT input)
	{
		return mixedmodelibrary::TestClass::call_native(input);
	}
}