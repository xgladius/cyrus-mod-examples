#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GeomParams.h>
#include <Cyrus/Classes/PropertyClass.h>

class RayGeomParams : public GeomParams {
public:
    Vector3D getVPosition() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setVPosition(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Vector3D getVDirection() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setVDirection(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    float getFLength() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setFLength(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};