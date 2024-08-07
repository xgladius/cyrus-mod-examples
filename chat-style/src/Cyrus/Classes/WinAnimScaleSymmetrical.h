#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimScaleSymmetrical : public WindowAnimation {
public:
    float getScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    float GetScale() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimScaleSymmetrical *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1676A20);
        return inner(this);
    }

    void SetScale(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimScaleSymmetrical *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1673B90);
        return inner(this, a0);
    }

};