#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/LeashType.h>

class LeashBehavior : public BehaviorInstance {
public:
    gid getOwnerGid() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setOwnerGid(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    float getRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    float getAngle() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setAngle(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    LeashType getLeashType() { // Property Generated Getter
      return *reinterpret_cast<LeashType*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setLeashType(LeashType val) { // Property Generated Setter
      *reinterpret_cast<LeashType*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    bool getAlwaysDisplay() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA1);
    }

    void setAlwaysDisplay(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA1) = val;
    }

};