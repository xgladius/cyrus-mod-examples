#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BaseEffectCinematicAction.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>

class CastEffectCinematicAction : public BaseEffectCinematicAction {
public:
    std::string getNamedActor() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setNamedActor(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};