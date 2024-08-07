#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorCinematicAction.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>

class ActivateHangingEffectCinematicAction : public ActorCinematicAction {
public:
    bool getActivate() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setActivate(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getCloaked() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x79);
    }

    void setCloaked(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x79) = val;
    }

};