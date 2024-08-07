#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SigilTemplate.h>
#include <Cyrus/Classes/SpellEffect.h>
#include <Cyrus/Enums/kShadow_Threshold_Type.h>

class CombatSigilTemplate : public SigilTemplate {
public:
    float getEngageRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setEngageRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    Vector<SharedPointer<SpellEffect>> * getBattlefieldEffects() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<SpellEffect>> *>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setBattlefieldEffects(Vector<SharedPointer<SpellEffect>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<SpellEffect>> **>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    std::string getPlayerVictoryCinematic() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setPlayerVictoryCinematic(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    std::string getCombatMusic() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setCombatMusic(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    std::string getPrePlanningCinematicOverride() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setPrePlanningCinematicOverride(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    std::string getPlanningCinematicOverride() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setPlanningCinematicOverride(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    kShadow_Threshold_Type getShadowThresholdType() { // Property Generated Getter
      return *reinterpret_cast<kShadow_Threshold_Type*>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setShadowThresholdType(kShadow_Threshold_Type val) { // Property Generated Setter
      *reinterpret_cast<kShadow_Threshold_Type*>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

    float getShadowThresholdFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D4);
    }

    void setShadowThresholdFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D4) = val;
    }

    float getShadowPipRatingFactor() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setShadowPipRatingFactor(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    float getScalarDamagePvP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1DC);
    }

    void setScalarDamagePvP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1DC) = val;
    }

    float getScalarResistPvP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setScalarResistPvP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    float getScalarPiercePvP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E4);
    }

    void setScalarPiercePvP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E4) = val;
    }

    float getScalarDamagePvE() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setScalarDamagePvE(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    float getScalarResistPvE() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1EC);
    }

    void setScalarResistPvE(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1EC) = val;
    }

    float getScalarPiercePvE() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setScalarPiercePvE(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    float getDamageLimitPvP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F4);
    }

    void setDamageLimitPvP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F4) = val;
    }

    float getDK0PvP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setDK0PvP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

    float getDN0PvP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1FC);
    }

    void setDN0PvP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1FC) = val;
    }

    float getResistLimitPvP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setResistLimitPvP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    float getRK0PvP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x204);
    }

    void setRK0PvP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x204) = val;
    }

    float getRN0PvP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setRN0PvP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    float getDamageLimitPvE() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x20C);
    }

    void setDamageLimitPvE(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x20C) = val;
    }

    float getDK0PvE() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setDK0PvE(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    float getDN0PvE() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x214);
    }

    void setDN0PvE(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x214) = val;
    }

    float getResistLimitPvE() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setResistLimitPvE(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    float getRK0PvE() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x21C);
    }

    void setRK0PvE(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x21C) = val;
    }

    float getRN0PvE() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setRN0PvE(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

};