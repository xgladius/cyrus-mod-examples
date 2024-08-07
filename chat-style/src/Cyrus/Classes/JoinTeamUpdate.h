#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchActor.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TournamentUpdate.h>

class JoinTeamUpdate : public TournamentUpdate {
public:
    SharedPointer<MatchActor> * getActor() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MatchActor> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setActor(SharedPointer<MatchActor> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MatchActor> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};