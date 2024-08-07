#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class SoundDefTemplate : public CoreTemplate {
public:
    std::string getSoundName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setSoundName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    std::string getSoundFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setSoundFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    double getDelay() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setDelay(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

};