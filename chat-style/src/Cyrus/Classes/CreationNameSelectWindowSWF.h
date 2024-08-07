#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class CreationNameSelectWindowSWF : public Window {
public:
    void HandleDoneButtonPress() { // Function Generated
        using FunctionPointerType = void (*)(CreationNameSelectWindowSWF *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x759010);
        return inner(this);
    }

};