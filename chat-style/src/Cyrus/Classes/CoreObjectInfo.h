#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>
#include <Cyrus/Enums/CoreObjectInfo__LoadingType.h>

class CoreObjectInfo : public PropertyClass {
public:
    unsigned __int64 getTemplateID.full() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTemplateID.full(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getNObjectID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setNObjectID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Vector3D getLocation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setLocation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    Vector3D getOrientation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setOrientation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float getFScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setFScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    std::string getZoneTag() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setZoneTag(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getStartState() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setStartState(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    std::string getOverrideName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setOverrideName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getGlobalDynamic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setGlobalDynamic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    bool getBUndetectable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setBUndetectable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    SharedPointer<RequirementList> * getSpawnRequirements() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<RequirementList> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setSpawnRequirements(SharedPointer<RequirementList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<RequirementList> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    CoreObjectInfo__LoadingType getLoadingType() { // Property Generated Getter
      return *reinterpret_cast<CoreObjectInfo__LoadingType*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setLoadingType(CoreObjectInfo__LoadingType val) { // Property Generated Setter
      *reinterpret_cast<CoreObjectInfo__LoadingType*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};