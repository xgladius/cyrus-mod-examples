#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/DerbyTerrainTargetType.h>

class TerrainCheerCostMap : public PropertyClass {
public:
    int getNCostChangeAmt() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNCostChangeAmt(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    DerbyTerrainTargetType getKTerrainType() { // Property Generated Getter
      return *reinterpret_cast<DerbyTerrainTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setKTerrainType(DerbyTerrainTargetType val) { // Property Generated Setter
      *reinterpret_cast<DerbyTerrainTargetType*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

};