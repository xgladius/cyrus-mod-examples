#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GoalTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/BountyGoalTemplate__BOUNTY_TYPE.h>

class BountyGoalTemplate : public GoalTemplate {
public:
    List<std::string> getNpcAdjectives() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setNpcAdjectives(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    int getBountyTotal() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setBountyTotal(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    BountyGoalTemplate__BOUNTY_TYPE getBountyType() { // Property Generated Getter
      return *reinterpret_cast<BountyGoalTemplate__BOUNTY_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x21C);
    }

    void setBountyType(BountyGoalTemplate__BOUNTY_TYPE val) { // Property Generated Setter
      *reinterpret_cast<BountyGoalTemplate__BOUNTY_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x21C) = val;
    }

};