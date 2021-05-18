#pragma once

#ifndef NATIVELIBRARY_DLLEXPORT
# define NATIVELIBRARY_DLLEXPORT
#endif

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif
NATIVELIBRARY_DLLEXPORT extern INT __cdecl test_native_fn(INT input);
#ifdef __cplusplus
}
#endif
