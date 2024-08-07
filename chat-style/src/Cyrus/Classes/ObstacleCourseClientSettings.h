#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WeightedList.h>
#include <Cyrus/Enums/ObstacleCourseLaunchCameraType.h>

class ObstacleCourseClientSettings : public PropertyClass {
public:
    std::string getLaunchCameraAsset() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLaunchCameraAsset(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getLaunchAltCameraAsset() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setLaunchAltCameraAsset(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getFinishCameraAsset() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setFinishCameraAsset(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    std::string getPowEffectAsset() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setPowEffectAsset(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    std::string getPoofEffectAsset() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setPoofEffectAsset(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    std::string getStartSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setStartSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    std::string getWinningSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setWinningSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    int getNumNearMisses() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setNumNearMisses(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    std::string getLaunchSpinAnim() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setLaunchSpinAnim(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    float getSpringboardVelocity() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setSpringboardVelocity(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    float getSpringboardHorizontalDistance() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x154);
    }

    void setSpringboardHorizontalDistance(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x154) = val;
    }

    float getLaunchFadeOutTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setLaunchFadeOutTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    float getLaunchFadeInTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x15C);
    }

    void setLaunchFadeInTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x15C) = val;
    }

    ObstacleCourseLaunchCameraType getLaunchCameraType() { // Property Generated Getter
      return *reinterpret_cast<ObstacleCourseLaunchCameraType*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setLaunchCameraType(ObstacleCourseLaunchCameraType val) { // Property Generated Setter
      *reinterpret_cast<ObstacleCourseLaunchCameraType*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    float getLaunchDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x17C);
    }

    void setLaunchDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x17C) = val;
    }

    float getSpringboardLaunchDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setSpringboardLaunchDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    float getPendulumLaunchDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x184);
    }

    void setPendulumLaunchDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x184) = val;
    }

    float getStartLaunchCamAboveWaterDistance() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setStartLaunchCamAboveWaterDistance(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    std::string getFloatingPenaltyStringKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setFloatingPenaltyStringKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    std::string getFloatingBonusStringKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1C0);
    }

    void setFloatingBonusStringKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1C0) = val;
    }

    std::string getFloatingReadyStringKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setFloatingReadyStringKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    std::string getFloatingGoStringKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setFloatingGoStringKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    float getWaitForRespawnTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setWaitForRespawnTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    float getWaitForFanfareTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x164);
    }

    void setWaitForFanfareTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x164) = val;
    }

    float getFinishFadeOutTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setFinishFadeOutTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    float getFinishFadeInTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x16C);
    }

    void setFinishFadeInTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x16C) = val;
    }

    float getWaitForScoreTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setWaitForScoreTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    float getTimeTextBlinkRate() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x174);
    }

    void setTimeTextBlinkRate(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x174) = val;
    }

    float getMaxLaunchVelocity() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x18C);
    }

    void setMaxLaunchVelocity(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x18C) = val;
    }

    int getWarningSeconds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setWarningSeconds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    float getSimTimeDelta() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x194);
    }

    void setSimTimeDelta(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x194) = val;
    }

    float getPushOutVelocity() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setPushOutVelocity(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    float getCameraCollisionRadius() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x19C);
    }

    void setCameraCollisionRadius(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x19C) = val;
    }

    std::string getFailSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setFailSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    std::string getTimeWarningSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setTimeWarningSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

    WeightedList getSplashSoundList() { // Property Generated Getter
      return *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setSplashSoundList(WeightedList val) { // Property Generated Setter
      *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    WeightedList getNearMissSoundList() { // Property Generated Getter
      return *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0x2C8);
    }

    void setNearMissSoundList(WeightedList val) { // Property Generated Setter
      *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0x2C8) = val;
    }

    WeightedList getSplashCinematicList() { // Property Generated Getter
      return *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0x330);
    }

    void setSplashCinematicList(WeightedList val) { // Property Generated Setter
      *reinterpret_cast<WeightedList*>(reinterpret_cast<uintptr_t>(this) + 0x330) = val;
    }

};