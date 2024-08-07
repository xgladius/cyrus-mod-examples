#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetDerbyRacerState.h>
#include <Cyrus/Classes/PetDerbyRacerStats.h>
#include <Cyrus/Classes/PropertyClass.h>

class DerbyPlayerContainer : public PropertyClass {
public:
    List<PetDerbyRacerState> getRacerStates() { // Property Generated Getter
      return *reinterpret_cast<List<PetDerbyRacerState>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRacerStates(List<PetDerbyRacerState> val) { // Property Generated Setter
      *reinterpret_cast<List<PetDerbyRacerState>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<PetDerbyRacerStats> getRacerStats() { // Property Generated Getter
      return *reinterpret_cast<List<PetDerbyRacerStats>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setRacerStats(List<PetDerbyRacerStats> val) { // Property Generated Setter
      *reinterpret_cast<List<PetDerbyRacerStats>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    unsigned int getNumberOfLaps() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setNumberOfLaps(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};