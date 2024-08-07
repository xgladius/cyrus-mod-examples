#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class PulseEffectTemplate : public GameEffectTemplate {
public:
    double getPulsePeriod() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setPulsePeriod(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    std::string getPulseEventName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setPulseEventName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

};