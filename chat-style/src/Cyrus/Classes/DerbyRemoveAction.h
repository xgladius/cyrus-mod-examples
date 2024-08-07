#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/DerbyActionTargetType.h>

class DerbyRemoveAction : public DerbyEffect {
public:
    DerbyActionTargetType getNActionType() { // Property Generated Getter
      return *reinterpret_cast<DerbyActionTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setNActionType(DerbyActionTargetType val) { // Property Generated Setter
      *reinterpret_cast<DerbyActionTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

};