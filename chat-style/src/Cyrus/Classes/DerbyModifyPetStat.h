#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PetStatModificationSet.h>
#include <Cyrus/Classes/PropertyClass.h>

class DerbyModifyPetStat : public DerbyEffect {
public:
    PetStatModificationSet getMods() { // Property Generated Getter
      return *reinterpret_cast<PetStatModificationSet*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setMods(PetStatModificationSet val) { // Property Generated Setter
      *reinterpret_cast<PetStatModificationSet*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

};