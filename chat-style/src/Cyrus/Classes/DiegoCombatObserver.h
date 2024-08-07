#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatObserver.h>
#include <Cyrus/Classes/DiegoPlayerStats.h>
#include <Cyrus/Classes/PropertyClass.h>

class DiegoCombatObserver : public CombatObserver {
public:
    List<SharedPointer<DiegoPlayerStats>> * getPlayerStats() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DiegoPlayerStats>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPlayerStats(List<SharedPointer<DiegoPlayerStats>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DiegoPlayerStats>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};