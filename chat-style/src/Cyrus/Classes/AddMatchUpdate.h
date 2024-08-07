#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ArenaMatchInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TournamentUpdate.h>

class AddMatchUpdate : public TournamentUpdate {
public:
    SharedPointer<ArenaMatchInfo> * getMatchInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ArenaMatchInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMatchInfo(SharedPointer<ArenaMatchInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ArenaMatchInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};