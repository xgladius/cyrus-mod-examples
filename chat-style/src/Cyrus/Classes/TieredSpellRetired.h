#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TieredSpellRetiredSpellData.h>

class TieredSpellRetired : public PropertyClass {
public:
    List<SharedPointer<TieredSpellRetiredSpellData>> * getTieredSpellRetiredList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<TieredSpellRetiredSpellData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTieredSpellRetiredList(List<SharedPointer<TieredSpellRetiredSpellData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<TieredSpellRetiredSpellData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};