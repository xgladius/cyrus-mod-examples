#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectBase.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PulseEffect.h>

class DOTEffect : public PulseEffect {
public:
    int getDamageOverride() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setDamageOverride(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};