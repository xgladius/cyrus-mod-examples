#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TieredSpellGroup.h>

class TieredSpellConfig : public PropertyClass {
public:
    List<SharedPointer<TieredSpellGroup>> * getTieredSpellGroupList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<TieredSpellGroup>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTieredSpellGroupList(List<SharedPointer<TieredSpellGroup>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<TieredSpellGroup>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};