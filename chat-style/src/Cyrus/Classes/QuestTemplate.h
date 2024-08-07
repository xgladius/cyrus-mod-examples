#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/GoalTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ResultList.h>
#include <Cyrus/Enums/QuestTemplate__ActivityType.h>

class QuestTemplate : public CoreTemplate {
public:
    std::string getQuestName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setQuestName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned int getQuestNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setQuestNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    std::string getQuestTitle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setQuestTitle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    std::string getQuestInfo() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setQuestInfo(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    std::string getQuestPrep() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setQuestPrep(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    std::string getQuestUnderway() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setQuestUnderway(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    std::string getQuestComplete() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setQuestComplete(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    List<std::string> getStartGoals() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x188);
    }

    void setStartGoals(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x188) = val;
    }

    List<SharedPointer<GoalTemplate>> * getGoals() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GoalTemplate>> *>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setGoals(List<SharedPointer<GoalTemplate>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GoalTemplate>> **>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    SharedPointer<ResultList> * getStartResults() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setStartResults(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    SharedPointer<ResultList> * getEndResults() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setEndResults(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    RequirementList* * getRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    RequirementList* * getPrepRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setPrepRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

    RequirementList* * getPruneRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setPruneRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    bool getPrepAlways() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setPrepAlways(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    List<std::string> getClientTags() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setClientTags(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    List<GoalCompleteLogic*> * getGoalLogic() { // Property Generated Getter
      return reinterpret_cast<List<GoalCompleteLogic*> *>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setGoalLogic(List<GoalCompleteLogic*> * val) { // Property Generated Setter
      *reinterpret_cast<List<GoalCompleteLogic*> **>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    int getQuestLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setQuestLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    int getQuestRepeat() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x12C);
    }

    void setQuestRepeat(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x12C) = val;
    }

    std::string getOnStartQuestScript() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setOnStartQuestScript(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    std::string getOnEndQuestScript() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setOnEndQuestScript(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    ActorDialogListBase* * getDialogList() { // Property Generated Getter
      return reinterpret_cast<ActorDialogListBase* *>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setDialogList(ActorDialogListBase* * val) { // Property Generated Setter
      *reinterpret_cast<ActorDialogListBase* **>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    List<std::string> getMissionDoors() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setMissionDoors(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

    List<QuestDynaModInfo*> * getDynaMods() { // Property Generated Getter
      return reinterpret_cast<List<QuestDynaModInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setDynaMods(List<QuestDynaModInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<QuestDynaModInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    bool getIsHidden() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x131);
    }

    void setIsHidden(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x131) = val;
    }

    bool getOutdated() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x132);
    }

    void setOutdated(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x132) = val;
    }

    bool getNoQuestHelper() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x133);
    }

    void setNoQuestHelper(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x133) = val;
    }

    bool getMainline() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x228);
    }

    void setMainline(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x228) = val;
    }

    List<std::string> getDefaultDialogAnimation() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x230);
    }

    void setDefaultDialogAnimation(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x230) = val;
    }

    bool getSkipQHAutoSelect() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x229);
    }

    void setSkipQHAutoSelect(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x229) = val;
    }

    List<SharedPointer<GameEffectInfo>> * getQuestEffectInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameEffectInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setQuestEffectInfoList(List<SharedPointer<GameEffectInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameEffectInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    bool getForceInteraction() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x22A);
    }

    void setForceInteraction(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x22A) = val;
    }

    bool getCheckInventoryForCrafting() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setCheckInventoryForCrafting(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    bool getPlayAsYourPetNPC() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x261);
    }

    void setPlayAsYourPetNPC(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x261) = val;
    }

    QuestTemplate__ActivityType getActivityType() { // Property Generated Getter
      return *reinterpret_cast<QuestTemplate__ActivityType*>(reinterpret_cast<uintptr_t>(this) + 0x264);
    }

    void setActivityType(QuestTemplate__ActivityType val) { // Property Generated Setter
      *reinterpret_cast<QuestTemplate__ActivityType*>(reinterpret_cast<uintptr_t>(this) + 0x264) = val;
    }

    ActorDialogBase* FindQuestActorDialog(unsigned int a0) { // Function Generated
        using FunctionPointerType = ActorDialogBase* (*)(QuestTemplate *self, unsigned int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x140ACA0);
        return inner(this, a0);
    }

    GoalTemplate* GetGoalTemplate(int a0) { // Function Generated
        using FunctionPointerType = GoalTemplate* (*)(QuestTemplate *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x140AF30);
        return inner(this, a0);
    }

    int GetGoalCount() { // Function Generated
        using FunctionPointerType = int (*)(QuestTemplate *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x140F450);
        return inner(this);
    }

    ResultList* GetEndResults() { // Function Generated
        using FunctionPointerType = ResultList* (*)(QuestTemplate *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x140F440);
        return inner(this);
    }

};