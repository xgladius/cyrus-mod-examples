#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellEffect.h>

class DuelModifier : public PropertyClass {
public:
    List<std::string> getCombatTriggers() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setCombatTriggers(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getNoTreasureCards() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x89);
    }

    void setNoTreasureCards(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x89) = val;
    }

    List<SharedPointer<SpellEffect>> * getBattlefieldEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBattlefieldEffects(List<SharedPointer<SpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<GameEffectInfo>> * getGameEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setGameEffects(List<SharedPointer<GameEffectInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    bool getOnlyTreasureCards() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8A);
    }

    void setOnlyTreasureCards(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8A) = val;
    }

    bool getNoShadowSpells() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8B);
    }

    void setNoShadowSpells(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8B) = val;
    }

    bool getNoCrits() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setNoCrits(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    bool getNoEnchantedTreasureCards() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setNoEnchantedTreasureCards(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    bool getNoEnchantmentSpells() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8D);
    }

    void setNoEnchantmentSpells(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8D) = val;
    }

    bool getNoMaycastSpells() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8E);
    }

    void setNoMaycastSpells(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8E) = val;
    }

    bool getEnableSpellLevelRestrictions() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8F);
    }

    void setEnableSpellLevelRestrictions(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8F) = val;
    }

    bool getIgnoreSpellsPvPOnlyFlag() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setIgnoreSpellsPvPOnlyFlag(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    bool getIgnoreSpellsPvEOnlyFlag() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x91);
    }

    void setIgnoreSpellsPvEOnlyFlag(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x91) = val;
    }

    List<int> getRequiredSpellsAdjectives() { // Property Generated Getter
      return *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setRequiredSpellsAdjectives(List<int> val) { // Property Generated Setter
      *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    List<int> getBannedSpellsAdjectives() { // Property Generated Getter
      return *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setBannedSpellsAdjectives(List<int> val) { // Property Generated Setter
      *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

};