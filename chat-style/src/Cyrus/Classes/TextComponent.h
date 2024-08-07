#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class TextComponent : public PropertyClass {
public:
    bool getUseDropShadow() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setUseDropShadow(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    bool getUseOutline() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x61);
    }

    void setUseOutline(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x61) = val;
    }

    int AddText(int a0, int a1, std::wstring a2) { // Function Generated
        using FunctionPointerType = int (*)(TextComponent *self, int a0, int a1, std::wstring a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E3D80);
        return inner(this, a0, a1, a2);
    }

    void ClearText() { // Function Generated
        using FunctionPointerType = void (*)(TextComponent *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15E4070);
        return inner(this);
    }

};