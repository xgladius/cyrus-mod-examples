#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BracketMatchResult.h>
#include <Cyrus/Classes/MatchTeam.h>
#include <Cyrus/Classes/PropertyClass.h>

class BracketTeam : public PropertyClass {
public:
    gid getMatchTeamGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setMatchTeamGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    SharedPointer<MatchTeam> * getMatchTeam() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MatchTeam> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMatchTeam(SharedPointer<MatchTeam> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MatchTeam> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getPoints() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setPoints(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    List<SharedPointer<BracketMatchResult>> * getMatchResults() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BracketMatchResult>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setMatchResults(List<SharedPointer<BracketMatchResult>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BracketMatchResult>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned int getTeamID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setTeamID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    unsigned int getRanking() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setRanking(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    SharedPointer<BracketMatchResult> * getPendingResult() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<BracketMatchResult> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setPendingResult(SharedPointer<BracketMatchResult> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<BracketMatchResult> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    unsigned int getPointsAsOfTheLastCompletedRound() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setPointsAsOfTheLastCompletedRound(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};