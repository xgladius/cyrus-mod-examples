#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class RaidPortalBehaviorTemplate : public BehaviorTemplate {
public:
    std::string getActiveStateName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setActiveStateName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getInactiveStateName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setInactiveStateName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    Vector<std::string> getZoneList() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setZoneList(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    std::string getZoneTeleportLocation() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setZoneTeleportLocation(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    int getPlayerCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setPlayerCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    unsigned int getLockObjectTID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF4);
    }

    void setLockObjectTID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF4) = val;
    }

    Vector3D getLockObjectOffset() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setLockObjectOffset(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    std::string getUnlockedStateName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setUnlockedStateName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    unsigned int getChargeObjectTID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setChargeObjectTID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    Vector3D getChargeObjectOffset() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x12C);
    }

    void setChargeObjectOffset(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x12C) = val;
    }

};