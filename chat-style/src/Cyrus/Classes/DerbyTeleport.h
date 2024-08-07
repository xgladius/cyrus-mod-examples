#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/DerbyTargetType.h>

class DerbyTeleport : public DerbyEffect {
public:
    DerbyTargetType getKTeleportToTarget() { // Property Generated Getter
      return *reinterpret_cast<DerbyTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setKTeleportToTarget(DerbyTargetType val) { // Property Generated Setter
      *reinterpret_cast<DerbyTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

};