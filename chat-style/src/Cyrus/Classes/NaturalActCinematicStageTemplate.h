#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicStageTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class NaturalActCinematicStageTemplate : public CinematicStageTemplate {
public:
    std::string getSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getAnimation() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setAnimation(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

};