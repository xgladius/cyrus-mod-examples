#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class PolymorphBattlegroundsBehavior : public BehaviorInstance {
public:
    int getMaxTempStartingPips() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setMaxTempStartingPips(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getMaxTempStartingPowerPips() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setMaxTempStartingPowerPips(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

};