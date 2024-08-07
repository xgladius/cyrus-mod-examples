#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlSprite.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class DdSprite : public ControlSprite {
public:
    int GetHeight() { // Function Generated
        using FunctionPointerType = int (*)(DdSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF36730);
        return inner(this);
    }

    int GetWidth() { // Function Generated
        using FunctionPointerType = int (*)(DdSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF36760);
        return inner(this);
    }

    int GetState() { // Function Generated
        using FunctionPointerType = int (*)(DdSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF36790);
        return inner(this);
    }

    void SetState(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DdSprite *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF367A0);
        return inner(this, a0);
    }

    float GetSpeed() { // Function Generated
        using FunctionPointerType = float (*)(DdSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF367C0);
        return inner(this);
    }

    void SetSpeed(float a0) { // Function Generated
        using FunctionPointerType = void (*)(DdSprite *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF367D0);
        return inner(this, a0);
    }

    int GetFacing() { // Function Generated
        using FunctionPointerType = int (*)(DdSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF367F0);
        return inner(this);
    }

    void FaceDirection(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DdSprite *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF368E0);
        return inner(this, a0);
    }

    void SetHealTime(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DdSprite *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x558C1C);
        return inner(this, a0);
    }

    void Die() { // Function Generated
        using FunctionPointerType = void (*)(DdSprite *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x74A3BC);
        return inner(this);
    }

};