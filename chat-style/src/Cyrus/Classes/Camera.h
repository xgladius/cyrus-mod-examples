#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class Camera : public PropertyClass {
public:
    Vector3D getCoord() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCoord(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Quaternion getQuat() { // Property Generated Getter
      return *reinterpret_cast<Quaternion*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setQuat(Quaternion val) { // Property Generated Setter
      *reinterpret_cast<Quaternion*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    Matrix3x3 getMat() { // Property Generated Getter
      return *reinterpret_cast<Matrix3x3*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setMat(Matrix3x3 val) { // Property Generated Setter
      *reinterpret_cast<Matrix3x3*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

};