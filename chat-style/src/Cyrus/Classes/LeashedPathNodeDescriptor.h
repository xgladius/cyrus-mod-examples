#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/NodeDescriptor.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/LeashedPathNodeType.h>

class LeashedPathNodeDescriptor : public NodeDescriptor {
public:
    LeashedPathNodeType getNodeType() { // Property Generated Getter
      return *reinterpret_cast<LeashedPathNodeType*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNodeType(LeashedPathNodeType val) { // Property Generated Setter
      *reinterpret_cast<LeashedPathNodeType*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getAnimationName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setAnimationName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    std::string getTeleportToZone() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setTeleportToZone(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getZoneLocation() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setZoneLocation(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    float getSpeedScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setSpeedScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

};