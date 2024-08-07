#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/CollisionBehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PhysicsBehaviorTemplate__SimulationMethod.h>

class PhysicsBehaviorTemplate : public CollisionBehaviorTemplate {
public:
    PhysicsBehaviorTemplate__SimulationMethod getNSimulationMethod() { // Property Generated Getter
      return *reinterpret_cast<PhysicsBehaviorTemplate__SimulationMethod*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setNSimulationMethod(PhysicsBehaviorTemplate__SimulationMethod val) { // Property Generated Setter
      *reinterpret_cast<PhysicsBehaviorTemplate__SimulationMethod*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    bool getBEnableGravity() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setBEnableGravity(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    bool getBEnableDamping() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE5);
    }

    void setBEnableDamping(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE5) = val;
    }

    bool getBStartsEnabled() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE6);
    }

    void setBStartsEnabled(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE6) = val;
    }

    float getFDampingX() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setFDampingX(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    float getFDampingY() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xEC);
    }

    void setFDampingY(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xEC) = val;
    }

    float getFDampingZ() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setFDampingZ(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    float getFAngDampingX() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF4);
    }

    void setFAngDampingX(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF4) = val;
    }

    float getFAngDampingY() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setFAngDampingY(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    float getFAngDampingZ() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xFC);
    }

    void setFAngDampingZ(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xFC) = val;
    }

    float getFCenterX() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setFCenterX(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    float getFCenterY() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x104);
    }

    void setFCenterY(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x104) = val;
    }

    float getFCenterZ() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setFCenterZ(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    List<MassShapeTemplate*> * getMassShapes() { // Property Generated Getter
      return reinterpret_cast<List<MassShapeTemplate*> *>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setMassShapes(List<MassShapeTemplate*> * val) { // Property Generated Setter
      *reinterpret_cast<List<MassShapeTemplate*> **>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

};