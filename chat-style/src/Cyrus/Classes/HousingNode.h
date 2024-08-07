#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/HousingNode__ConnectionType.h>
#include <Cyrus/Enums/HousingNode__ExclusiveRestrictions.h>

class HousingNode : public PropertyClass {
public:
    HousingNode__ConnectionType getConnectionType() { // Property Generated Getter
      return *reinterpret_cast<HousingNode__ConnectionType*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setConnectionType(HousingNode__ConnectionType val) { // Property Generated Setter
      *reinterpret_cast<HousingNode__ConnectionType*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getLocationType() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setLocationType(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    HousingNode__ExclusiveRestrictions getExclusiveRestrictions() { // Property Generated Getter
      return *reinterpret_cast<HousingNode__ExclusiveRestrictions*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setExclusiveRestrictions(HousingNode__ExclusiveRestrictions val) { // Property Generated Setter
      *reinterpret_cast<HousingNode__ExclusiveRestrictions*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    bool getSupportSurface() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setSupportSurface(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    Vector3D getPosition() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPosition(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};