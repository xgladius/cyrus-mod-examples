#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WindowAnimation.h>

class WinAnimSize : public WindowAnimation {
public:
    Size<int> getSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Size<int> GetSize() { // Function Generated
        using FunctionPointerType = Size<int> (*)(WinAnimSize *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16CA7B0);
        return inner(this);
    }

    void SetSize(int a0, int a1) { // Function Generated
        using FunctionPointerType = void (*)(WinAnimSize *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16C7660);
        return inner(this, a0, a1);
    }

};