#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatRule.h>
#include <Cyrus/Classes/PropertyClass.h>

class DamageScalarOverride : public CombatRule {
public:
    float getScalarDamage() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setScalarDamage(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    float getScalarPierce() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setScalarPierce(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    float getScalarResist() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setScalarResist(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};