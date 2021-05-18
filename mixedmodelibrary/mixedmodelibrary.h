#pragma once

#include <Windows.h>

using namespace System;

#include "nativelibrary.h"

namespace mixedmodelibrary {
	public ref class TestClass
	{
	public:
		static int __clrcall call_native(int input)
		{
			return test_native_fn(input);
		}
	};
}
