#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ConditionalSpellEffectRequirement.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>

class ReqCombatHealth : public ConditionalSpellEffectRequirement {
public:
    float getFMinPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setFMinPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    float getFMaxPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setFMaxPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

};