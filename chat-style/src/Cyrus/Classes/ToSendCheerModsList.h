#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TerrainCheerCostMap.h>

class ToSendCheerModsList : public PropertyClass {
public:
    List<TerrainCheerCostMap> getList() { // Property Generated Getter
      return *reinterpret_cast<List<TerrainCheerCostMap>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setList(List<TerrainCheerCostMap> val) { // Property Generated Setter
      *reinterpret_cast<List<TerrainCheerCostMap>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};