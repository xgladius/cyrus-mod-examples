#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HousingBlobObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingBlobCustomObject : public HousingBlobObject {
public:
    std::string getCustomData() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setCustomData(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};