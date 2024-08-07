#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlText.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlTextAlert : public ControlText {
public:
    float getFadeInDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2B8);
    }

    void setFadeInDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2B8) = val;
    }

    float getIdleDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2BC);
    }

    void setIdleDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2BC) = val;
    }

    float getFadeOutDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C0);
    }

    void setFadeOutDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C0) = val;
    }

    unsigned int getEaseInFunction() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2CC);
    }

    void setEaseInFunction(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2CC) = val;
    }

    unsigned int getEaseOutFunction() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2D0);
    }

    void setEaseOutFunction(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2D0) = val;
    }

};