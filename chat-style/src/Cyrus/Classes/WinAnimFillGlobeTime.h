#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimFillGlobeTime : public WindowAnimation {
public:
    int getNAmount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setNAmount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    float getFTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setFTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    float getFTimeRemaining() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setFTimeRemaining(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    bool getBEndTutorialOnFinish() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setBEndTutorialOnFinish(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    int GetAmount() { // Function Generated
        using FunctionPointerType = int (*)(WinAnimFillGlobeTime *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41EC0);
        return inner(this);
    }

    void SetAmount(int a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimFillGlobeTime *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC421F0);
        return inner(this, a0);
    }

    float GetTime() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimFillGlobeTime *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41F60);
        return inner(this);
    }

    void SetTime(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimFillGlobeTime *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC404B0);
        return inner(this, a0);
    }

    float GetTimeRemaining() { // Function Generated
        using FunctionPointerType = float (*)(WinAnimFillGlobeTime *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41F70);
        return inner(this);
    }

    bool GetEndTutorialOnFinish() { // Function Generated
        using FunctionPointerType = bool (*)(WinAnimFillGlobeTime *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41F20);
        return inner(this);
    }

    void SetEndTutorialOnFinish(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimFillGlobeTime *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC42200);
        return inner(this, a0);
    }

};