#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class WindowAnimation : public PropertyClass {
public:
    bool getBUseDeepCopy() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBUseDeepCopy(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    void SetUseDeepCopy(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(WindowAnimation *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16A4400);
        return inner(this, a0);
    }

    bool GetUseDeepCopy() { // Function Generated
        using FunctionPointerType = bool (*)(WindowAnimation *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16A4410);
        return inner(this);
    }

};