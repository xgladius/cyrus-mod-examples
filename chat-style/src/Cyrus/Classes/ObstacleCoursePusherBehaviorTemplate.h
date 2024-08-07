#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/ObstacleCourseObstacleBehaviorTemplate.h>
#include <Cyrus/Classes/ObstacleCourseObstaclePathBaseTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WeightedList.h>

class ObstacleCoursePusherBehaviorTemplate : public ObstacleCourseObstaclePathBaseTemplate {
public:
    WeightedList getChangeDirectionSoundList() { // Property Generated Getter
      return *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setChangeDirectionSoundList(WeightedList val) { // Property Generated Setter
      *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

};