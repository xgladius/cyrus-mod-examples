#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>

class RegisterPersonaCinematicAction : public CinematicAction {
public:
    Persona* * getPersona() { // Property Generated Getter
      return reinterpret_cast<Persona* *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPersona(Persona* * val) { // Property Generated Setter
      *reinterpret_cast<Persona* **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};