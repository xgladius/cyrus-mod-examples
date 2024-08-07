#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlText.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class MatchTimerControl : public ControlText {
public:
    unsigned int getAlertSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2BC);
    }

    void setAlertSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2BC) = val;
    }

    unsigned int getAlertSeconds2() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2C0);
    }

    void setAlertSeconds2(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2C0) = val;
    }

    float getBlinkRate() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C4);
    }

    void setBlinkRate(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C4) = val;
    }

};