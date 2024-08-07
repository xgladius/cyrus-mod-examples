#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SG_GameBlockType.h>
#include <Cyrus/Classes/SG_GameEvent.h>
#include <Cyrus/Classes/SG_GameInteraction.h>
#include <Cyrus/Classes/SG_GameLevelData.h>
#include <Cyrus/Classes/SG_GamePower.h>
#include <Cyrus/Classes/SG_GameScoreMultiplier.h>

class PetSiegeGameManager : public PropertyClass {
public:
    float getFPetMass() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setFPetMass(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    float getFBounce() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setFBounce(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    float getFBounceThreshold() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setFBounceThreshold(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float getFMU() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setFMU(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    float getFERP() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setFERP(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    float getFCFM() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setFCFM(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    float getFContactSurfaceDepth() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setFContactSurfaceDepth(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    bool getBAutoDisable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setBAutoDisable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    float getFAutoDisableLinearThreshold() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setFAutoDisableLinearThreshold(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    float getFAutoDisableAngularThreshold() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setFAutoDisableAngularThreshold(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    int getIAutoDisableSteps() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setIAutoDisableSteps(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    float getFAutoDisableTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setFAutoDisableTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    float getFContactMaxCorrectingVel() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setFContactMaxCorrectingVel(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    float getFGravityX() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setFGravityX(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    float getFGravityY() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setFGravityY(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    float getFGravityZ() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setFGravityZ(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int getPerShotLeftoverScoreBonus() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setPerShotLeftoverScoreBonus(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    int getISoundCollisionThreshold() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setISoundCollisionThreshold(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    List<SharedPointer<SG_GamePower>> * getGamePowers() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SG_GamePower>> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setGamePowers(List<SharedPointer<SG_GamePower>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SG_GamePower>> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    List<SharedPointer<SG_GameInteraction>> * getGameInteractions() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SG_GameInteraction>> *>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setGameInteractions(List<SharedPointer<SG_GameInteraction>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SG_GameInteraction>> **>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    List<SharedPointer<SG_GameEvent>> * getGameEvents() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SG_GameEvent>> *>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setGameEvents(List<SharedPointer<SG_GameEvent>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SG_GameEvent>> **>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    List<SharedPointer<SG_GameLevelData>> * getGameLevelData() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SG_GameLevelData>> *>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setGameLevelData(List<SharedPointer<SG_GameLevelData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SG_GameLevelData>> **>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    List<SharedPointer<SG_GameBlockType>> * getBlockTypes() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SG_GameBlockType>> *>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setBlockTypes(List<SharedPointer<SG_GameBlockType>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SG_GameBlockType>> **>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    List<SharedPointer<SG_GameScoreMultiplier>> * getComboMultipliers() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SG_GameScoreMultiplier>> *>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setComboMultipliers(List<SharedPointer<SG_GameScoreMultiplier>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SG_GameScoreMultiplier>> **>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

};