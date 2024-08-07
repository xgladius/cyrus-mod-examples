#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetGameInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetObstacleCourseGameInfo : public PetGameInfo {
public:
    int getPetWidth() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setPetWidth(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    int getPetHeight() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC);
    }

    void setPetHeight(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC) = val;
    }

    int getPetDepth() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setPetDepth(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    float getGravity() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF4);
    }

    void setGravity(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF4) = val;
    }

    int getFallingPenalty() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setFallingPenalty(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    Vector<int> getTrackTimes() { // Property Generated Getter
      return *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setTrackTimes(Vector<int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    double getCollectionInterval() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setCollectionInterval(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    double getTolerance() { // Property Generated Getter
      return *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setTolerance(double val) { // Property Generated Setter
      *reinterpret_cast<double*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

};