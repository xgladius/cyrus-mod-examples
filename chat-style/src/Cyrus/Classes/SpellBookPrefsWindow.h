#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class SpellBookPrefsWindow : public Window {
public:
    void EnableTabButton(std::string a0, bool a1) { // Function Generated
        using FunctionPointerType = void (*)(SpellBookPrefsWindow *self, std::string a0, bool a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBCA0B0);
        return inner(this, a0, a1);
    }

    void SwitchTab(std::string a0) { // Function Generated
        using FunctionPointerType = void (*)(SpellBookPrefsWindow *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBC7CD0);
        return inner(this, a0);
    }

    unsigned int GetCurrentPage() { // Function Generated
        using FunctionPointerType = unsigned int (*)(SpellBookPrefsWindow *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBC99D0);
        return inner(this);
    }

};