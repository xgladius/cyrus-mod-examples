#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ConditionalSpellEffectRequirement.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Enums/ReqCombatStatus__kStatusEffect.h>

class ReqCombatStatus : public ConditionalSpellEffectRequirement {
public:
    ReqCombatStatus__kStatusEffect getStatus() { // Property Generated Getter
      return *reinterpret_cast<ReqCombatStatus__kStatusEffect*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setStatus(ReqCombatStatus__kStatusEffect val) { // Property Generated Setter
      *reinterpret_cast<ReqCombatStatus__kStatusEffect*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};