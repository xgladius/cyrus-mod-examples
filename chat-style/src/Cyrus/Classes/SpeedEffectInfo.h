#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class SpeedEffectInfo : public GameEffectInfo {
public:
    int getSpeedMultiplier() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSpeedMultiplier(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};