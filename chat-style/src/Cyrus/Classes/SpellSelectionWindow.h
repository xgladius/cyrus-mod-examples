#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellCheckBox.h>
#include <Cyrus/Classes/Window.h>

class SpellSelectionWindow : public Window {
public:
    SharedPointer<SpellCheckBox> GetSpellCheckBox(int a0) { // Function Generated
        using FunctionPointerType = SharedPointer<SpellCheckBox> (*)(SpellSelectionWindow *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBDA000);
        return inner(this, a0);
    }

};