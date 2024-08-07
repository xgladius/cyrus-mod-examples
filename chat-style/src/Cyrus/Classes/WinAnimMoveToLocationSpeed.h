#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimMoveToLocation.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimMoveToLocationSpeed : public WinAnimMoveToLocation {
public:
    float getFSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setFSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float GetSpeed() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimMoveToLocationSpeed *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x146C550);
        return inner(this);
    }

    void SetSpeed(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimMoveToLocationSpeed *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1687CF0);
        return inner(this, a0);
    }

};