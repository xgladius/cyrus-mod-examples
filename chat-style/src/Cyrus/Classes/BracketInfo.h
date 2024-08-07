#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BracketRewards.h>
#include <Cyrus/Classes/BracketTeam.h>
#include <Cyrus/Classes/DuelModifierTemplate.h>
#include <Cyrus/Classes/MatchActor.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PvPMatchJoinQueueRequirements.h>
#include <Cyrus/Enums/BracketInfo__EnumTournamentStyle.h>

class BracketInfo : public PropertyClass {
public:
    gid getBracketGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBracketGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getCreatorActorGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setCreatorActorGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    gid getCreatorBracketGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setCreatorBracketGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<SharedPointer<BracketTeam>> * getTeams() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BracketTeam>> *>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setTeams(List<SharedPointer<BracketTeam>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BracketTeam>> **>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    unsigned int getTeamSize() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setTeamSize(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    List<SharedPointer<MatchActor>> * getActorList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MatchActor>> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setActorList(List<SharedPointer<MatchActor>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MatchActor>> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    unsigned int getCurrentRound() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setCurrentRound(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    unsigned int getBracketState() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xEC);
    }

    void setBracketState(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xEC) = val;
    }

    unsigned int getMatchNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setMatchNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    unsigned int getRoundStartsInSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setRoundStartsInSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    unsigned int getRoundTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setRoundTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    gid getScheduleID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setScheduleID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    unsigned int getVisibleTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setVisibleTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    int getStartTimeSec() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x10C);
    }

    void setStartTimeSec(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x10C) = val;
    }

    unsigned int getRegistrationOpenTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x114);
    }

    void setRegistrationOpenTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x114) = val;
    }

    unsigned int getTournamentPreparingTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setTournamentPreparingTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    unsigned int getRoundBufferTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x11C);
    }

    void setRoundBufferTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x11C) = val;
    }

    int getNumberOfRounds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setNumberOfRounds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    std::string getOverrideTourneyName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setOverrideTourneyName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    std::string getFirstTourneyNameSTKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setFirstTourneyNameSTKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    std::string getSecondTourneyNameSTKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setSecondTourneyNameSTKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    int getSubBracketIdx() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setSubBracketIdx(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    float getScoreMultiplier() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x18C);
    }

    void setScoreMultiplier(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x18C) = val;
    }

    int getPreferredNumberOfTeams() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setPreferredNumberOfTeams(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    int getMinTeams() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setMinTeams(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    int getMaxTeams() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x104);
    }

    void setMaxTeams(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x104) = val;
    }

    bool getSpecialEvent() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setSpecialEvent(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    List<std::string> getPvpDuelModifiers() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setPvpDuelModifiers(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    List<SharedPointer<DuelModifierTemplate>> * getPvpDuelModifierTemplates() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DuelModifierTemplate>> *>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setPvpDuelModifierTemplates(List<SharedPointer<DuelModifierTemplate>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DuelModifierTemplate>> **>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    std::string getPvpDuelModifiersBlob() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setPvpDuelModifiersBlob(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    std::string getPremierPrizesStoreGIDsCSV() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setPremierPrizesStoreGIDsCSV(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    BracketInfo__EnumTournamentStyle getTournamentStyle() { // Property Generated Getter
      return *reinterpret_cast<BracketInfo__EnumTournamentStyle*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setTournamentStyle(BracketInfo__EnumTournamentStyle val) { // Property Generated Setter
      *reinterpret_cast<BracketInfo__EnumTournamentStyle*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    List<SharedPointer<BracketRewards>> * getBracketRewardsList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BracketRewards>> *>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setBracketRewardsList(List<SharedPointer<BracketRewards>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BracketRewards>> **>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    int getCostPvPTourneyCurrency() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setCostPvPTourneyCurrency(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    int getSubCostPvPTourneyCurrency() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setSubCostPvPTourneyCurrency(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    SharedPointer<PvPMatchJoinQueueRequirements> * getJoinQueueRequirements() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PvPMatchJoinQueueRequirements> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setJoinQueueRequirements(SharedPointer<PvPMatchJoinQueueRequirements> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PvPMatchJoinQueueRequirements> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    std::string getJoinQueueRequirementsBlob() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setJoinQueueRequirementsBlob(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};