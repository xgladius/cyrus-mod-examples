#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/DerbyActionTargetType.h>

class MoraleModificationMap : public PropertyClass {
public:
    int getNMoraleChanceAmt() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNMoraleChanceAmt(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    DerbyActionTargetType getKActionType() { // Property Generated Getter
      return *reinterpret_cast<DerbyActionTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setKActionType(DerbyActionTargetType val) { // Property Generated Setter
      *reinterpret_cast<DerbyActionTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

};