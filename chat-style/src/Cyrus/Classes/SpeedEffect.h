#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class SpeedEffect : public GameEffectBase {
public:
    int getSpeedMultiplier() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setSpeedMultiplier(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};