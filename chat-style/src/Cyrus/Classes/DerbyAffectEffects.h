#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PropertyClass.h>

class DerbyAffectEffects : public DerbyEffect {
public:
    int getNNumBuffs() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setNNumBuffs(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    int getNNumDebuffs() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x17C);
    }

    void setNNumDebuffs(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x17C) = val;
    }

};