#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/HousingTeleporterBehaviorBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingTeleporterBehavior : public HousingTeleporterBehaviorBase {
public:
    std::string getTeleportData() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setTeleportData(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

};