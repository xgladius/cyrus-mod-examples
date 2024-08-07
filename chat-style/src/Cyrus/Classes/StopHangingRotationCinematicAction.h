#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorCinematicAction.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/StopHangingRotationCinematicAction__kStopHangingTypes.h>

class StopHangingRotationCinematicAction : public ActorCinematicAction {
public:
    bool getCloaked() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setCloaked(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    StopHangingRotationCinematicAction__kStopHangingTypes getType() { // Property Generated Getter
      return *reinterpret_cast<StopHangingRotationCinematicAction__kStopHangingTypes*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setType(StopHangingRotationCinematicAction__kStopHangingTypes val) { // Property Generated Setter
      *reinterpret_cast<StopHangingRotationCinematicAction__kStopHangingTypes*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};