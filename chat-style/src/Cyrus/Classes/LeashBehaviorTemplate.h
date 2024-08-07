#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/LeashType.h>

class LeashBehaviorTemplate : public BehaviorTemplate {
public:
    float getRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    float getAngle() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setAngle(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    LeashType getLeashType() { // Property Generated Getter
      return *reinterpret_cast<LeashType*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setLeashType(LeashType val) { // Property Generated Setter
      *reinterpret_cast<LeashType*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    bool getAlwaysDisplay() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setAlwaysDisplay(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    bool getDespawnOnUnleash() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x85);
    }

    void setDespawnOnUnleash(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x85) = val;
    }

};