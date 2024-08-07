#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TournamentUpdate.h>

class TournamentUpdateList : public PropertyClass {
public:
    List<SharedPointer<TournamentUpdate>> * getUpdates() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<TournamentUpdate>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setUpdates(List<SharedPointer<TournamentUpdate>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<TournamentUpdate>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int getMatchCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMatchCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getTeamCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setTeamCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    int getActorCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setActorCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};