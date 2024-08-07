#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientTutorial.h>
#include <Cyrus/Classes/ControlText.h>
#include <Cyrus/Classes/PropertyClass.h>

class WizardClientTutorial : public ClientTutorial {
public:
    void RequestEquipItems() { // Function Generated
        using FunctionPointerType = void (*)(WizardClientTutorial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1110100);
        return inner(this);
    }

    void RequestEquipTreasureSpells() { // Function Generated
        using FunctionPointerType = void (*)(WizardClientTutorial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1110990);
        return inner(this);
    }

    void SetTutuorialGUIState() { // Function Generated
        using FunctionPointerType = void (*)(WizardClientTutorial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1110E00);
        return inner(this);
    }

    void UnsetTutuorialGUIState() { // Function Generated
        using FunctionPointerType = void (*)(WizardClientTutorial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1110E20);
        return inner(this);
    }

    void RestoreSubscribeButton() { // Function Generated
        using FunctionPointerType = void (*)(WizardClientTutorial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1110E40);
        return inner(this);
    }

    void RequestUnequipWand() { // Function Generated
        using FunctionPointerType = void (*)(WizardClientTutorial *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1110E80);
        return inner(this);
    }

    void SetTutorialDialogText(ControlText a0, std::string a1) { // Function Generated
        using FunctionPointerType = void (*)(WizardClientTutorial *self, ControlText a0, std::string a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1111170);
        return inner(this, a0, a1);
    }

};