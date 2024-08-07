#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorCinematicAction.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MoveActorCinematicAction__kMoveActorDestination.h>

class MoveActorCinematicAction : public ActorCinematicAction {
public:
    std::string getDestinationActor() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setDestinationActor(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    float getInterpolationDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setInterpolationDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bool getInterpolateRotation() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9C);
    }

    void setInterpolateRotation(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x9C) = val;
    }

    MoveActorCinematicAction__kMoveActorDestination getKDestination() { // Property Generated Getter
      return *reinterpret_cast<MoveActorCinematicAction__kMoveActorDestination*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setKDestination(MoveActorCinematicAction__kMoveActorDestination val) { // Property Generated Setter
      *reinterpret_cast<MoveActorCinematicAction__kMoveActorDestination*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    float getDestinationZOffset() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setDestinationZOffset(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

};