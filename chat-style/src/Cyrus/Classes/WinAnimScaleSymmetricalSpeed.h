#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimScaleSymmetrical.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimScaleSymmetricalSpeed : public WinAnimScaleSymmetrical {
public:
    float getFSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setFSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    void SetSpeed(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimScaleSymmetricalSpeed *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1673FB0);
        return inner(this, a0);
    }

    float GetSpeed() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimScaleSymmetricalSpeed *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41F70);
        return inner(this);
    }

};