#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellData.h>

class TreasureBookBehavior : public BehaviorInstance {
public:
    List<SharedPointer<SpellData>> * getSpellList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellData>> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setSpellList(List<SharedPointer<SpellData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellData>> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    unsigned int GetSpellCount(unsigned int a0, unsigned int a1) { // Function Generated
        using FunctionPointerType = unsigned int (*)(TreasureBookBehavior *self, unsigned int a0, unsigned int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18ABAD0);
        return inner(this, a0, a1);
    }

    unsigned int GetTotalSpellCount() { // Function Generated
        using FunctionPointerType = unsigned int (*)(TreasureBookBehavior *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18ABBB0);
        return inner(this);
    }

    SpellData* GetSpell(int a0) { // Function Generated
        using FunctionPointerType = SpellData* (*)(TreasureBookBehavior *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x18AC600);
        return inner(this, a0);
    }

};