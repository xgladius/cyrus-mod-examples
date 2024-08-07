#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicActorTemplate.h>
#include <Cyrus/Classes/CinematicDefTemplate.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class WizCinematicActorTemplate : public CinematicActorTemplate {
public:
    ActorDialogList* * getDialogList() { // Property Generated Getter
      return reinterpret_cast<ActorDialogList* *>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setDialogList(ActorDialogList* * val) { // Property Generated Setter
      *reinterpret_cast<ActorDialogList* **>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

};