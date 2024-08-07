#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GardenPlant.h>
#include <Cyrus/Classes/PropertyClass.h>

class GardenData : public PropertyClass {
public:
    List<GardenPlant> getPlantList() { // Property Generated Getter
      return *reinterpret_cast<List<GardenPlant>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPlantList(List<GardenPlant> val) { // Property Generated Setter
      *reinterpret_cast<List<GardenPlant>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};