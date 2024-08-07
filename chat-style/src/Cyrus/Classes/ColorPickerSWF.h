#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ColorPickerSWF : public Window {
public:
    void HandleBuyButtonPress() { // Function Generated
        using FunctionPointerType = void (*)(ColorPickerSWF *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x6E92C0);
        return inner(this);
    }

};