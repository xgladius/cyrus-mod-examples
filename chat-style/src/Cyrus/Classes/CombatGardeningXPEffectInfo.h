#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class CombatGardeningXPEffectInfo : public GameEffectInfo {
public:
    int getXpPercent() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setXpPercent(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};