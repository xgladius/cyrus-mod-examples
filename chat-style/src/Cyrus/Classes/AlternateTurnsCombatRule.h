#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatRule.h>
#include <Cyrus/Classes/PropertyClass.h>

class AlternateTurnsCombatRule : public CombatRule {
public:
    bool getAlternateTurns() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAlternateTurns(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    bool getPipsForBothTeamsAtOnce() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x49);
    }

    void setPipsForBothTeamsAtOnce(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x49) = val;
    }

};