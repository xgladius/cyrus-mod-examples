#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ComboItem : public PropertyClass {
public:
    std::wstring getSText() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSText(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getDwFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setDwFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::basic_string<wchar_t,struct std::char_traits<wchar_t>,std::allocator<wchar_t> > GetText() { // Function Generated
        using FunctionPointerType = std::basic_string<wchar_t,struct std::char_traits<wchar_t>,std::allocator<wchar_t> > (*)(ComboItem *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1435180);
        return inner(this);
    }

    void SetText(std::wstring a0) { // Function Generated
        using FunctionPointerType = void (*)(ComboItem *self, std::wstring a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163CA40);
        return inner(this, a0);
    }

    unsigned int GetFlags() { // Function Generated
        using FunctionPointerType = unsigned int (*)(ComboItem *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x132F600);
        return inner(this);
    }

    void SetFlags(unsigned int a0) { // Function Generated
        using FunctionPointerType = void (*)(ComboItem *self, unsigned int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x132F620);
        return inner(this, a0);
    }

};