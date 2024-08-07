#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatRule.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>

class DuelModifierTemplate : public CoreTemplate {
public:
    unsigned int getTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getDescription() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setDescription(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    List<std::string> getCombatTriggers() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setCombatTriggers(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    Vector<SharedPointer<SpellEffect>> * getBattlefieldEffects() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<SpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setBattlefieldEffects(Vector<SharedPointer<SpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<SpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    List<SharedPointer<GameEffectInfo>> * getGameEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setGameEffects(List<SharedPointer<GameEffectInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    List<SharedPointer<CombatRule>> * getCombatRules() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CombatRule>> *>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setCombatRules(List<SharedPointer<CombatRule>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CombatRule>> **>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    bool getNoCrits() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setNoCrits(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    bool getNoTreasureCards() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE1);
    }

    void setNoTreasureCards(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE1) = val;
    }

    List<int> getBannedEquipment() { // Property Generated Getter
      return *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setBannedEquipment(List<int> val) { // Property Generated Setter
      *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    List<std::string> getBannedEquipmentSlots() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setBannedEquipmentSlots(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    List<std::string> getBannedSchools() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setBannedSchools(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    List<std::string> getRequiredSpellsAdjectives() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setRequiredSpellsAdjectives(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    List<std::string> getBannedSpellsAdjectives() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setBannedSpellsAdjectives(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    std::string getLeftDoodle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E8);
    }

    void setLeftDoodle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E8) = val;
    }

    std::string getRightDoodle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x308);
    }

    void setRightDoodle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x308) = val;
    }

    bool getOnlyTreasureCards() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE2);
    }

    void setOnlyTreasureCards(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE2) = val;
    }

    bool getNoShadowSpells() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE3);
    }

    void setNoShadowSpells(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE3) = val;
    }

    bool getNoEnchantedTreasureCards() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setNoEnchantedTreasureCards(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    bool getNoEnchantmentSpells() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE5);
    }

    void setNoEnchantmentSpells(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE5) = val;
    }

    bool getNoMaycastSpells() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE6);
    }

    void setNoMaycastSpells(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE6) = val;
    }

    bool getEnableSpellLevelRestrictions() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE7);
    }

    void setEnableSpellLevelRestrictions(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE7) = val;
    }

    bool getIgnoreSpellsPvPOnlyFlag() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setIgnoreSpellsPvPOnlyFlag(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    bool getIgnoreSpellsPvEOnlyFlag() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE9);
    }

    void setIgnoreSpellsPvEOnlyFlag(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE9) = val;
    }

    bool getNewRulesFlag() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2E0);
    }

    void setNewRulesFlag(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2E0) = val;
    }

    std::string getRuleText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1C0);
    }

    void setRuleText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1C0) = val;
    }

    std::string getGameTypeText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setGameTypeText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    std::string getCombatTriggersDescText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setCombatTriggersDescText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    std::string getBattlefieldEffectsDescText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setBattlefieldEffectsDescText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    std::string getGamedEffectsDescText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setGamedEffectsDescText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    std::string getSpellLevelRestrictionsDescText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setSpellLevelRestrictionsDescText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

    std::string getCombatRulesDescText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setCombatRulesDescText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    std::string getBannedEquipmentDescText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x280);
    }

    void setBannedEquipmentDescText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x280) = val;
    }

    std::string getRequiredSpellsDescText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2A0);
    }

    void setRequiredSpellsDescText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2A0) = val;
    }

    std::string getBannedSpellsDescText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2C0);
    }

    void setBannedSpellsDescText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2C0) = val;
    }

};