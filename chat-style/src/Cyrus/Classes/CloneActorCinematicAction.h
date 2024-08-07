#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorCinematicAction.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>

class CloneActorCinematicAction : public ActorCinematicAction {
public:
    Vector3D getPosition() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setPosition(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    Vector3D getYawPitchRoll() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setYawPitchRoll(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    bool getClonePlayer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setClonePlayer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};