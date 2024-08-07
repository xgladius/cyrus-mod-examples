#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetTalentsTriggeredSpellsData.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetTalentsTriggeredSpells : public PropertyClass {
public:
    List<SharedPointer<PetTalentsTriggeredSpellsData>> * getPetTalentsTriggeredSpells() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PetTalentsTriggeredSpellsData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPetTalentsTriggeredSpells(List<SharedPointer<PetTalentsTriggeredSpellsData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PetTalentsTriggeredSpellsData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};