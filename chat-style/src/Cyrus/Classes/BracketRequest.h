#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BracketRewards.h>
#include <Cyrus/Classes/MatchRequest.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/PvPMatchRequest.h>

class BracketRequest : public PvPMatchRequest {
public:
    unsigned int getMaxNumberOfTeams() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setMaxNumberOfTeams(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    unsigned int getMinNumberOfTeams() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setMinNumberOfTeams(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    unsigned int getTimeLimitSec() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setTimeLimitSec(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    gid getScheduleID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setScheduleID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    unsigned int getVisibleTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setVisibleTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    unsigned int getRegistrationOpenTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xFC);
    }

    void setRegistrationOpenTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xFC) = val;
    }

    unsigned int getTournamentPreparingTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setTournamentPreparingTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    int getTeamSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setTeamSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    List<SharedPointer<BracketRewards>> * getBracketRewardsList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BracketRewards>> *>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setBracketRewardsList(List<SharedPointer<BracketRewards>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BracketRewards>> **>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    unsigned int getRoundStartsInSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x104);
    }

    void setRoundStartsInSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x104) = val;
    }

    unsigned int getRoundBufferTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setRoundBufferTimeSeconds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    unsigned int getNumberOfRounds() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x10C);
    }

    void setNumberOfRounds(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x10C) = val;
    }

    float getScoreMultiplier() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setScoreMultiplier(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    unsigned int getPreferredNumberOfTeams() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setPreferredNumberOfTeams(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    bool getSpecialEvent() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setSpecialEvent(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    List<std::string> getPvpDuelModifiers() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setPvpDuelModifiers(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    std::string getPremierPrizesStoreGIDsCSV() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setPremierPrizesStoreGIDsCSV(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    unsigned int getCostPvPTourneyCurrency() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setCostPvPTourneyCurrency(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    unsigned int getSubCostPvPTourneyCurrency() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x144);
    }

    void setSubCostPvPTourneyCurrency(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x144) = val;
    }

};