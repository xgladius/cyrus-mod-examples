#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/BaseEffectCinematicAction__kEffectRelative.h>

class BaseEffectCinematicAction : public CinematicAction {
public:
    BaseEffectCinematicAction__kEffectRelative getEffectRel() { // Property Generated Getter
      return *reinterpret_cast<BaseEffectCinematicAction__kEffectRelative*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setEffectRel(BaseEffectCinematicAction__kEffectRelative val) { // Property Generated Setter
      *reinterpret_cast<BaseEffectCinematicAction__kEffectRelative*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};