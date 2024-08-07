#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class CrownsConfirmWindow : public Window {
public:
    void HandleConfirmButtonPress() { // Function Generated
        using FunctionPointerType = void (*)(CrownsConfirmWindow *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x75D770);
        return inner(this);
    }

};