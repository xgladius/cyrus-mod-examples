#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ToolTipWindow : public Window {
public:
    void Initialize(Window a0) { // Function Generated
        using FunctionPointerType = void (*)(ToolTipWindow *self, Window a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC1C1E0);
        return inner(this, a0);
    }

    void SetOwnerWindow(Window a0) { // Function Generated
        using FunctionPointerType = void (*)(ToolTipWindow *self, Window a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC1C210);
        return inner(this, a0);
    }

    void SetMaxWidth(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ToolTipWindow *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC20370);
        return inner(this, a0);
    }

    void SetMinWidth(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ToolTipWindow *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC20380);
        return inner(this, a0);
    }

};