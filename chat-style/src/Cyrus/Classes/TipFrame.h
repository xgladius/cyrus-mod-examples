#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>
#include <Cyrus/Classes/WindowLayout.h>

class TipFrame : public WindowLayout {
public:
    void ShowTips(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(TipFrame *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC17750);
        return inner(this, a0);
    }

};