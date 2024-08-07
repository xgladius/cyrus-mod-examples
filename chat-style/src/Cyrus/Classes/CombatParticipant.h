#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatCheatSettings.h>
#include <Cyrus/Classes/DelaySpellEffect.h>
#include <Cyrus/Classes/ModifyPipRoundRateData.h>
#include <Cyrus/Classes/PipCount.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ShadowSpellTrackingData.h>
#include <Cyrus/Classes/SpellEffect.h>
#include <Cyrus/Classes/SpellNifSoundOverride.h>
#include <Cyrus/Classes/WizGameStats.h>
#include <Cyrus/Enums/CombatParticipant__PipAquiredByEnum.h>
#include <Cyrus/Enums/DynamicSigilSymbol.h>

class CombatParticipant : public PropertyClass {
public:
    unsigned __int64 getOwnerID.full() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setOwnerID.full(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned __int64 getTemplateID.full() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setTemplateID.full(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getIsPlayer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setIsPlayer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    unsigned __int64 getZoneID.full() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setZoneID.full(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    int getTeamID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setTeamID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    int getPrimaryMagicSchoolID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setPrimaryMagicSchoolID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    SharedPointer<PipCount> * getPipCount() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PipCount> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setPipCount(SharedPointer<PipCount> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PipCount> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    List<SharedPointer<ModifyPipRoundRateData>> * getPipRoundRates() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ModifyPipRoundRateData>> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setPipRoundRates(List<SharedPointer<ModifyPipRoundRateData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ModifyPipRoundRateData>> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    bool getPipsSuspended() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setPipsSuspended(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    int getStunned() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setStunned(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

    int getMindcontrolled() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setMindcontrolled(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    int getOriginalTeam() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setOriginalTeam(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    int getNAuraTurnLength() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC);
    }

    void setNAuraTurnLength(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xEC) = val;
    }

    int getClue() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setClue(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    int getRoundsDead() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setRoundsDead(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    int getNPolymorphTurnLength() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setNPolymorphTurnLength(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    int getPlayerHealth() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF4);
    }

    void setPlayerHealth(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF4) = val;
    }

    int getMaxPlayerHealth() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setMaxPlayerHealth(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    bool getHideCurrentHP() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xFC);
    }

    void setHideCurrentHP(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xFC) = val;
    }

    int getMaxHandSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setMaxHandSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    Hand* * getPHand() { // Property Generated Getter
      return reinterpret_cast<Hand* *>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setPHand(Hand* * val) { // Property Generated Setter
      *reinterpret_cast<Hand* **>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    Hand* * getPSavedHand() { // Property Generated Getter
      return reinterpret_cast<Hand* *>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setPSavedHand(Hand* * val) { // Property Generated Setter
      *reinterpret_cast<Hand* **>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    PlayDeck* * getPPlayDeck() { // Property Generated Getter
      return reinterpret_cast<PlayDeck* *>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setPPlayDeck(PlayDeck* * val) { // Property Generated Setter
      *reinterpret_cast<PlayDeck* **>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    PlayDeck* * getPSavedPlayDeck() { // Property Generated Getter
      return reinterpret_cast<PlayDeck* *>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setPSavedPlayDeck(PlayDeck* * val) { // Property Generated Setter
      *reinterpret_cast<PlayDeck* **>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    SharedPointer<WizGameStats> * getPSavedGameStats() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<WizGameStats> *>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setPSavedGameStats(SharedPointer<WizGameStats> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<WizGameStats> **>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    int getSavedPrimaryMagicSchoolID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setSavedPrimaryMagicSchoolID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    SharedPointer<WizGameStats> * getPGameStats() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<WizGameStats> *>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setPGameStats(SharedPointer<WizGameStats> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<WizGameStats> **>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    Color getColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    float getRotation() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x154);
    }

    void setRotation(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x154) = val;
    }

    float getRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    int getSubcircle() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x15C);
    }

    void setSubcircle(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x15C) = val;
    }

    bool getPvp() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setPvp(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    bool getRaid() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x161);
    }

    void setRaid(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x161) = val;
    }

    DynamicSigilSymbol getDynamicSymbol() { // Property Generated Getter
      return *reinterpret_cast<DynamicSigilSymbol*>(reinterpret_cast<uintptr_t>(this) + 0x164);
    }

    void setDynamicSymbol(DynamicSigilSymbol val) { // Property Generated Setter
      *reinterpret_cast<DynamicSigilSymbol*>(reinterpret_cast<uintptr_t>(this) + 0x164) = val;
    }

    float getAccuracyBonus() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x18C);
    }

    void setAccuracyBonus(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x18C) = val;
    }

    int getMinionSubCircle() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setMinionSubCircle(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    bool getIsMinion() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x194);
    }

    void setIsMinion(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x194) = val;
    }

    bool getIsAccompanyNPC() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19C);
    }

    void setIsAccompanyNPC(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x19C) = val;
    }

    List<SpellEffect> getHangingEffects() { // Property Generated Getter
      return *reinterpret_cast<List<SpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setHangingEffects(List<SpellEffect> val) { // Property Generated Setter
      *reinterpret_cast<List<SpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    List<SpellEffect> getPublicHangingEffects() { // Property Generated Getter
      return *reinterpret_cast<List<SpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setPublicHangingEffects(List<SpellEffect> val) { // Property Generated Setter
      *reinterpret_cast<List<SpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    List<SpellEffect> getAuraEffects() { // Property Generated Getter
      return *reinterpret_cast<List<SpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x1C0);
    }

    void setAuraEffects(List<SpellEffect> val) { // Property Generated Setter
      *reinterpret_cast<List<SpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x1C0) = val;
    }

    List<SharedPointer<ShadowSpellTrackingData>> * getShadowEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ShadowSpellTrackingData>> *>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setShadowEffects(List<SharedPointer<ShadowSpellTrackingData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ShadowSpellTrackingData>> **>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

    List<SpellEffect> getShadowSpellEffects() { // Property Generated Getter
      return *reinterpret_cast<List<SpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setShadowSpellEffects(List<SpellEffect> val) { // Property Generated Setter
      *reinterpret_cast<List<SpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    List<SharedPointer<SpellEffect>> * getDeathActivatedEffects() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setDeathActivatedEffects(List<SharedPointer<SpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    List<DelaySpellEffect> getDelayCastEffects() { // Property Generated Getter
      return *reinterpret_cast<List<DelaySpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setDelayCastEffects(List<DelaySpellEffect> val) { // Property Generated Setter
      *reinterpret_cast<List<DelaySpellEffect>*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    unsigned int getPolymorphSpellTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setPolymorphSpellTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

    std::string getSide() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x258);
    }

    void setSide(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x258) = val;
    }

    bool getShadowSpellsDisabled() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A0);
    }

    void setShadowSpellsDisabled(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A0) = val;
    }

    bool getIgnoreSpellsPvPOnlyFlag() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A1);
    }

    void setIgnoreSpellsPvPOnlyFlag(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A1) = val;
    }

    bool getIgnoreSpellsPvEOnlyFlag() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A2);
    }

    void setIgnoreSpellsPvEOnlyFlag(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A2) = val;
    }

    bool getBossMob() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A3);
    }

    void setBossMob(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A3) = val;
    }

    bool getHidePVPEnemyChat() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A4);
    }

    void setHidePVPEnemyChat(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2A4) = val;
    }

    List<int> getCombatTriggerIDs() { // Property Generated Getter
      return *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2B8);
    }

    void setCombatTriggerIDs(List<int> val) { // Property Generated Setter
      *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2B8) = val;
    }

    int getBacklash() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2D4);
    }

    void setBacklash(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2D4) = val;
    }

    int getPastBacklash() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2D8);
    }

    void setPastBacklash(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2D8) = val;
    }

    int getShadowCreatureLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2DC);
    }

    void setShadowCreatureLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2DC) = val;
    }

    int getPastShadowCreatureLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2E0);
    }

    void setPastShadowCreatureLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2E0) = val;
    }

    Vector<int> getShadowCreatureLevelCount() { // Property Generated Getter
      return *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2E8);
    }

    void setShadowCreatureLevelCount(Vector<int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2E8) = val;
    }

    SharedPointer<SpellEffect> * getInterceptEffect() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<SpellEffect> *>(reinterpret_cast<uintptr_t>(this) + 0x300);
    }

    void setInterceptEffect(SharedPointer<SpellEffect> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<SpellEffect> **>(reinterpret_cast<uintptr_t>(this) + 0x300) = val;
    }

    int getRoundsSinceShadowPip() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x320);
    }

    void setRoundsSinceShadowPip(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x320) = val;
    }

    SharedPointer<SpellEffect> * getPolymorphEffect() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<SpellEffect> *>(reinterpret_cast<uintptr_t>(this) + 0x338);
    }

    void setPolymorphEffect(SharedPointer<SpellEffect> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<SpellEffect> **>(reinterpret_cast<uintptr_t>(this) + 0x338) = val;
    }

    int getConfused() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC4);
    }

    void setConfused(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC4) = val;
    }

    int getConfusionTrigger() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setConfusionTrigger(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    bool getConfusionDisplay() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xCC);
    }

    void setConfusionDisplay(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xCC) = val;
    }

    bool getConfusedTarget() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xCD);
    }

    void setConfusedTarget(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xCD) = val;
    }

    bool getUntargetable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xCE);
    }

    void setUntargetable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xCE) = val;
    }

    int getUntargetableRounds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setUntargetableRounds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    bool getRestrictedTarget() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD4);
    }

    void setRestrictedTarget(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD4) = val;
    }

    bool getExitCombat() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD5);
    }

    void setExitCombat(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xD5) = val;
    }

    bool getStunnedDisplay() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setStunnedDisplay(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    bool getMindcontrolledDisplay() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setMindcontrolledDisplay(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    bool getAutoPass() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D0);
    }

    void setAutoPass(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D0) = val;
    }

    bool getVanish() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D1);
    }

    void setVanish(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D1) = val;
    }

    bool getMyTeamTurn() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D2);
    }

    void setMyTeamTurn(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2D2) = val;
    }

    CombatParticipant__PipAquiredByEnum getPlanningPhasePipAquiredType() { // Property Generated Getter
      return *reinterpret_cast<CombatParticipant__PipAquiredByEnum*>(reinterpret_cast<uintptr_t>(this) + 0x330);
    }

    void setPlanningPhasePipAquiredType(CombatParticipant__PipAquiredByEnum val) { // Property Generated Setter
      *reinterpret_cast<CombatParticipant__PipAquiredByEnum*>(reinterpret_cast<uintptr_t>(this) + 0x330) = val;
    }

    SharedPointer<CombatCheatSettings> * getCheatSettings() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<CombatCheatSettings> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setCheatSettings(SharedPointer<CombatCheatSettings> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<CombatCheatSettings> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned int getIsMonster() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setIsMonster(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    List<SharedPointer<SpellNifSoundOverride>> * getWeaponNifSoundList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellNifSoundOverride>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setWeaponNifSoundList(List<SharedPointer<SpellNifSoundOverride>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellNifSoundOverride>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    int getPetCombatTrigger() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C8);
    }

    void setPetCombatTrigger(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2C8) = val;
    }

    int getPetCombatTriggerTarget() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2CC);
    }

    void setPetCombatTriggerTarget(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2CC) = val;
    }

    float getShadowPipRateThreshold() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x348);
    }

    void setShadowPipRateThreshold(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x348) = val;
    }

    int getBaseSpellDamage() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x34C);
    }

    void setBaseSpellDamage(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x34C) = val;
    }

    float getStatDamage() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x350);
    }

    void setStatDamage(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x350) = val;
    }

    float getStatResist() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x354);
    }

    void setStatResist(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x354) = val;
    }

    float getStatPierce() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x358);
    }

    void setStatPierce(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x358) = val;
    }

    int getMobLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x35C);
    }

    void setMobLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x35C) = val;
    }

    bool getBPlayerTimeUpdated() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x360);
    }

    void setBPlayerTimeUpdated(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x360) = val;
    }

    bool getBPlayerTimeEliminated() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x361);
    }

    void setBPlayerTimeEliminated(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x361) = val;
    }

    bool getBPlayerTimeWarning() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x362);
    }

    void setBPlayerTimeWarning(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x362) = val;
    }

    float getDeckFullness() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x364);
    }

    void setDeckFullness(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x364) = val;
    }

    float getArchmasteryPoints() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x368);
    }

    void setArchmasteryPoints(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x368) = val;
    }

    float getMaxArchmasteryPoints() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x36C);
    }

    void setMaxArchmasteryPoints(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x36C) = val;
    }

    unsigned int getArchmasterySchool() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x370);
    }

    void setArchmasterySchool(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x370) = val;
    }

    unsigned int getArchmasteryFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x374);
    }

    void setArchmasteryFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x374) = val;
    }

};