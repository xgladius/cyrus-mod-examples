#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/HousingTextureType.h>

class HousingTextureBehaviorTemplate : public BehaviorTemplate {
public:
    HousingTextureType getTextureType() { // Property Generated Getter
      return *reinterpret_cast<HousingTextureType*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setTextureType(HousingTextureType val) { // Property Generated Setter
      *reinterpret_cast<HousingTextureType*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getTextureFilename() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setTextureFilename(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};