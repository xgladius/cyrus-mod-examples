#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimMoveToLocation.h>
#include <Cyrus/Classes/WinAnimMoveToLocationTime.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimMoveToLocationTimeEaseApprox : public WinAnimMoveToLocationTime {
public:
    float getFEaseAmount() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setFEaseAmount(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    float getFTotalDistance() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setFTotalDistance(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    float getFSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setFSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    float getFAccelRateMult() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setFAccelRateMult(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    void SetEaseAmount(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimMoveToLocationTimeEaseApprox *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16891E0);
        return inner(this, a0);
    }

    float GetEaseAmount() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimMoveToLocationTimeEaseApprox *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x168E3E0);
        return inner(this);
    }

    void SetAccelRateMult(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimMoveToLocationTimeEaseApprox *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1689230);
        return inner(this, a0);
    }

    float GetAccelRateMult() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimMoveToLocationTimeEaseApprox *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x168E3D0);
        return inner(this);
    }

};