#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimContainer : public WindowAnimation {
public:
    List<SharedPointer<WindowAnimation>> * getWinAnimList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<WindowAnimation>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setWinAnimList(List<SharedPointer<WindowAnimation>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<WindowAnimation>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    bool getBLooping() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setBLooping(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    void AddAnimation(WindowAnimation a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimContainer *self, WindowAnimation a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1699E10);
        return inner(this, a0);
    }

    void SetLooping(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimContainer *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x169E2C0);
        return inner(this, a0);
    }

    bool GetLooping() { // Function Generated
        using FunctionPointerType = bool (*)(WinAnimContainer *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x169E270);
        return inner(this);
    }

};