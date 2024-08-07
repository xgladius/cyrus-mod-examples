#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizGoalData.h>
#include <Cyrus/Enums/QuestTemplate__ActivityType.h>

class WizQuestData : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getQuestNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setQuestNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getTitle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setTitle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    gid getId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    int getType() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setType(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    int getLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    bool getMainline() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xF1);
    }

    void setMainline(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xF1) = val;
    }

    bool getReadyToTurnIn() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xF2);
    }

    void setReadyToTurnIn(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xF2) = val;
    }

    QuestTemplate__ActivityType getActivityType() { // Property Generated Getter
      return *reinterpret_cast<QuestTemplate__ActivityType*>(reinterpret_cast<uintptr_t>(this) + 0xF4);
    }

    void setActivityType(QuestTemplate__ActivityType val) { // Property Generated Setter
      *reinterpret_cast<QuestTemplate__ActivityType*>(reinterpret_cast<uintptr_t>(this) + 0xF4) = val;
    }

    bool getSkipQHAutoSelect() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setSkipQHAutoSelect(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    List<SharedPointer<WizGoalData>> * getGoalList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<WizGoalData>> *>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setGoalList(List<SharedPointer<WizGoalData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<WizGoalData>> **>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

};