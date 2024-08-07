#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class SpellData : public PropertyClass {
public:
    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getEnchantment() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setEnchantment(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    unsigned int getQuantity() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setQuantity(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int GetTemplateID() { // Function Generated
        using FunctionPointerType = unsigned int (*)(SpellData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16AAB00);
        return inner(this);
    }

    unsigned int GetEnchantmentID() { // Function Generated
        using FunctionPointerType = unsigned int (*)(SpellData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15FBCA0);
        return inner(this);
    }

};