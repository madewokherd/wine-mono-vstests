#include "pch.h"

using namespace System;
using namespace System::Threading;

int main(array<System::String ^> ^args)
{
    Thread::CurrentThread->ApartmentState = ApartmentState::STA;

    return 0;
}
