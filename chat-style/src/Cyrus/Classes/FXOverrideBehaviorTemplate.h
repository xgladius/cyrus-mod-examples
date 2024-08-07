#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/FXOverrideBehaviorInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class FXOverrideBehaviorTemplate : public BehaviorTemplate {
public:
    FXOverrideBehaviorInfo getFXOverrideBehaviorInfo() { // Property Generated Getter
      return *reinterpret_cast<FXOverrideBehaviorInfo*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setFXOverrideBehaviorInfo(FXOverrideBehaviorInfo val) { // Property Generated Setter
      *reinterpret_cast<FXOverrideBehaviorInfo*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};