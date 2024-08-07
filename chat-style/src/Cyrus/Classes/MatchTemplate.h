#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AdvPvPLeagueAwardInfo.h>
#include <Cyrus/Classes/ArenaMatchInfo.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ResultList.h>
#include <Cyrus/Classes/SpellEffectPenalty.h>

class MatchTemplate : public CoreTemplate {
public:
    std::string getMatchName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setMatchName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    std::string getMatchDisplayName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setMatchDisplayName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    std::string getMatchTitle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setMatchTitle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    bool getAllowOverrides() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setAllowOverrides(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    unsigned int getTeamSize() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setTeamSize(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    unsigned int getTeamCount() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xCC);
    }

    void setTeamCount(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xCC) = val;
    }

    unsigned int getMinTeams() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD4);
    }

    void setMinTeams(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD4) = val;
    }

    int getTimeout() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setTimeout(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    unsigned int getMaxPointsPerMatch() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setMaxPointsPerMatch(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    float getEstimatedWeight() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x11C);
    }

    void setEstimatedWeight(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x11C) = val;
    }

    SharedPointer<ArenaMatchInfo> * getMatchInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ArenaMatchInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setMatchInfo(SharedPointer<ArenaMatchInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ArenaMatchInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    SharedPointer<ResultList> * getAwardInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setAwardInfo(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    List<SharedPointer<AdvPvPLeagueAwardInfo>> * getPerLeagueAwardInfo() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AdvPvPLeagueAwardInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setPerLeagueAwardInfo(List<SharedPointer<AdvPvPLeagueAwardInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AdvPvPLeagueAwardInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    Vector<std::string> getZones() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setZones(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    unsigned int getInitialQueueThreshold() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setInitialQueueThreshold(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    unsigned int getActorQueueTimeout() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x13C);
    }

    void setActorQueueTimeout(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x13C) = val;
    }

    unsigned int getTeamQueueTimeout() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setTeamQueueTimeout(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    float getActorQueueGrowth() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x144);
    }

    void setActorQueueGrowth(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x144) = val;
    }

    float getTeamQueueGrowth() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setTeamQueueGrowth(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    float getMatchMakingLevelMultiplier() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x14C);
    }

    void setMatchMakingLevelMultiplier(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x14C) = val;
    }

    gid getLevelModifiersListID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setLevelModifiersListID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    unsigned int getIncompleteTeamTimeout() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x114);
    }

    void setIncompleteTeamTimeout(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x114) = val;
    }

    unsigned int getIncompleteMatchTimeout() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setIncompleteMatchTimeout(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    unsigned int getShortMatchDurationForPenaltySeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setShortMatchDurationForPenaltySeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    unsigned int getThresholdForExtendingMatchSearch() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x16C);
    }

    void setThresholdForExtendingMatchSearch(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x16C) = val;
    }

    unsigned int getNumberOfPlayersRequiredToExtendMatchSearch() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setNumberOfPlayersRequiredToExtendMatchSearch(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    bool getShowStatusOnJoinQueue() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setShowStatusOnJoinQueue(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    bool getAllowExceedRangeForMatchesOptionForPlayers() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x179);
    }

    void setAllowExceedRangeForMatchesOptionForPlayers(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x179) = val;
    }

    int getMakeTeamsWithSameMatchOptsTimeoutSec() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x174);
    }

    void setMakeTeamsWithSameMatchOptsTimeoutSec(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x174) = val;
    }

    int getStreakSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x17C);
    }

    void setStreakSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x17C) = val;
    }

    int getHistorySize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setHistorySize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    int getQueueWaitingTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x184);
    }

    void setQueueWaitingTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x184) = val;
    }

    int getMinQueueSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setMinQueueSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    int getMaxQueueSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x18C);
    }

    void setMaxQueueSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x18C) = val;
    }

    int getConfTierRankTimeout() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setConfTierRankTimeout(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    float getMatchTimer() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x194);
    }

    void setMatchTimer(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x194) = val;
    }

    int getBonusTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setBonusTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    int getPassPenalty() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x19C);
    }

    void setPassPenalty(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x19C) = val;
    }

    int getYellowTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setYellowTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    int getRedTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A4);
    }

    void setRedTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A4) = val;
    }

    int getMinTurnTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setMinTurnTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    Vector<SharedPointer<SpellEffectPenalty>> * getEffects() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<SpellEffectPenalty>> *>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setEffects(Vector<SharedPointer<SpellEffectPenalty>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<SpellEffectPenalty>> **>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    bool getUpdateBattlePassPoints() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setUpdateBattlePassPoints(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    int getBattlePassWinPoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1CC);
    }

    void setBattlePassWinPoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1CC) = val;
    }

    int getBattlePassLosePoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setBattlePassLosePoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

};