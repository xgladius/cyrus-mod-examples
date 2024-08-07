#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicStageTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class GiveCinematicStageTemplate : public CinematicStageTemplate {
public:
    Vector<std::string> getCameras() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setCameras(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    Vector<std::string> getAltcameras() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setAltcameras(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    std::string getAnimation() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setAnimation(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    std::string getSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

};