#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchActor.h>
#include <Cyrus/Classes/PropertyClass.h>

class MatchTeam : public PropertyClass {
public:
    gid getNTeamID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNTeamID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getMatchId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setMatchId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getMatchNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setMatchNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    gid getCreatorId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setCreatorId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    bool getFriendsOnly() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setFriendsOnly(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<SharedPointer<MatchActor>> * getActors() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MatchActor>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setActors(List<SharedPointer<MatchActor>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MatchActor>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    gid getBracketID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setBracketID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    unsigned int getLeagueID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setLeagueID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    unsigned int getSeasonID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setSeasonID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

    int getMaxActorLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setMaxActorLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};