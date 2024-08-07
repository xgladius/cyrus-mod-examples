#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/GoalTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class ScavengeGoalTemplate : public GoalTemplate {
public:
    List<std::string> getItemAdjectives() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setItemAdjectives(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    int getItemTotal() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setItemTotal(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

};