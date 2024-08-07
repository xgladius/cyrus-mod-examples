#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Body.h>
#include <Cyrus/Classes/PropertyClass.h>

class GamebryoBody : public Body {
public:
    void Hide(int a0, bool a1) { // Function Generated
        using FunctionPointerType = void (*)(GamebryoBody *self, int a0, bool a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163F844);
        return inner(this, a0, a1);
    }

    bool IsHidden() { // Function Generated
        using FunctionPointerType = bool (*)(GamebryoBody *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x175FF90);
        return inner(this);
    }

    void Show(int a0) { // Function Generated
        using FunctionPointerType = void (*)(GamebryoBody *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x161FCA4);
        return inner(this, a0);
    }

    bool IsShown() { // Function Generated
        using FunctionPointerType = bool (*)(GamebryoBody *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1760030);
        return inner(this);
    }

    void SetFadeTime(float a0) { // Function Generated
        using FunctionPointerType = void (*)(GamebryoBody *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1769CA0);
        return inner(this, a0);
    }

    float GetFadeTime() { // Function Generated
        using FunctionPointerType = float (*)(GamebryoBody *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1769480);
        return inner(this);
    }

    void SetSelected(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(GamebryoBody *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xCA2430);
        return inner(this, a0);
    }

    void SetGlow(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(GamebryoBody *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xCA243C);
        return inner(this, a0);
    }

    void SetAlpha(float a0, int a1, bool a2, bool a3, bool a4) { // Function Generated
        using FunctionPointerType = void (*)(GamebryoBody *self, float a0, int a1, bool a2, bool a3, bool a4);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1764170);
        return inner(this, a0, a1, a2, a3, a4);
    }

    float GetAlpha() { // Function Generated
        using FunctionPointerType = float (*)(GamebryoBody *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1769370);
        return inner(this);
    }

};