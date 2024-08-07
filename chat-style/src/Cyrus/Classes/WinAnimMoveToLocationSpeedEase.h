#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimMoveToLocation.h>
#include <Cyrus/Classes/WinAnimMoveToLocationSpeed.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimMoveToLocationSpeedEase : public WinAnimMoveToLocationSpeed {
public:
    float getFEaseInPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setFEaseInPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    float getFEaseOutPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setFEaseOutPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    float getFTotalDistance() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setFTotalDistance(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    void SetEaseInPercent(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimMoveToLocationSpeedEase *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1688410);
        return inner(this, a0);
    }

    float GetEaseInPercent() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimMoveToLocationSpeedEase *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x168E3F0);
        return inner(this);
    }

    void SetEaseOutPercent(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimMoveToLocationSpeedEase *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1688460);
        return inner(this, a0);
    }

    float GetEaseOutPercent() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimMoveToLocationSpeedEase *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x168E400);
        return inner(this);
    }

};