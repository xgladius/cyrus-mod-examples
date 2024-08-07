#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AlternateTurnsCombatRule.h>
#include <Cyrus/Classes/CombatAction.h>
#include <Cyrus/Classes/CombatParticipant.h>
#include <Cyrus/Classes/CombatRule.h>
#include <Cyrus/Classes/DuelModifier.h>
#include <Cyrus/Classes/DynamicSigilInstance.h>
#include <Cyrus/Classes/GameEffectContainer.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/GameObjectAnimStateTracker.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ShadowPipRule.h>
#include <Cyrus/Enums/Duel__SigilInitiativeSwitchMode.h>
#include <Cyrus/Enums/kDuelExecutionOrder.h>
#include <Cyrus/Enums/kDuelPhase.h>

class Duel : public PropertyClass {
public:
    Vector<SharedPointer<CombatParticipant>> * getFlatParticipantList() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<CombatParticipant>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setFlatParticipantList(Vector<SharedPointer<CombatParticipant>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<CombatParticipant>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    SharedPointer<DynamicSigilInstance> * getDynamicTeams() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<DynamicSigilInstance> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setDynamicTeams(SharedPointer<DynamicSigilInstance> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<DynamicSigilInstance> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    unsigned int getDynamicTurn() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setDynamicTurn(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    unsigned int getDynamicTurnSubcircles() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setDynamicTurnSubcircles(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    int getDynamicTurnCounter() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setDynamicTurnCounter(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    unsigned __int64 getDuelID.full() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDuelID.full(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    float getPlanningTimer() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setPlanningTimer(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    Vector3D getPosition() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setPosition(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    float getYaw() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setYaw(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    bool getDisableTimer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB3);
    }

    void setDisableTimer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB3) = val;
    }

    bool getTutorialMode() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB4);
    }

    void setTutorialMode(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB4) = val;
    }

    int getFirstTeamToAct() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setFirstTeamToAct(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    CombatResolver* * getCombatResolver() { // Property Generated Getter
      return reinterpret_cast<CombatResolver* *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setCombatResolver(CombatResolver* * val) { // Property Generated Setter
      *reinterpret_cast<CombatResolver* **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    bool getBPVP() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setBPVP(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    bool getBBattleground() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB1);
    }

    void setBBattleground(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB1) = val;
    }

    bool getBRaid() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB2);
    }

    void setBRaid(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB2) = val;
    }

    int getRoundNum() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setRoundNum(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    float getExecutionPhaseTimer() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setExecutionPhaseTimer(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    List<CombatAction> getExecutionPhaseCombatActions() { // Property Generated Getter
      return *reinterpret_cast<List<CombatAction>*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setExecutionPhaseCombatActions(List<CombatAction> val) { // Property Generated Setter
      *reinterpret_cast<List<CombatAction>*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    List<CombatAction> getSigilActions() { // Property Generated Getter
      return *reinterpret_cast<List<CombatAction>*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setSigilActions(List<CombatAction> val) { // Property Generated Setter
      *reinterpret_cast<List<CombatAction>*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    SharedPointer<ShadowPipRule> * getShadowPipRule() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ShadowPipRule> *>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setShadowPipRule(SharedPointer<ShadowPipRule> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ShadowPipRule> **>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    GameObjectAnimStateTracker getGameObjectAnimStateTracker() { // Property Generated Getter
      return *reinterpret_cast<GameObjectAnimStateTracker*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setGameObjectAnimStateTracker(GameObjectAnimStateTracker val) { // Property Generated Setter
      *reinterpret_cast<GameObjectAnimStateTracker*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    kDuelPhase getDuelPhase() { // Property Generated Getter
      return *reinterpret_cast<kDuelPhase*>(reinterpret_cast<uintptr_t>(this) + 0xC4);
    }

    void setDuelPhase(kDuelPhase val) { // Property Generated Setter
      *reinterpret_cast<kDuelPhase*>(reinterpret_cast<uintptr_t>(this) + 0xC4) = val;
    }

    SharedPointer<DuelModifier> * getDuelModifier() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<DuelModifier> *>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setDuelModifier(SharedPointer<DuelModifier> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<DuelModifier> **>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    Duel__SigilInitiativeSwitchMode getInitiativeSwitchMode() { // Property Generated Getter
      return *reinterpret_cast<Duel__SigilInitiativeSwitchMode*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setInitiativeSwitchMode(Duel__SigilInitiativeSwitchMode val) { // Property Generated Setter
      *reinterpret_cast<Duel__SigilInitiativeSwitchMode*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    int getInitiativeSwitchRounds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x184);
    }

    void setInitiativeSwitchRounds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x184) = val;
    }

    List<SharedPointer<CombatRule>> * getCombatRules() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CombatRule>> *>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setCombatRules(List<SharedPointer<CombatRule>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CombatRule>> **>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

    List<SharedPointer<GameEffectInfo>> * getGameEffectInfo() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setGameEffectInfo(List<SharedPointer<GameEffectInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    SharedPointer<GameEffectContainer> * getPStatEffects() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<GameEffectContainer> *>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setPStatEffects(SharedPointer<GameEffectContainer> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<GameEffectContainer> **>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    SharedPointer<AlternateTurnsCombatRule> * getAlternateTurnCombatRule() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<AlternateTurnsCombatRule> *>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setAlternateTurnCombatRule(SharedPointer<AlternateTurnsCombatRule> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<AlternateTurnsCombatRule> **>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    int getAltTurnCounter() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setAltTurnCounter(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    int getOriginalFirstTeamToAct() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setOriginalFirstTeamToAct(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

    kDuelExecutionOrder getExecutionOrder() { // Property Generated Getter
      return *reinterpret_cast<kDuelExecutionOrder*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setExecutionOrder(kDuelExecutionOrder val) { // Property Generated Setter
      *reinterpret_cast<kDuelExecutionOrder*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    bool getNoHenchmen() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x214);
    }

    void setNoHenchmen(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x214) = val;
    }

    bool getSpellTruncation() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x21C);
    }

    void setSpellTruncation(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x21C) = val;
    }

    float getShadowThresholdFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x224);
    }

    void setShadowThresholdFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x224) = val;
    }

    float getShadowPipRatingFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x228);
    }

    void setShadowPipRatingFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x228) = val;
    }

    float getDefaultShadowPipRating() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x22C);
    }

    void setDefaultShadowPipRating(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x22C) = val;
    }

    float getShadowPipThresholdTeam0() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x230);
    }

    void setShadowPipThresholdTeam0(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x230) = val;
    }

    float getShadowPipThresholdTeam1() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x234);
    }

    void setShadowPipThresholdTeam1(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x234) = val;
    }

    float getMaxArchmasteryTeam0() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x238);
    }

    void setMaxArchmasteryTeam0(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x238) = val;
    }

    float getMaxArchmasteryTeam1() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x23C);
    }

    void setMaxArchmasteryTeam1(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x23C) = val;
    }

    float getScalarDamage() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x258);
    }

    void setScalarDamage(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x258) = val;
    }

    float getScalarResist() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x25C);
    }

    void setScalarResist(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x25C) = val;
    }

    float getScalarPierce() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setScalarPierce(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    float getDamageLimit() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x264);
    }

    void setDamageLimit(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x264) = val;
    }

    float getDK0() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setDK0(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    float getDN0() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x26C);
    }

    void setDN0(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x26C) = val;
    }

    float getResistLimit() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x270);
    }

    void setResistLimit(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x270) = val;
    }

    float getRK0() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x274);
    }

    void setRK0(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x274) = val;
    }

    float getRN0() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x278);
    }

    void setRN0(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x278) = val;
    }

    bool getFullPartyGroup() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x27C);
    }

    void setFullPartyGroup(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x27C) = val;
    }

    float getMatchTimer() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x290);
    }

    void setMatchTimer(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x290) = val;
    }

    int getBonusTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x294);
    }

    void setBonusTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x294) = val;
    }

    int getPassPenalty() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x298);
    }

    void setPassPenalty(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x298) = val;
    }

    int getYellowTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x29C);
    }

    void setYellowTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x29C) = val;
    }

    int getRedTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2A0);
    }

    void setRedTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2A0) = val;
    }

    int getMinTurnTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2A4);
    }

    void setMinTurnTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2A4) = val;
    }

    bool getBIsPlayerTimedDuel() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x27D);
    }

    void setBIsPlayerTimedDuel(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x27D) = val;
    }

    float getHideNoncombatantDistance() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setHideNoncombatantDistance(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

};