#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClassProjectActivity.h>
#include <Cyrus/Classes/ClassProjectFinalReward.h>
#include <Cyrus/Classes/ClassProjectGlobalLootPoint.h>
#include <Cyrus/Classes/ClassProjectLocation.h>
#include <Cyrus/Classes/ClassProjectReward.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/ClassProjectType.h>

class ClassProjectTemplate : public PropertyClass {
public:
    std::string getProjectName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setProjectName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    std::string getProjectTitle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setProjectTitle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getProjectDescription() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setProjectDescription(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    ClassProjectType getProjectType() { // Property Generated Getter
      return *reinterpret_cast<ClassProjectType*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setProjectType(ClassProjectType val) { // Property Generated Setter
      *reinterpret_cast<ClassProjectType*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    std::string getInitialHoliday() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setInitialHoliday(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    int getMaximumLengthInDays() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setMaximumLengthInDays(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    int getCrownsCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setCrownsCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    int getUseRankAsProgress() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setUseRankAsProgress(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    int getRankProgressOffset() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setRankProgressOffset(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    int getMinimumCreditsPerDay() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setMinimumCreditsPerDay(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    unsigned int getLeaderboardRewardItemID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xEC);
    }

    void setLeaderboardRewardItemID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xEC) = val;
    }

    int getLeaderboardSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setLeaderboardSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    std::string getMainDoodle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setMainDoodle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    int getPurchasedCredits() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setPurchasedCredits(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    int getFriendLootPosition() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x11C);
    }

    void setFriendLootPosition(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x11C) = val;
    }

    std::string getFriendLootTable() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setFriendLootTable(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    std::string getEnterPortalText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setEnterPortalText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    int getGoldCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setGoldCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    int getNumberOfGoldCredits() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x164);
    }

    void setNumberOfGoldCredits(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x164) = val;
    }

    int getRestoreHealthAndManaAtExit() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setRestoreHealthAndManaAtExit(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    int getEndingGracePeriodInDays() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x16C);
    }

    void setEndingGracePeriodInDays(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x16C) = val;
    }

    std::string getEventTeleportZone() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setEventTeleportZone(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    std::string getEventTeleportLocation() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setEventTeleportLocation(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    int getSubscriberCreditsPerDay() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setSubscriberCreditsPerDay(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    std::string getExtendedTemplateName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setExtendedTemplateName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    std::string getCreditsOverrideName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setCreditsOverrideName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    int getSortPriority() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setSortPriority(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

    int getExcludeFromSeasonPass() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1FC);
    }

    void setExcludeFromSeasonPass(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1FC) = val;
    }

    int getIsSeasonPass() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setIsSeasonPass(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    int getAutoStartYear() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x204);
    }

    void setAutoStartYear(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x204) = val;
    }

    int getAutoStartMonth() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setAutoStartMonth(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    int getAutoStartDay() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x20C);
    }

    void setAutoStartDay(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x20C) = val;
    }

    int getMaximumSeasonPassPoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setMaximumSeasonPassPoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    int getSubscriberCownsCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x214);
    }

    void setSubscriberCownsCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x214) = val;
    }

    int getHideGlobalProgressBar() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setHideGlobalProgressBar(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    std::string getSeasonPassPicture() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x228);
    }

    void setSeasonPassPicture(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x228) = val;
    }

    std::string getTop10LeaderboardBadgeName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setTop10LeaderboardBadgeName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    std::string getTop100LeaderboardBadgeName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setTop100LeaderboardBadgeName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    std::string getTop1LeaderboardBadgeName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x288);
    }

    void setTop1LeaderboardBadgeName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x288) = val;
    }

    List<SharedPointer<ClassProjectActivity>> * getActivityList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ClassProjectActivity>> *>(reinterpret_cast<uintptr_t>(this) + 0x2A8);
    }

    void setActivityList(List<SharedPointer<ClassProjectActivity>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ClassProjectActivity>> **>(reinterpret_cast<uintptr_t>(this) + 0x2A8) = val;
    }

    List<SharedPointer<ClassProjectReward>> * getRewardList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ClassProjectReward>> *>(reinterpret_cast<uintptr_t>(this) + 0x2B8);
    }

    void setRewardList(List<SharedPointer<ClassProjectReward>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ClassProjectReward>> **>(reinterpret_cast<uintptr_t>(this) + 0x2B8) = val;
    }

    List<SharedPointer<ClassProjectReward>> * getTokenRewardList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ClassProjectReward>> *>(reinterpret_cast<uintptr_t>(this) + 0x2C8);
    }

    void setTokenRewardList(List<SharedPointer<ClassProjectReward>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ClassProjectReward>> **>(reinterpret_cast<uintptr_t>(this) + 0x2C8) = val;
    }

    List<SharedPointer<ClassProjectLocation>> * getLocationList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ClassProjectLocation>> *>(reinterpret_cast<uintptr_t>(this) + 0x2D8);
    }

    void setLocationList(List<SharedPointer<ClassProjectLocation>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ClassProjectLocation>> **>(reinterpret_cast<uintptr_t>(this) + 0x2D8) = val;
    }

    List<SharedPointer<ClassProjectGlobalLootPoint>> * getGlobalLootPointList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ClassProjectGlobalLootPoint>> *>(reinterpret_cast<uintptr_t>(this) + 0x2E8);
    }

    void setGlobalLootPointList(List<SharedPointer<ClassProjectGlobalLootPoint>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ClassProjectGlobalLootPoint>> **>(reinterpret_cast<uintptr_t>(this) + 0x2E8) = val;
    }

    List<SharedPointer<ClassProjectFinalReward>> * getFinalRewardList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ClassProjectFinalReward>> *>(reinterpret_cast<uintptr_t>(this) + 0x2F8);
    }

    void setFinalRewardList(List<SharedPointer<ClassProjectFinalReward>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ClassProjectFinalReward>> **>(reinterpret_cast<uintptr_t>(this) + 0x2F8) = val;
    }

    List<SharedPointer<ClassProjectReward>> * getFeaturedRewardList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ClassProjectReward>> *>(reinterpret_cast<uintptr_t>(this) + 0x308);
    }

    void setFeaturedRewardList(List<SharedPointer<ClassProjectReward>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ClassProjectReward>> **>(reinterpret_cast<uintptr_t>(this) + 0x308) = val;
    }

    int getIsBattlePass() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x21C);
    }

    void setIsBattlePass(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x21C) = val;
    }

    int getIsEnabledProgressAdvancement() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setIsEnabledProgressAdvancement(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    List<std::string> getExtraDataList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x318);
    }

    void setExtraDataList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x318) = val;
    }

    int getIsDisableActivitiesSection() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x224);
    }

    void setIsDisableActivitiesSection(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x224) = val;
    }

};