#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/GardeningShedBehaviorBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class GardeningShedBehavior : public GardeningShedBehaviorBase {
public:
    std::string getSeedData() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setSeedData(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};