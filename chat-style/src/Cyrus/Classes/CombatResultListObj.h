#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatResult.h>
#include <Cyrus/Classes/PropertyClass.h>

class CombatResultListObj : public PropertyClass {
public:
    List<CombatResult> getResultList() { // Property Generated Getter
      return *reinterpret_cast<List<CombatResult>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setResultList(List<CombatResult> val) { // Property Generated Setter
      *reinterpret_cast<List<CombatResult>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned __int64 getDuelID.full() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDuelID.full(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};