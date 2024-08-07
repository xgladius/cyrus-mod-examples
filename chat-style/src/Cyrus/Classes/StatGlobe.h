#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlSprite.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class StatGlobe : public ControlSprite {
public:
    int getAmount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x320);
    }

    void setAmount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x320) = val;
    }

    void UpdateMeter() { // Function Generated
        using FunctionPointerType = void (*)(StatGlobe *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x558C1C);
        return inner(this);
    }

    void SetTutorialMode(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(StatGlobe *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBDD190);
        return inner(this, a0);
    }

    bool GetTutorialMode() { // Function Generated
        using FunctionPointerType = bool (*)(StatGlobe *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBDD1A0);
        return inner(this);
    }

    int GetCurrentAmount() { // Function Generated
        using FunctionPointerType = int (*)(StatGlobe *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBDD110);
        return inner(this);
    }

    void SetCurrentAmount(int a0) { // Function Generated
        using FunctionPointerType = void (*)(StatGlobe *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBDD120);
        return inner(this, a0);
    }

    int GetMaxAmount() { // Function Generated
        using FunctionPointerType = int (*)(StatGlobe *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBDD140);
        return inner(this);
    }

    void SetMaxAmount(int a0) { // Function Generated
        using FunctionPointerType = void (*)(StatGlobe *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBDD150);
        return inner(this, a0);
    }

    void SetBothAmounts(int a0, int a1) { // Function Generated
        using FunctionPointerType = void (*)(StatGlobe *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBDD170);
        return inner(this, a0, a1);
    }

};