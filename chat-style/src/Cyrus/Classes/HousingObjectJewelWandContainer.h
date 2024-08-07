#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HousingObjectWandContainer.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingObjectJewelWandContainer : public HousingObjectWandContainer {
public:
    std::string getJewelBuffer() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setJewelBuffer(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};