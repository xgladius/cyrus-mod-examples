#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlButtonState.h>
#include <Cyrus/Classes/PropertyClass.h>

class StaticControlButtonState : public ControlButtonState {
public:
    int getNMaterialFrame() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNMaterialFrame(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    void SetMaterialFrame(int a0) { // Function Generated
        using FunctionPointerType = void (*)(StaticControlButtonState *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB50);
        return inner(this, a0);
    }

    int GetMaterialFrame() { // Function Generated
        using FunctionPointerType = int (*)(StaticControlButtonState *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB00);
        return inner(this);
    }

};