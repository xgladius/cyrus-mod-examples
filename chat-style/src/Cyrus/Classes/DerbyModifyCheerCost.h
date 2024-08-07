#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TerrainCheerCostMap.h>

class DerbyModifyCheerCost : public DerbyEffect {
public:
    TerrainCheerCostMap getCostMap() { // Property Generated Getter
      return *reinterpret_cast<TerrainCheerCostMap*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setCostMap(TerrainCheerCostMap val) { // Property Generated Setter
      *reinterpret_cast<TerrainCheerCostMap*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

};