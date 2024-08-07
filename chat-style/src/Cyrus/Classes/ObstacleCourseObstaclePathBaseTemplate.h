#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/ObstacleCourseObstacleBehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class ObstacleCourseObstaclePathBaseTemplate : public ObstacleCourseObstacleBehaviorTemplate {
public:
    float getRate() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setRate(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    float getPenaltyTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setPenaltyTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    Vector3D getTotalObstacleSize() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setTotalObstacleSize(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    Vector<Vector3D> getBounds() { // Property Generated Getter
      return *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setBounds(Vector<Vector3D> val) { // Property Generated Setter
      *reinterpret_cast<Vector<Vector3D>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bool getOrientToPath() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setOrientToPath(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    float getHeightUp() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setHeightUp(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    float getHeightDown() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setHeightDown(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};