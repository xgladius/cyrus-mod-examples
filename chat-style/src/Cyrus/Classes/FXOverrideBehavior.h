#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/ClientEquipmentBehavior.h>
#include <Cyrus/Classes/FXOverrideBehaviorInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class FXOverrideBehavior : public ClientEquipmentBehavior {
public:
    FXOverrideBehaviorInfo getFXOverrideBehaviorInfo() { // Property Generated Getter
      return *reinterpret_cast<FXOverrideBehaviorInfo*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setFXOverrideBehaviorInfo(FXOverrideBehaviorInfo val) { // Property Generated Setter
      *reinterpret_cast<FXOverrideBehaviorInfo*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

};