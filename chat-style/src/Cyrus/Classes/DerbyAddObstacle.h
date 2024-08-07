#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DerbyEffect.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/DerbyLaneEffect.h>

class DerbyAddObstacle : public DerbyEffect {
public:
    DerbyLaneEffect getLane() { // Property Generated Getter
      return *reinterpret_cast<DerbyLaneEffect*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setLane(DerbyLaneEffect val) { // Property Generated Setter
      *reinterpret_cast<DerbyLaneEffect*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    unsigned __int64 getObstacleType() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setObstacleType(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    int getNObstacleAmount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setNObstacleAmount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

};