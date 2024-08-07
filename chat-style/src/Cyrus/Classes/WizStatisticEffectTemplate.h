#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/StatisticEffectTemplate.h>

class WizStatisticEffectTemplate : public StatisticEffectTemplate {
public:
    bool getBuffAll() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setBuffAll(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    std::string getSchool() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setSchool(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    float getDamageBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setDamageBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    float getDamageBonusFlat() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setDamageBonusFlat(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    float getAccuracyBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1BC);
    }

    void setAccuracyBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1BC) = val;
    }

    float getArmorPiercingBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1C0);
    }

    void setArmorPiercingBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1C0) = val;
    }

    float getDamageReducePercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1C4);
    }

    void setDamageReducePercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1C4) = val;
    }

    float getDamageReduceFlat() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setDamageReduceFlat(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    float getAccuracyReducePercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1CC);
    }

    void setAccuracyReducePercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1CC) = val;
    }

    float getHealBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setHealBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

    float getHealIncBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D4);
    }

    void setHealIncBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D4) = val;
    }

    float getHitPointBonus() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setHitPointBonus(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    float getSpellChargeBonus() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setSpellChargeBonus(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

    float getPowerPipBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setPowerPipBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    int getPetActChance() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1EC);
    }

    void setPetActChance(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1EC) = val;
    }

    float getManaBonus() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F4);
    }

    void setManaBonus(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F4) = val;
    }

    std::string getStatTableName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setStatTableName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    float getManaReducePercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x238);
    }

    void setManaReducePercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x238) = val;
    }

    float getExpPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x23C);
    }

    void setExpPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x23C) = val;
    }

    float getGoldPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setGoldPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

    float getEnergyBonus() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1FC);
    }

    void setEnergyBonus(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1FC) = val;
    }

    float getCriticalHitRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setCriticalHitRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    float getBlockRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x204);
    }

    void setBlockRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x204) = val;
    }

    float getAccuracyRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setAccuracyRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    float getPowerPipRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x20C);
    }

    void setPowerPipRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x20C) = val;
    }

    float getDamageResistanceRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x214);
    }

    void setDamageResistanceRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x214) = val;
    }

    float getArchmastery() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setArchmastery(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    float getArchmasteryBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x24C);
    }

    void setArchmasteryBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x24C) = val;
    }

    int getBalanceMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x21C);
    }

    void setBalanceMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x21C) = val;
    }

    int getDeathMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setDeathMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    int getFireMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x224);
    }

    void setFireMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x224) = val;
    }

    int getIceMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x228);
    }

    void setIceMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x228) = val;
    }

    int getLifeMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x22C);
    }

    void setLifeMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x22C) = val;
    }

    int getMythMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x230);
    }

    void setMythMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x230) = val;
    }

    int getStormMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x234);
    }

    void setStormMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x234) = val;
    }

    float getStunResistancePercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x244);
    }

    void setStunResistancePercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x244) = val;
    }

    float getFishingLuckBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setFishingLuckBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    float getShadowPipBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1DC);
    }

    void setShadowPipBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1DC) = val;
    }

    float getWispBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E4);
    }

    void setWispBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E4) = val;
    }

    float getPipConversionRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setPipConversionRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    float getShadowPipRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setShadowPipRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

};