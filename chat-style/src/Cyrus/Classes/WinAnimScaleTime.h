#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimScale.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimScaleTime : public WinAnimScale {
public:
    float getFTimeTotal() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setFTimeTotal(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float getFTimeRemaining() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setFTimeRemaining(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    void SetTime(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimScaleTime *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x169EF10);
        return inner(this, a0);
    }

    float GetTime() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimScaleTime *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x146C550);
        return inner(this);
    }

    float GetTimeRemaining() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimScaleTime *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14C1810);
        return inner(this);
    }

};