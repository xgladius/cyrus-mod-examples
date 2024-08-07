#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>

class ActorDialogCinematicAction : public CinematicAction {
public:
    ActorDialog* * getDialog() { // Property Generated Getter
      return reinterpret_cast<ActorDialog* *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setDialog(ActorDialog* * val) { // Property Generated Setter
      *reinterpret_cast<ActorDialog* **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    std::string getActivePersona() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setActivePersona(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};