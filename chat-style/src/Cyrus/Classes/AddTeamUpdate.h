#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchTeam.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TournamentUpdate.h>

class AddTeamUpdate : public TournamentUpdate {
public:
    SharedPointer<MatchTeam> * getTeam() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MatchTeam> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTeam(SharedPointer<MatchTeam> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MatchTeam> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};