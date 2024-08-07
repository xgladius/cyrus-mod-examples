#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObjectInfo.h>
#include <Cyrus/Classes/CoreObjectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundEmitterInfo.h>
#include <Cyrus/Classes/SoundInfo.h>

class PositionalSoundEmitterInfo : public SoundEmitterInfo {
public:
    float getInnerRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setInnerRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    std::string getNifObjName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setNifObjName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    std::string getAnimNIFObjName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setAnimNIFObjName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    bool getInverted() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setInverted(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    float getInitialDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1DC);
    }

    void setInitialDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1DC) = val;
    }

};