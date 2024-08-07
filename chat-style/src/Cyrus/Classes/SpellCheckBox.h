#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlButton.h>
#include <Cyrus/Classes/ControlCheckBox.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class SpellCheckBox : public ControlCheckBox {
public:
    void BlockMouse(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(SpellCheckBox *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBCD900);
        return inner(this, a0);
    }

};