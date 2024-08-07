#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/Ladder.h>
#include <Cyrus/Classes/MatchActor.h>
#include <Cyrus/Classes/PropertyClass.h>

class TournamentTemplate : public CoreTemplate {
public:
    std::string getTournamentName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setTournamentName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<std::string> getAllowedMatches() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setAllowedMatches(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bool getUpdateLadder() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD1);
    }

    void setUpdateLadder(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD1) = val;
    }

    bool getUseEloBehavior() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD2);
    }

    void setUseEloBehavior(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD2) = val;
    }

    std::string getLadderTable() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setLadderTable(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    SharedPointer<MatchActor> * getMatchActor() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MatchActor> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setMatchActor(SharedPointer<MatchActor> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MatchActor> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    bool getBPremium() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setBPremium(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    SharedPointer<Ladder> * getDefaultLadder() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Ladder> *>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setDefaultLadder(SharedPointer<Ladder> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Ladder> **>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    bool getIsBracketTournament() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x109);
    }

    void setIsBracketTournament(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x109) = val;
    }

    bool getPersisted() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x10A);
    }

    void setPersisted(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x10A) = val;
    }

    bool getPenalizeMatchDeclines() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x10B);
    }

    void setPenalizeMatchDeclines(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x10B) = val;
    }

    bool getHidePlayerInfo() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x10C);
    }

    void setHidePlayerInfo(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x10C) = val;
    }

    List<std::string> getPvpDuelModifiers() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setPvpDuelModifiers(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

};