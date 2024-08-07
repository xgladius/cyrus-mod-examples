#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimMoveToLocation.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimMoveToLocationTime : public WinAnimMoveToLocation {
public:
    float getFTimeRemaining() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setFTimeRemaining(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    float getFTimeTotal() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setFTimeTotal(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float GetTime() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimMoveToLocationTime *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x146C550);
        return inner(this);
    }

    void SetTime(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimMoveToLocationTime *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1688A50);
        return inner(this, a0);
    }

};