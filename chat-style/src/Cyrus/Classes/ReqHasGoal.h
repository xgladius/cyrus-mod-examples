#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Requirement.h>
#include <Cyrus/Enums/GoalStatusRequirement.h>

class ReqHasGoal : public Requirement {
public:
    std::string getQuestName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setQuestName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    std::string getGoalName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setGoalName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    GoalStatusRequirement getRequiredStatus() { // Property Generated Getter
      return *reinterpret_cast<GoalStatusRequirement*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setRequiredStatus(GoalStatusRequirement val) { // Property Generated Setter
      *reinterpret_cast<GoalStatusRequirement*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};