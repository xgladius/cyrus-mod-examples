#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>

class ActorDialogEntry : public PropertyClass {
public:
    SharedPointer<RequirementList> * getRequirements() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<RequirementList> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRequirements(SharedPointer<RequirementList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<RequirementList> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getDialog() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDialog(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    std::string getPicture() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPicture(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getSoundFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setSoundFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getAction() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setAction(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    std::string getDialogEvent() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setDialogEvent(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    unsigned int getActorTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setActorTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    std::string getCameraName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setCameraName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    float getInterpolationDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setInterpolationDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    float getCameraOffsetX() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setCameraOffsetX(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    float getCameraOffsetY() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x124);
    }

    void setCameraOffsetY(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x124) = val;
    }

    float getCameraOffsetZ() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setCameraOffsetZ(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    float getPitch() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setPitch(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    float getYaw() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x12C);
    }

    void setYaw(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x12C) = val;
    }

    float getRoll() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x134);
    }

    void setRoll(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x134) = val;
    }

    std::string getCameraShakeType() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setCameraShakeType(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    float getCameraShakeDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setCameraShakeDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    float getCameraShakeAmplitude() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x164);
    }

    void setCameraShakeAmplitude(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x164) = val;
    }

    bool getBypassCameraOnReview() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setBypassCameraOnReview(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    std::string getCameraZoneName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setCameraZoneName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    float getDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    float getDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x194);
    }

    void setDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x194) = val;
    }

    int getCameraHidePlayers() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setCameraHidePlayers(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    gid getWalkAwayNpcTemplateID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setWalkAwayNpcTemplateID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    float getWalkAwayExitDirectionInDegrees() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setWalkAwayExitDirectionInDegrees(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    float getWalkAwayFadeTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1AC);
    }

    void setWalkAwayFadeTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1AC) = val;
    }

    bool getWalkAwayUseCurrentFacing() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setWalkAwayUseCurrentFacing(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    std::string getStandInPlayerTag() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setStandInPlayerTag(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    bool getFadeOutCamera() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setFadeOutCamera(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    bool getSnapCameraToPlayerAtExit() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1D9);
    }

    void setSnapCameraToPlayerAtExit(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1D9) = val;
    }

    std::string getSecondaryCameraName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setSecondaryCameraName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    float getSecondaryInterpolationDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setSecondaryInterpolationDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    List<std::string> getNpcStandInList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setNpcStandInList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    List<std::string> getDialogAnimationList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setDialogAnimationList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    List<std::string> getDialogTurningList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x228);
    }

    void setDialogTurningList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x228) = val;
    }

    float getNpcYawOffsetInDegrees() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x238);
    }

    void setNpcYawOffsetInDegrees(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x238) = val;
    }

    bool getAllowPlayerToMove() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x23C);
    }

    void setAllowPlayerToMove(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x23C) = val;
    }

    std::string getSoundEffectFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setSoundEffectFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

    std::string getMusicFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setMusicFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    bool getNonStackableMusic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x280);
    }

    void setNonStackableMusic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x280) = val;
    }

    bool getNonRepeatableMusic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x281);
    }

    void setNonRepeatableMusic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x281) = val;
    }

    bool getPlayMusicAtSFXVolume() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x282);
    }

    void setPlayMusicAtSFXVolume(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x282) = val;
    }

    float getSoundEffectDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x284);
    }

    void setSoundEffectDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x284) = val;
    }

    float getMusicDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x288);
    }

    void setMusicDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x288) = val;
    }

    float getMusicFadeTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x28C);
    }

    void setMusicFadeTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x28C) = val;
    }

    bool getDontReleaseCameraAtExit() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1DA);
    }

    void setDontReleaseCameraAtExit(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1DA) = val;
    }

    bool getDisableBackButton() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x290);
    }

    void setDisableBackButton(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x290) = val;
    }

    bool getEnableExitButton() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x291);
    }

    void setEnableExitButton(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x291) = val;
    }

    std::string getCameraFadeType() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x298);
    }

    void setCameraFadeType(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x298) = val;
    }

    float getCameraFadeTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2B8);
    }

    void setCameraFadeTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2B8) = val;
    }

    std::string getIdleAnimation() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2C0);
    }

    void setIdleAnimation(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2C0) = val;
    }

    float getSpamTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E0);
    }

    void setSpamTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E0) = val;
    }

    bool getPlaySoundIfSpamming() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2E4);
    }

    void setPlaySoundIfSpamming(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2E4) = val;
    }

    bool getPlayMusicIfSpamming() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2E5);
    }

    void setPlayMusicIfSpamming(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2E5) = val;
    }

    float getStopMusicFadeTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E8);
    }

    void setStopMusicFadeTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2E8) = val;
    }

    float getRestartMusicFadeTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2EC);
    }

    void setRestartMusicFadeTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2EC) = val;
    }

    bool getMeetsRequirements() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2F0);
    }

    void setMeetsRequirements(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2F0) = val;
    }

    float getSecondaryCameraInitalDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x204);
    }

    void setSecondaryCameraInitalDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x204) = val;
    }

    bool getDisplayButtonsOnTimedDialog() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2F1);
    }

    void setDisplayButtonsOnTimedDialog(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x2F1) = val;
    }

};