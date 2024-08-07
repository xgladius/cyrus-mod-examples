#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>
#include <Cyrus/Classes/SpellRank.h>
#include <Cyrus/Enums/SpellEffect__kDelayOrder.h>
#include <Cyrus/Enums/SpellTemplate__kSpellSourceType.h>

class SpellTemplate : public CoreTemplate {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    std::string getDescription() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setDescription(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    std::string getAdvancedDescription() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setAdvancedDescription(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    std::string getDisplayName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setDisplayName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    std::string getSpellBase() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setSpellBase(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    Vector<SharedPointer<SpellEffect>> * getEffects() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<SpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setEffects(Vector<SharedPointer<SpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<SpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    std::string getSMagicSchoolName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setSMagicSchoolName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    std::string getSTypeName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setSTypeName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    int getTrainingCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setTrainingCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    int getAccuracy() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x184);
    }

    void setAccuracy(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x184) = val;
    }

    int getBaseCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setBaseCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    int getCreditsCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC);
    }

    void setCreditsCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC) = val;
    }

    int getPvpCurrencyCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setPvpCurrencyCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    int getPvpTourneyCurrencyCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF4);
    }

    void setPvpTourneyCurrencyCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF4) = val;
    }

    std::string getBoosterPackIcon() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setBoosterPackIcon(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    List<unsigned int> getValidTargetSpells() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setValidTargetSpells(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    bool getPvP() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setPvP(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    bool getPvE() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x199);
    }

    void setPvE(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x199) = val;
    }

    bool getNoPvPEnchant() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19A);
    }

    void setNoPvPEnchant(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19A) = val;
    }

    bool getNoPvEEnchant() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19B);
    }

    void setNoPvEEnchant(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19B) = val;
    }

    bool getBattlegroundsOnly() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19C);
    }

    void setBattlegroundsOnly(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19C) = val;
    }

    bool getTreasure() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19D);
    }

    void setTreasure(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19D) = val;
    }

    bool getNoDiscard() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19E);
    }

    void setNoDiscard(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19E) = val;
    }

    bool getLeavesPlayWhenCast() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x214);
    }

    void setLeavesPlayWhenCast(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x214) = val;
    }

    int getImageIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setImageIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    std::string getImageName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setImageName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    bool getCloaked() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1E9);
    }

    void setCloaked(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1E9) = val;
    }

    bool getCasterInvisible() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1EA);
    }

    void setCasterInvisible(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1EA) = val;
    }

    List<std::string> getAdjectives() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setAdjectives(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

    SpellTemplate__kSpellSourceType getSpellSourceType() { // Property Generated Getter
      return *reinterpret_cast<SpellTemplate__kSpellSourceType*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setSpellSourceType(SpellTemplate__kSpellSourceType val) { // Property Generated Setter
      *reinterpret_cast<SpellTemplate__kSpellSourceType*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    std::string getCloakedName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setCloakedName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    RequirementList* * getPurchaseRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setPurchaseRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    std::string getDescriptionTrainer() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setDescriptionTrainer(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    std::string getDescriptionCombatHUD() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x288);
    }

    void setDescriptionCombatHUD(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x288) = val;
    }

    int getDisplayIndex() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2A8);
    }

    void setDisplayIndex(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2A8) = val;
    }

    bool getHiddenFromEffectsWindow() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2AC);
    }

    void setHiddenFromEffectsWindow(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2AC) = val;
    }

    bool getIgnoreCharms() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2AD);
    }

    void setIgnoreCharms(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2AD) = val;
    }

    bool getAlwaysFizzle() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2AE);
    }

    void setAlwaysFizzle(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2AE) = val;
    }

    std::string getSpellCategory() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2B0);
    }

    void setSpellCategory(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2B0) = val;
    }

    bool getShowPolymorphedName() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D0);
    }

    void setShowPolymorphedName(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D0) = val;
    }

    bool getSkipTruncation() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D1);
    }

    void setSkipTruncation(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D1) = val;
    }

    unsigned int getMaxCopies() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2D4);
    }

    void setMaxCopies(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x2D4) = val;
    }

    int getLevelRestriction() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2D8);
    }

    void setLevelRestriction(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2D8) = val;
    }

    bool getDelayEnchantment() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2DC);
    }

    void setDelayEnchantment(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2DC) = val;
    }

    SpellEffect__kDelayOrder getDelayEnchantmentOrder() { // Property Generated Getter
      return *reinterpret_cast<SpellEffect__kDelayOrder*>(reinterpret_cast<uintptr_t>(this) + 0x2E0);
    }

    void setDelayEnchantmentOrder(SpellEffect__kDelayOrder val) { // Property Generated Setter
      *reinterpret_cast<SpellEffect__kDelayOrder*>(reinterpret_cast<uintptr_t>(this) + 0x2E0) = val;
    }

    std::string getPreviousSpellName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E8);
    }

    void setPreviousSpellName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E8) = val;
    }

    std::string getCardFront() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setCardFront(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    bool getUseGloss() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setUseGloss(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    bool getIgnoreDispel() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x308);
    }

    void setIgnoreDispel(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x308) = val;
    }

    bool getBackRowFriendly() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x309);
    }

    void setBackRowFriendly(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x309) = val;
    }

    SharedPointer<SpellRank> * getSpellRank() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<SpellRank> *>(reinterpret_cast<uintptr_t>(this) + 0x310);
    }

    void setSpellRank(SharedPointer<SpellRank> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<SpellRank> **>(reinterpret_cast<uintptr_t>(this) + 0x310) = val;
    }

};