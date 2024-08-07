#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimMoveToLocation.h>
#include <Cyrus/Classes/WinAnimMoveToLocationTime.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimMoveToLocationTimeEase : public WinAnimMoveToLocationTime {
public:
    float getFEaseInPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setFEaseInPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    float getFEaseOutPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setFEaseOutPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    float getFTotalDistance() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setFTotalDistance(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    void SetEaseInPercent(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimMoveToLocationTimeEase *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16899A0);
        return inner(this, a0);
    }

    float GetEaseInPercent() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimMoveToLocationTimeEase *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x168E3E0);
        return inner(this);
    }

    void SetEaseOutPercent(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimMoveToLocationTimeEase *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16899F0);
        return inner(this, a0);
    }

    float GetEaseOutPercent() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimMoveToLocationTimeEase *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x168E410);
        return inner(this);
    }

};