#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlButtonState.h>
#include <Cyrus/Classes/PropertyClass.h>

class AnimatedControlButtonState : public ControlButtonState {
public:
    int getNAnimBeginFrame() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNAnimBeginFrame(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getNAnimEndFrame() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setNAnimEndFrame(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    float getFAnimRate() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setFAnimRate(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    bool getBAnimLoop() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setBAnimLoop(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    bool getBAnimForceFinish() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x55);
    }

    void setBAnimForceFinish(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x55) = val;
    }

    void SetAnimBegin(int a0) { // Function Generated
        using FunctionPointerType = void (*)(AnimatedControlButtonState *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB50);
        return inner(this, a0);
    }

    int GetAnimBegin() { // Function Generated
        using FunctionPointerType = int (*)(AnimatedControlButtonState *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB00);
        return inner(this);
    }

    void SetAnimEnd(int a0) { // Function Generated
        using FunctionPointerType = void (*)(AnimatedControlButtonState *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB60);
        return inner(this, a0);
    }

    int GetAnimEnd() { // Function Generated
        using FunctionPointerType = int (*)(AnimatedControlButtonState *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15FBCA0);
        return inner(this);
    }

    void SetAnimRate(float a0) { // Function Generated
        using FunctionPointerType = void (*)(AnimatedControlButtonState *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16A7D80);
        return inner(this, a0);
    }

    float GetAnimRate() { // Function Generated
        using FunctionPointerType = float (*)(AnimatedControlButtonState *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1676A20);
        return inner(this);
    }

    void SetAnimLooping(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(AnimatedControlButtonState *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB80);
        return inner(this, a0);
    }

    bool IsAnimLooping() { // Function Generated
        using FunctionPointerType = bool (*)(AnimatedControlButtonState *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB40);
        return inner(this);
    }

    void SetAnimForceFinish(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(AnimatedControlButtonState *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB70);
        return inner(this, a0);
    }

    bool IsAnimForceFinish() { // Function Generated
        using FunctionPointerType = bool (*)(AnimatedControlButtonState *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB30);
        return inner(this);
    }

};