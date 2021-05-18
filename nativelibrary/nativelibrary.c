#define NATIVELIBRARY_DLLEXPORT __declspec(dllexport)

#include "nativelibrary.h"

NATIVELIBRARY_DLLEXPORT
INT __cdecl test_native_fn(INT input)
{
	return input+5;
}
