#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ConditionalSpellEffectRequirement.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Enums/SpellEffect__kHangingDisposition.h>
#include <Cyrus/Enums/SpellEffect__kSpellEffects.h>

class ReqHangingAura : public ConditionalSpellEffectRequirement {
public:
    SpellEffect__kSpellEffects getEffectType() { // Property Generated Getter
      return *reinterpret_cast<SpellEffect__kSpellEffects*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setEffectType(SpellEffect__kSpellEffects val) { // Property Generated Setter
      *reinterpret_cast<SpellEffect__kSpellEffects*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    SpellEffect__kHangingDisposition getDisposition() { // Property Generated Getter
      return *reinterpret_cast<SpellEffect__kHangingDisposition*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setDisposition(SpellEffect__kHangingDisposition val) { // Property Generated Setter
      *reinterpret_cast<SpellEffect__kHangingDisposition*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    bool getAnyType() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setAnyType(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    bool getGlobalEffect() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x61);
    }

    void setGlobalEffect(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x61) = val;
    }

};