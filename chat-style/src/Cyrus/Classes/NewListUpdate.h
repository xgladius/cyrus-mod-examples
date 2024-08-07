#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ArenaMatchInfo.h>
#include <Cyrus/Classes/BracketInfo.h>
#include <Cyrus/Classes/MatchTeam.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TournamentUpdate.h>

class NewListUpdate : public TournamentUpdate {
public:
    gid getTournamentID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTournamentID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getTournamentName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTournamentName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getTournamentNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setTournamentNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    bool getClearData() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setClearData(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    List<SharedPointer<ArenaMatchInfo>> * getMatches() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ArenaMatchInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setMatches(List<SharedPointer<ArenaMatchInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ArenaMatchInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    List<SharedPointer<MatchTeam>> * getTeams() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MatchTeam>> *>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setTeams(List<SharedPointer<MatchTeam>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MatchTeam>> **>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    List<SharedPointer<BracketInfo>> * getBrackets() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BracketInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setBrackets(List<SharedPointer<BracketInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BracketInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    int getTotalTeams() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setTotalTeams(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

};