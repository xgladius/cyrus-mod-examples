#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class FlyThroughDataManager : public PropertyClass {
public:
    Vector<PointData> getPoints() { // Property Generated Getter
      return *reinterpret_cast<Vector<PointData>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPoints(Vector<PointData> val) { // Property Generated Setter
      *reinterpret_cast<Vector<PointData>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    float getCameraSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setCameraSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    std::string getZoneName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setZoneName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};