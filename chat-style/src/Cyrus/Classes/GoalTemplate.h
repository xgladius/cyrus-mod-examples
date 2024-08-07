#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/GoalTemplate__GOAL_TYPE.h>

class GoalTemplate : public CoreTemplate {
public:
    std::string getGoalName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setGoalName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    unsigned int getGoalNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setGoalNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    std::string getGoalTitle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setGoalTitle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    std::string getGoalUnderway() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setGoalUnderway(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    std::string getHyperlink() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setHyperlink(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    std::string getCompleteText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setCompleteText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    ResultList* * getCompleteResults() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setCompleteResults(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    RequirementList* * getGoalRequirements() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x1C0);
    }

    void setGoalRequirements(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x1C0) = val;
    }

    TallyCounterTemplate* * getTallyCounter() { // Property Generated Getter
      return reinterpret_cast<TallyCounterTemplate* *>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setTallyCounter(TallyCounterTemplate* * val) { // Property Generated Setter
      *reinterpret_cast<TallyCounterTemplate* **>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    std::string getLocationName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setLocationName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    std::string getDisplayImage1() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setDisplayImage1(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    std::string getDisplayImage2() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setDisplayImage2(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    List<std::string> getClientTags() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setClientTags(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    List<std::string> getGenericEvents() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setGenericEvents(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    bool getAutoQualify() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setAutoQualify(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    bool getAutoComplete() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x191);
    }

    void setAutoComplete(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x191) = val;
    }

    std::string getDestinationZone() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setDestinationZone(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    ActorDialogListBase* * getDialogList() { // Property Generated Getter
      return reinterpret_cast<ActorDialogListBase* *>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setDialogList(ActorDialogListBase* * val) { // Property Generated Setter
      *reinterpret_cast<ActorDialogListBase* **>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    GoalTemplate__GOAL_TYPE getGoalType() { // Property Generated Getter
      return *reinterpret_cast<GoalTemplate__GOAL_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setGoalType(GoalTemplate__GOAL_TYPE val) { // Property Generated Setter
      *reinterpret_cast<GoalTemplate__GOAL_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    bool getNoQuestHelper() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1F4);
    }

    void setNoQuestHelper(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1F4) = val;
    }

    bool getPetOnlyQuest() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1F5);
    }

    void setPetOnlyQuest(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1F5) = val;
    }

    ResultList* * getActivateResults() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setActivateResults(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

    bool getHideGoalFloatyText() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setHideGoalFloatyText(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

};