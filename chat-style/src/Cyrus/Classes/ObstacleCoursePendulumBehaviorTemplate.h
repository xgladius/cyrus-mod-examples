#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/ObstacleCourseObstacleBehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WeightedList.h>

class ObstacleCoursePendulumBehaviorTemplate : public ObstacleCourseObstacleBehaviorTemplate {
public:
    double getRate() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setRate(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    double getPenaltyTime() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setPenaltyTime(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    double getBoxAngle() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setBoxAngle(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    double getNearMissBoxAngle() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setNearMissBoxAngle(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    double getNearMissWidth() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setNearMissWidth(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    double getPendulumHeight() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setPendulumHeight(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    double getAngleMax() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setAngleMax(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    double getPendulumWidth() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setPendulumWidth(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    double getCollisionHeight() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setCollisionHeight(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    WeightedList getPendulumHitSoundList() { // Property Generated Getter
      return *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setPendulumHitSoundList(WeightedList val) { // Property Generated Setter
      *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

};