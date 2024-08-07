#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchActor.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TournamentUpdate.h>

class MatchActorUpdate : public TournamentUpdate {
public:
    SharedPointer<MatchActor> * getPActor() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MatchActor> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPActor(SharedPointer<MatchActor> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MatchActor> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};