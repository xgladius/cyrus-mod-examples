#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/LikesDislikesEntry.h>
#include <Cyrus/Classes/PestEntry.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PlantStage.h>
#include <Cyrus/Enums/SeedSize.h>

class SeedBehaviorTemplate : public BehaviorTemplate {
public:
    bool getInitialRandom() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setInitialRandom(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getTurnRandom() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x79);
    }

    void setTurnRandom(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x79) = val;
    }

    bool getTrackPlayer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7A);
    }

    void setTrackPlayer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7A) = val;
    }

    bool getShy() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7B);
    }

    void setShy(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7B) = val;
    }

    float getSpeed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setSpeed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    unsigned int getNextStageTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setNextStageTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    std::string getNextStageRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setNextStageRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    std::string getNeedsWaterMinRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setNeedsWaterMinRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    std::string getNeedsSunMinRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setNeedsSunMinRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    std::string getNeedsPollinationMinRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setNeedsPollinationMinRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    std::string getNeedsWaterMaxRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setNeedsWaterMaxRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    std::string getNeedsSunMaxRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setNeedsSunMaxRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    std::string getNeedsPollinationMaxRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setNeedsPollinationMaxRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    std::string getNeedsMagicMinRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setNeedsMagicMinRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    std::string getNeedsMagicMaxRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setNeedsMagicMaxRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    std::string getNeedsMusicMinRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setNeedsMusicMinRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    std::string getNeedsMusicMaxRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setNeedsMusicMaxRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    PlantStage getPlantStage() { // Property Generated Getter
      return *reinterpret_cast<PlantStage*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setPlantStage(PlantStage val) { // Property Generated Setter
      *reinterpret_cast<PlantStage*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    unsigned int getWiltTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1EC);
    }

    void setWiltTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1EC) = val;
    }

    unsigned int getDeadTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setDeadTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    unsigned int getYoungTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F4);
    }

    void setYoungTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F4) = val;
    }

    std::string getNeedsWaterWiltRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setNeedsWaterWiltRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    std::string getNeedsSunWiltRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setNeedsSunWiltRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    std::string getNeedsPollinationWiltRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setNeedsPollinationWiltRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

    std::string getNeedsMagicWiltRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setNeedsMagicWiltRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    std::string getNeedsMusicWiltRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x280);
    }

    void setNeedsMusicWiltRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x280) = val;
    }

    std::string getHarvestMinRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2A0);
    }

    void setHarvestMinRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2A0) = val;
    }

    std::string getHarvestMaxRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2C0);
    }

    void setHarvestMaxRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2C0) = val;
    }

    Vector<PestEntry> getPestList() { // Property Generated Getter
      return *reinterpret_cast<Vector<PestEntry>*>(reinterpret_cast<uintptr_t>(this) + 0x2E0);
    }

    void setPestList(Vector<PestEntry> val) { // Property Generated Setter
      *reinterpret_cast<Vector<PestEntry>*>(reinterpret_cast<uintptr_t>(this) + 0x2E0) = val;
    }

    std::string getPestUpdateRate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2F8);
    }

    void setPestUpdateRate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2F8) = val;
    }

    bool getRequiresEnchantedSoil() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x318);
    }

    void setRequiresEnchantedSoil(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x318) = val;
    }

    int getRewardsRating() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x31C);
    }

    void setRewardsRating(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x31C) = val;
    }

    int getChallengeRating() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x320);
    }

    void setChallengeRating(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x320) = val;
    }

    int getHarvestXP() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x324);
    }

    void setHarvestXP(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x324) = val;
    }

    bool getRequiresEnrichedSoil() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x319);
    }

    void setRequiresEnrichedSoil(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x319) = val;
    }

    bool getFidgetDuringHappy() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x328);
    }

    void setFidgetDuringHappy(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x328) = val;
    }

    std::string getFidgetSoundEffectName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x330);
    }

    void setFidgetSoundEffectName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x330) = val;
    }

    float getFidgetSoundEffectGain() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x350);
    }

    void setFidgetSoundEffectGain(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x350) = val;
    }

    unsigned int getAngelEffectTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x354);
    }

    void setAngelEffectTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x354) = val;
    }

    SeedSize getSeedSize() { // Property Generated Getter
      return *reinterpret_cast<SeedSize*>(reinterpret_cast<uintptr_t>(this) + 0x358);
    }

    void setSeedSize(SeedSize val) { // Property Generated Setter
      *reinterpret_cast<SeedSize*>(reinterpret_cast<uintptr_t>(this) + 0x358) = val;
    }

    int getSeedLimit() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x35C);
    }

    void setSeedLimit(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x35C) = val;
    }

    int getGardeningLevelRequirement() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x360);
    }

    void setGardeningLevelRequirement(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x360) = val;
    }

    unsigned int getMaximumNumberOfHarvests() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x380);
    }

    void setMaximumNumberOfHarvests(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x380) = val;
    }

    Vector<LikesDislikesEntry> getLikesDislikesList() { // Property Generated Getter
      return *reinterpret_cast<Vector<LikesDislikesEntry>*>(reinterpret_cast<uintptr_t>(this) + 0x368);
    }

    void setLikesDislikesList(Vector<LikesDislikesEntry> val) { // Property Generated Setter
      *reinterpret_cast<Vector<LikesDislikesEntry>*>(reinterpret_cast<uintptr_t>(this) + 0x368) = val;
    }

    unsigned int getMatureTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setMatureTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

    int getPlantRank() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x384);
    }

    void setPlantRank(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x384) = val;
    }

};