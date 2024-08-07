#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimAlphaFade : public WindowAnimation {
public:
    float getFCycleTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setFCycleTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    float getFElapsedTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setFElapsedTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    bool getCycle() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setCycle(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    bool getAllowAlphaCycle() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5D);
    }

    void setAllowAlphaCycle(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x5D) = val;
    }

    void SetCycleTime(float a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimAlphaFade *self, float a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16A7D80);
        return inner(this, a0);
    }

    void SetCycle(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimAlphaFade *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC42200);
        return inner(this, a0);
    }

};