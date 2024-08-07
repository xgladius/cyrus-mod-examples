#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/ObstacleCourseObstacleBehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class ObstacleCourseFinishLineBehaviorTemplate : public ObstacleCourseObstacleBehaviorTemplate {
public:
    double getWidth() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setWidth(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    double getHeight() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setHeight(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};