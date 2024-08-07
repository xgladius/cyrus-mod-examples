#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimScale.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimScaleSpeed : public WinAnimScale {
public:
    float getFSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setFSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    void SetSpeed(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimScaleSpeed *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x169EA30);
        return inner(this, a0);
    }

    float GetSpeed() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimScaleSpeed *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x146C550);
        return inner(this);
    }

};