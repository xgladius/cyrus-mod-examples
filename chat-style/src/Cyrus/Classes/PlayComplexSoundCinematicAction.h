#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/CinematicSoundEmitterInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class PlayComplexSoundCinematicAction : public CinematicAction {
public:
    SharedPointer<CinematicSoundEmitterInfo> * getCinematicSoundEmitterInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<CinematicSoundEmitterInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setCinematicSoundEmitterInfo(SharedPointer<CinematicSoundEmitterInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<CinematicSoundEmitterInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};