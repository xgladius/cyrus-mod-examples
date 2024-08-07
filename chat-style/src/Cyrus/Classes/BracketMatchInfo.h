#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ArenaMatchInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PvPMatchInfo.h>
#include <Cyrus/Classes/TeamGIDToBracketID.h>

class BracketMatchInfo : public PvPMatchInfo {
public:
    int getNumTeams() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setNumTeams(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    int getPointsForLosingByDefeat() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setPointsForLosingByDefeat(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    int getPointsForWinningByDefeat() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B4);
    }

    void setPointsForWinningByDefeat(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B4) = val;
    }

    int getPointsForWinningByJudgement() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setPointsForWinningByJudgement(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    int getPointsForLosingByJudgement() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1BC);
    }

    void setPointsForLosingByJudgement(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1BC) = val;
    }

    int getPointsForFleeingMatch() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C0);
    }

    void setPointsForFleeingMatch(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C0) = val;
    }

    int getPointsForByeGame() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C4);
    }

    void setPointsForByeGame(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C4) = val;
    }

    float getScoreMultiplier() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1AC);
    }

    void setScoreMultiplier(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1AC) = val;
    }

    List<TeamGIDToBracketID> getTeamIDToBracketTeamIDList() { // Property Generated Getter
      return *reinterpret_cast<List<TeamGIDToBracketID>*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setTeamIDToBracketTeamIDList(List<TeamGIDToBracketID> val) { // Property Generated Setter
      *reinterpret_cast<List<TeamGIDToBracketID>*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

};