#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/SpellEffect__kHangingDisposition.h>
#include <Cyrus/Enums/SpellEffect__kSpellEffects.h>

class SpellEffectPenalty : public PropertyClass {
public:
    SpellEffect__kSpellEffects getEffectType() { // Property Generated Getter
      return *reinterpret_cast<SpellEffect__kSpellEffects*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEffectType(SpellEffect__kSpellEffects val) { // Property Generated Setter
      *reinterpret_cast<SpellEffect__kSpellEffects*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SpellEffect__kHangingDisposition getDisposition() { // Property Generated Getter
      return *reinterpret_cast<SpellEffect__kHangingDisposition*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setDisposition(SpellEffect__kHangingDisposition val) { // Property Generated Setter
      *reinterpret_cast<SpellEffect__kHangingDisposition*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    int getPenaltyTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPenaltyTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};