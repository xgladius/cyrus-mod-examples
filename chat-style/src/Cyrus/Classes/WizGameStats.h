#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Ladder.h>
#include <Cyrus/Classes/PropertyClass.h>

class WizGameStats : public PropertyClass {
public:
    int getBaseHitpoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setBaseHitpoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    int getBaseMana() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setBaseMana(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    int getBaseGoldPouch() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setBaseGoldPouch(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int getBaseEventCurrency1Pouch() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setBaseEventCurrency1Pouch(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    int getBaseEventCurrency2Pouch() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setBaseEventCurrency2Pouch(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    int getBasePvPCurrencyPouch() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setBasePvPCurrencyPouch(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    int getBasePvPTourneyCurrencyPouch() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setBasePvPTourneyCurrencyPouch(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    int getEnergyMax() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setEnergyMax(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    int getCurrentHitpoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setCurrentHitpoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getCurrentGold() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setCurrentGold(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    int getCurrentEventCurrency1() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setCurrentEventCurrency1(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    int getCurrentEventCurrency2() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setCurrentEventCurrency2(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    int getCurrentPvPCurrency() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setCurrentPvPCurrency(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    int getCurrentPvPTourneyCurrency() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setCurrentPvPTourneyCurrency(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    int getCurrentMana() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setCurrentMana(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    int getCurrentArenaPoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setCurrentArenaPoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    Vector<int> getSpellChargeBase() { // Property Generated Getter
      return *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setSpellChargeBase(Vector<int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    float getPotionMax() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setPotionMax(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    float getPotionCharge() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setPotionCharge(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

    SharedPointer<Ladder> * getPArenaLadder() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Ladder> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setPArenaLadder(SharedPointer<Ladder> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Ladder> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    SharedPointer<Ladder> * getPDerbyLadder() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Ladder> *>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setPDerbyLadder(SharedPointer<Ladder> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Ladder> **>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    SharedPointer<Ladder> * getBracketLader() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Ladder> *>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setBracketLader(SharedPointer<Ladder> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Ladder> **>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    int getBonusHitpoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setBonusHitpoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    int getBonusMana() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setBonusMana(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    int getBonusEnergy() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF4);
    }

    void setBonusEnergy(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF4) = val;
    }

    float getCriticalHitPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setCriticalHitPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    float getBlockPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xFC);
    }

    void setBlockPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xFC) = val;
    }

    float getCriticalHitRatingAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setCriticalHitRatingAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    float getBlockRatingAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x104);
    }

    void setBlockRatingAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x104) = val;
    }

    int getReferenceLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x144);
    }

    void setReferenceLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x144) = val;
    }

    int getHighestCharacterLevelOnAccount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setHighestCharacterLevelOnAccount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    int getPetActChance() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setPetActChance(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    Vector<float> getDmgBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setDmgBonusPercent(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    Vector<float> getDmgBonusFlat() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setDmgBonusFlat(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    Vector<float> getAccBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setAccBonusPercent(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    Vector<float> getApBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setApBonusPercent(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    Vector<float> getDmgReducePercent() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x1C0);
    }

    void setDmgReducePercent(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x1C0) = val;
    }

    Vector<float> getDmgReduceFlat() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setDmgReduceFlat(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    Vector<float> getAccReducePercent() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setAccReducePercent(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    Vector<float> getHealBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setHealBonusPercent(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    Vector<float> getHealIncBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setHealIncBonusPercent(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    Vector<int> getSpellChargeBonus() { // Property Generated Getter
      return *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x250);
    }

    void setSpellChargeBonus(Vector<int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x250) = val;
    }

    float getDmgBonusPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C8);
    }

    void setDmgBonusPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2C8) = val;
    }

    float getDmgBonusFlatAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2CC);
    }

    void setDmgBonusFlatAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2CC) = val;
    }

    float getAccBonusPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2D0);
    }

    void setAccBonusPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2D0) = val;
    }

    float getApBonusPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2D4);
    }

    void setApBonusPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2D4) = val;
    }

    float getDmgReducePercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2D8);
    }

    void setDmgReducePercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2D8) = val;
    }

    float getDmgReduceFlatAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2DC);
    }

    void setDmgReduceFlatAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2DC) = val;
    }

    float getAccReducePercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E0);
    }

    void setAccReducePercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E0) = val;
    }

    float getHealBonusPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E4);
    }

    void setHealBonusPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E4) = val;
    }

    float getHealIncBonusPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E8);
    }

    void setHealIncBonusPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E8) = val;
    }

    int getSpellChargeBonusAll() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2F0);
    }

    void setSpellChargeBonusAll(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2F0) = val;
    }

    float getPowerPipBase() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2F4);
    }

    void setPowerPipBase(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2F4) = val;
    }

    float getPowerPipBonusPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x318);
    }

    void setPowerPipBonusPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x318) = val;
    }

    float getXpPercentIncrease() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x320);
    }

    void setXpPercentIncrease(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x320) = val;
    }

    Vector<float> getCriticalHitPercentBySchool() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setCriticalHitPercentBySchool(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    Vector<float> getBlockPercentBySchool() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x280);
    }

    void setBlockPercentBySchool(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x280) = val;
    }

    Vector<float> getCriticalHitRatingBySchool() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x298);
    }

    void setCriticalHitRatingBySchool(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x298) = val;
    }

    Vector<float> getBlockRatingBySchool() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x2B0);
    }

    void setBlockRatingBySchool(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x2B0) = val;
    }

    int getBalanceMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x340);
    }

    void setBalanceMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x340) = val;
    }

    int getDeathMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x344);
    }

    void setDeathMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x344) = val;
    }

    int getFireMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x348);
    }

    void setFireMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x348) = val;
    }

    int getIceMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x34C);
    }

    void setIceMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x34C) = val;
    }

    int getLifeMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x350);
    }

    void setLifeMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x350) = val;
    }

    int getMythMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x354);
    }

    void setMythMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x354) = val;
    }

    int getStormMastery() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x358);
    }

    void setStormMastery(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x358) = val;
    }

    int getMaximumNumberOfIslands() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x35C);
    }

    void setMaximumNumberOfIslands(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x35C) = val;
    }

    unsigned char getGardeningLevel() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x360);
    }

    void setGardeningLevel(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x360) = val;
    }

    int getGardeningXP() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x364);
    }

    void setGardeningXP(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x364) = val;
    }

    bool getInvisibleToFriends() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x368);
    }

    void setInvisibleToFriends(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x368) = val;
    }

    bool getShowItemLock() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x369);
    }

    void setShowItemLock(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x369) = val;
    }

    bool getQuestFinderEnabled() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x36A);
    }

    void setQuestFinderEnabled(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x36A) = val;
    }

    int getBuddyListLimit() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x36C);
    }

    void setBuddyListLimit(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x36C) = val;
    }

    bool getDontAllowFriendFinderCodes() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x374);
    }

    void setDontAllowFriendFinderCodes(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x374) = val;
    }

    float getStunResistancePercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x370);
    }

    void setStunResistancePercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x370) = val;
    }

    bool getShadowMagicUnlocked() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x37C);
    }

    void setShadowMagicUnlocked(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x37C) = val;
    }

    int getShadowPipMax() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x378);
    }

    void setShadowPipMax(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x378) = val;
    }

    unsigned char getFishingLevel() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x37D);
    }

    void setFishingLevel(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x37D) = val;
    }

    int getFishingXP() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x380);
    }

    void setFishingXP(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x380) = val;
    }

    Vector<float> getFishingLuckBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x238);
    }

    void setFishingLuckBonusPercent(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x238) = val;
    }

    float getFishingLuckBonusPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2EC);
    }

    void setFishingLuckBonusPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2EC) = val;
    }

    unsigned int getSubscriberBenefitFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x384);
    }

    void setSubscriberBenefitFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x384) = val;
    }

    unsigned int getElixirBenefitFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x388);
    }

    void setElixirBenefitFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x388) = val;
    }

    float getShadowPipBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x31C);
    }

    void setShadowPipBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x31C) = val;
    }

    float getWispBonusPercent() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x338);
    }

    void setWispBonusPercent(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x338) = val;
    }

    float getPipConversionRatingAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setPipConversionRatingAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    Vector<float> getPipConversionRatingPerSchool() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setPipConversionRatingPerSchool(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    float getPipConversionPercentAll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setPipConversionPercentAll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    Vector<float> getPipConversionPercentPerSchool() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setPipConversionPercentPerSchool(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    unsigned char getMonsterMagicLevel() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x38C);
    }

    void setMonsterMagicLevel(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x38C) = val;
    }

    int getMonsterMagicXP() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x390);
    }

    void setMonsterMagicXP(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x390) = val;
    }

    bool getPlayerChatChannelIsPublic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x394);
    }

    void setPlayerChatChannelIsPublic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x394) = val;
    }

    int getExtraInventorySpace() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x398);
    }

    void setExtraInventorySpace(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x398) = val;
    }

    bool getRememberLastRealm() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x39C);
    }

    void setRememberLastRealm(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x39C) = val;
    }

    bool getNewSpellbookLayoutWarning() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x39D);
    }

    void setNewSpellbookLayoutWarning(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x39D) = val;
    }

    int getPipConversionBaseAllSchools() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2F8);
    }

    void setPipConversionBaseAllSchools(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2F8) = val;
    }

    Vector<int> getPipConversionBasePerSchool() { // Property Generated Getter
      return *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x300);
    }

    void setPipConversionBasePerSchool(Vector<int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x300) = val;
    }

    unsigned int getPurchasedCustomEmotes1() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3A0);
    }

    void setPurchasedCustomEmotes1(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3A0) = val;
    }

    unsigned int getPurchasedCustomTeleportEffects1() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3A4);
    }

    void setPurchasedCustomTeleportEffects1(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3A4) = val;
    }

    unsigned int getEquippedTeleportEffect() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3A8);
    }

    void setEquippedTeleportEffect(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3A8) = val;
    }

    unsigned int getHighestWorld1ID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3BC);
    }

    void setHighestWorld1ID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3BC) = val;
    }

    unsigned int getHighestWorld2ID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3C0);
    }

    void setHighestWorld2ID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3C0) = val;
    }

    List<unsigned int> getActiveClassProjectsList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x3C8);
    }

    void setActiveClassProjectsList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x3C8) = val;
    }

    List<unsigned int> getDisabledItemSlotIDs() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x3D8);
    }

    void setDisabledItemSlotIDs(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x3D8) = val;
    }

    unsigned int getAdventurePowerCooldownTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3E8);
    }

    void setAdventurePowerCooldownTime(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3E8) = val;
    }

    unsigned int getPurchasedCustomEmotes2() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3AC);
    }

    void setPurchasedCustomEmotes2(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3AC) = val;
    }

    unsigned int getPurchasedCustomTeleportEffects2() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3B0);
    }

    void setPurchasedCustomTeleportEffects2(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3B0) = val;
    }

    unsigned int getPurchasedCustomEmotes3() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3B4);
    }

    void setPurchasedCustomEmotes3(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3B4) = val;
    }

    unsigned int getPurchasedCustomTeleportEffects3() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3B8);
    }

    void setPurchasedCustomTeleportEffects3(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x3B8) = val;
    }

    float getShadowPipRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3EC);
    }

    void setShadowPipRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3EC) = val;
    }

    float getBonusShadowPipRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3F0);
    }

    void setBonusShadowPipRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3F0) = val;
    }

    float getShadowPipRateAccumulated() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3F4);
    }

    void setShadowPipRateAccumulated(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3F4) = val;
    }

    float getShadowPipRateThreshold() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3F8);
    }

    void setShadowPipRateThreshold(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3F8) = val;
    }

    int getShadowPipRatePercentage() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3FC);
    }

    void setShadowPipRatePercentage(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x3FC) = val;
    }

    bool getFriendlyPlayer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x400);
    }

    void setFriendlyPlayer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x400) = val;
    }

    int getEmojiSkinTone() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x404);
    }

    void setEmojiSkinTone(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x404) = val;
    }

    unsigned int getShowPVPOption() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x408);
    }

    void setShowPVPOption(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x408) = val;
    }

    int getFavoriteSlot() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x40C);
    }

    void setFavoriteSlot(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x40C) = val;
    }

    unsigned char getCantripLevel() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x410);
    }

    void setCantripLevel(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x410) = val;
    }

    int getCantripXP() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x414);
    }

    void setCantripXP(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x414) = val;
    }

    float getArchmasteryBase() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x418);
    }

    void setArchmasteryBase(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x418) = val;
    }

    float getArchmasteryBonusFlat() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x41C);
    }

    void setArchmasteryBonusFlat(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x41C) = val;
    }

    float getArchmasteryBonusPercentage() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x420);
    }

    void setArchmasteryBonusPercentage(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x420) = val;
    }

    int getHighestCharacterWorldOnAccount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x154);
    }

    void setHighestCharacterWorldOnAccount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x154) = val;
    }

    unsigned int getSchoolID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setSchoolID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    int getLevelScaled() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x14C);
    }

    void setLevelScaled(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x14C) = val;
    }

    std::string getCurrentZoneName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x428);
    }

    void setCurrentZoneName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x428) = val;
    }

    unsigned char getMailSentToday() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x448);
    }

    void setMailSentToday(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x448) = val;
    }

    int GetCurrentHitpoints() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x153EE70);
        return inner(this);
    }

    int GetCurrentMana() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23CA0);
        return inner(this);
    }

    int GetCurrentGold() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x163BBE0);
        return inner(this);
    }

    int GetCurrentEventCurrency1() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23C90);
        return inner(this);
    }

    int GetCurrentEventCurrency2() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x172E4E0);
        return inner(this);
    }

    int GetCurrentPvPCurrency() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1325970);
        return inner(this);
    }

    int GetCurrentPvPTourneyCurrency() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23CB0);
        return inner(this);
    }

    float GetXPPercentIncrease() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23E00);
        return inner(this);
    }

    float GetEventCurrency1Percent() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23CD0);
        return inner(this);
    }

    float GetEventCurrency2Percent() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23CE0);
        return inner(this);
    }

    float GetPvPCurrencyPercent() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23DA0);
        return inner(this);
    }

    float GetPvPTourneyCurrencyPercent() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23DB0);
        return inner(this);
    }

    int GetBaseHitpoints() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41EC0);
        return inner(this);
    }

    int GetBaseMana() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE610);
        return inner(this);
    }

    int GetBaseEventCurrency1Pouch() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23C40);
        return inner(this);
    }

    int GetBaseEventCurrency2Pouch() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x14C1800);
        return inner(this);
    }

    int GetBasePvPCurrencyPouch() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23C50);
        return inner(this);
    }

    int GetBasePvPTourneyCurrencyPouch() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x132F600);
        return inner(this);
    }

    float GetPowerPipBase() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D90);
        return inner(this);
    }

    float GetPotionMax() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D80);
        return inner(this);
    }

    float GetPotionCharge() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D70);
        return inner(this);
    }

    float GetManaReducePercent() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D20);
        return inner(this);
    }

    int GetCurrentArenaPoints() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23C80);
        return inner(this);
    }

    int GetMaxEnergy() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D30);
        return inner(this);
    }

    int GetMaximumNumberOfIslands() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D40);
        return inner(this);
    }

    bool HasMastery(int a0) { // Function Generated
        using FunctionPointerType = bool (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A226F0);
        return inner(this, a0);
    }

    int GetBalanceMastery() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23C30);
        return inner(this);
    }

    int GetDeathMastery() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23CC0);
        return inner(this);
    }

    int GetFireMastery() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23CF0);
        return inner(this);
    }

    int GetIceMastery() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D00);
        return inner(this);
    }

    int GetLifeMastery() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D10);
        return inner(this);
    }

    int GetMythMastery() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D50);
        return inner(this);
    }

    int GetStormMastery() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23DF0);
        return inner(this);
    }

    float GetBlockRating() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23C60);
        return inner(this);
    }

    float GetCriticalHitRating() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23C70);
        return inner(this);
    }

    float GetBlockPercent() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15BA340);
        return inner(this);
    }

    float GetCriticalHitPercent() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15BA390);
        return inner(this);
    }

    float CalcDmgBonusPercent(int a0) { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20DF0);
        return inner(this, a0);
    }

    float CalcAccBonusPercent(int a0) { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20E30);
        return inner(this, a0);
    }

    float CalcAPBonusPercent(int a0) { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20E70);
        return inner(this, a0);
    }

    float CalcDmgReducePercent(int a0) { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20EB0);
        return inner(this, a0);
    }

    float CalcAccReducePercent(int a0) { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20F30);
        return inner(this, a0);
    }

    float CalcHealBonusPercent(int a0) { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20F70);
        return inner(this, a0);
    }

    float CalcHealIncBonusPercent(int a0) { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20FB0);
        return inner(this, a0);
    }

    int CalcSpellChargeBonus(int a0) { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A21030);
        return inner(this, a0);
    }

    float CalcDmgBonusFlat(int a0) { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A21060);
        return inner(this, a0);
    }

    float CalcDmgBonusPercentAll() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23AE0);
        return inner(this);
    }

    float CalcAccBonusPercentAll() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23AC0);
        return inner(this);
    }

    float CalcAPBonusPercentAll() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23AB0);
        return inner(this);
    }

    float CalcDmgReducePercentAll() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23AF0);
        return inner(this);
    }

    float CalcAccReducePercentAll() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23AD0);
        return inner(this);
    }

    float CalcHealBonusPercentAll() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23B10);
        return inner(this);
    }

    float CalcHealIncBonusPercentAll() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23B20);
        return inner(this);
    }

    int CalcSpellChargeBonusAll() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23B40);
        return inner(this);
    }

    float CalcPowerPipBonusPercentAll() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23B30);
        return inner(this);
    }

    int CalcTotalHitpoints() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20640);
        return inner(this);
    }

    int CalcMaxMana() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A206B0);
        return inner(this);
    }

    int CalcMaxEnergy() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20710);
        return inner(this);
    }

    float CalcFishingLuckBonusPercentAll() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23B00);
        return inner(this);
    }

    float CalcFishingLuckBonusPercent(int a0) { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A20FF0);
        return inner(this, a0);
    }

    float CalcWispBonusPercent() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23B70);
        return inner(this);
    }

    int GetPipConversionBaseAllSchools() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23D60);
        return inner(this);
    }

    float GetShadowPipRating() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A22D20);
        return inner(this);
    }

    float CalcTotalShadowPipRating() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23B50);
        return inner(this);
    }

    float GetShadowPipRateAccumulated() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23DC0);
        return inner(this);
    }

    float GetShadowPipRateThreshold() { // Function Generated
        using FunctionPointerType = float (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23DE0);
        return inner(this);
    }

    int GetShadowPipRatePercentage() { // Function Generated
        using FunctionPointerType = int (*)(WizGameStats *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1A23DD0);
        return inner(this);
    }

};