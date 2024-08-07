#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ServiceOptionBase.h>

class GoalEntry : public ServiceOptionBase {
public:
    gid getQuestID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setQuestID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    gid getGoalID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setGoalID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    std::string getGoalTitle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setGoalTitle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    std::string getQuestTitle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setQuestTitle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    unsigned int getGoalNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setGoalNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

};