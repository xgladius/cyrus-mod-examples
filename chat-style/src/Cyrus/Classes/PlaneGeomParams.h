#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GeomParams.h>
#include <Cyrus/Classes/PropertyClass.h>

class PlaneGeomParams : public GeomParams {
public:
    Vector3D getVNormal() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setVNormal(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    float getFDistance() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setFDistance(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

};