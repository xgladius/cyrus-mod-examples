#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class QuestEntry : public PropertyClass {
public:
    std::string getQuestName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setQuestName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getQuestNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setQuestNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<GoalEntryFull*> * getGoalEntries() { // Property Generated Getter
      return reinterpret_cast<List<GoalEntryFull*> *>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setGoalEntries(List<GoalEntryFull*> * val) { // Property Generated Setter
      *reinterpret_cast<List<GoalEntryFull*> **>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

};