#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/JewelVaultBehaviorBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class JewelVaultBehavior : public JewelVaultBehaviorBase {
public:
    std::string getJewelData() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setJewelData(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};