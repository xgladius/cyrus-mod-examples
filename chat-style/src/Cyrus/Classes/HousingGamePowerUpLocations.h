#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingGamePowerUpLocations : public PropertyClass {
public:
    List<Vector3D> getPowerupLocations() { // Property Generated Getter
      return *reinterpret_cast<List<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPowerupLocations(List<Vector3D> val) { // Property Generated Setter
      *reinterpret_cast<List<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getNumberOfNodes() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setNumberOfNodes(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};