#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellData.h>

class SpellDataList : public PropertyClass {
public:
    List<SharedPointer<SpellData>> * getSpellDataList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSpellDataList(List<SharedPointer<SpellData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};