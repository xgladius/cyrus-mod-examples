#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class PulseEffect : public GameEffectBase {
public:
    double getPulseCount() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setPulseCount(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};