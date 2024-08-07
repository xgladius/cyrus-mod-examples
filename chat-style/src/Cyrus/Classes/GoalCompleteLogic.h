#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class GoalCompleteLogic : public PropertyClass {
public:
    List<std::string> getGoalsAND() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setGoalsAND(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<std::string> getGoalsOR() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setGoalsOR(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<std::string> getGoalsToAdd() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setGoalsToAdd(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getCompleteQuest() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setCompleteQuest(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};