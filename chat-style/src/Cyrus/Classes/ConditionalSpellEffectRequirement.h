#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Enums/ConditionalSpellEffectRequirement__RequirementTarget.h>

class ConditionalSpellEffectRequirement : public Requirement {
public:
    ConditionalSpellEffectRequirement__RequirementTarget getTargetType() { // Property Generated Getter
      return *reinterpret_cast<ConditionalSpellEffectRequirement__RequirementTarget*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTargetType(ConditionalSpellEffectRequirement__RequirementTarget val) { // Property Generated Setter
      *reinterpret_cast<ConditionalSpellEffectRequirement__RequirementTarget*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};