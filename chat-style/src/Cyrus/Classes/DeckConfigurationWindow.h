#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class DeckConfigurationWindow : public Window {
public:
    void ChangeSpellPage(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(DeckConfigurationWindow *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x774620);
        return inner(this, a0);
    }

    void AddSpell() { // Function Generated
        using FunctionPointerType = void (*)(DeckConfigurationWindow *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x767EC0);
        return inner(this);
    }

    void RemoveSpell() { // Function Generated
        using FunctionPointerType = void (*)(DeckConfigurationWindow *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x767F70);
        return inner(this);
    }

};