#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ConditionalSpellEffectRequirement.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Enums/SpellEffect__kSpellEffects.h>

class ReqHangingEffectType : public ConditionalSpellEffectRequirement {
public:
    SpellEffect__kSpellEffects getEffectType() { // Property Generated Getter
      return *reinterpret_cast<SpellEffect__kSpellEffects*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setEffectType(SpellEffect__kSpellEffects val) { // Property Generated Setter
      *reinterpret_cast<SpellEffect__kSpellEffects*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int getParalow() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setParalow(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    int getParahigh() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setParahigh(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    int getMin_count() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setMin_count(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    int getMax_count() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setMax_count(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};