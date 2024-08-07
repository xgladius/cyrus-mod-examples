#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetStat.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetDerbyRacerStats : public PropertyClass {
public:
    List<PetStat> getInitialStats() { // Property Generated Getter
      return *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setInitialStats(List<PetStat> val) { // Property Generated Setter
      *reinterpret_cast<List<PetStat>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};