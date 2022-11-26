#include "pch.h"

using namespace System;
using namespace System::Threading;

int main(array<System::String ^> ^args)
{
    if (Thread::CurrentThread->ApartmentState != ApartmentState::MTA) {
        return 1;
    }

    Thread::CurrentThread->ApartmentState = ApartmentState::STA;

    if (Thread::CurrentThread->ApartmentState != ApartmentState::MTA) {
        return 2;
    }

    return 0;
}
