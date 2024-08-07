#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class MoveBehaviorTemplate : public BehaviorTemplate {
public:
    float getFAcceleration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setFAcceleration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    float getFDeceleration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setFDeceleration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    float getFVelocityDecay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setFVelocityDecay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    float getFWalkSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setFWalkSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    float getFRunSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setFRunSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    float getFFlySpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setFFlySpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    float getFSwimSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setFSwimSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    float getFFallSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setFFallSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    float getFYawRate() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setFYawRate(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    float getFFallHeight() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x9C);
    }

    void setFFallHeight(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x9C) = val;
    }

    float getFJumpVelocity() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setFJumpVelocity(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    List<MoveStateAnimation> getAnimationList() { // Property Generated Getter
      return *reinterpret_cast<List<MoveStateAnimation>*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setAnimationList(List<MoveStateAnimation> val) { // Property Generated Setter
      *reinterpret_cast<List<MoveStateAnimation>*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

};