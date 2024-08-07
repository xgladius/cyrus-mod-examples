#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GoalEntry.h>
#include <Cyrus/Classes/MadlibBlock.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ServiceOptionBase.h>

class GoalEntryFull : public GoalEntry {
public:
    std::string getPersonaName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setPersonaName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    int getGoalType() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setGoalType(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    int getGoalStatus() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x15C);
    }

    void setGoalStatus(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x15C) = val;
    }

    int getGoalCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setGoalCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    int getGoalTotal() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x164);
    }

    void setGoalTotal(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x164) = val;
    }

    bool getUseTally() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x16C);
    }

    void setUseTally(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x16C) = val;
    }

    std::string getTallyText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setTallyText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    std::string getTallyText2() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setTallyText2(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    std::string getGoalLocation() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setGoalLocation(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    std::string getGoalDestinationZone() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setGoalDestinationZone(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

    std::string getGoalImage1() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setGoalImage1(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    std::string getGoalImage2() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setGoalImage2(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    List<std::string> getClientTags() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x230);
    }

    void setClientTags(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x230) = val;
    }

    SharedPointer<MadlibBlock> * getGoalMadlibs() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MadlibBlock> *>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setGoalMadlibs(SharedPointer<MadlibBlock> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MadlibBlock> **>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

};