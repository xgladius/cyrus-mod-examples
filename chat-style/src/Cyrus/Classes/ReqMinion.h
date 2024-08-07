#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ConditionalSpellEffectRequirement.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Enums/ReqMinion__MinionType.h>

class ReqMinion : public ConditionalSpellEffectRequirement {
public:
    ReqMinion__MinionType getMinionType() { // Property Generated Getter
      return *reinterpret_cast<ReqMinion__MinionType*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setMinionType(ReqMinion__MinionType val) { // Property Generated Setter
      *reinterpret_cast<ReqMinion__MinionType*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};