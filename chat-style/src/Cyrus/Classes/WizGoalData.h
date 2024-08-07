#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientTagList.h>
#include <Cyrus/Classes/MadlibBlock.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/ENUM_SENDTYPE.h>
#include <Cyrus/Enums/GOAL_STATUS.h>
#include <Cyrus/Enums/GoalTemplate__GOAL_TYPE.h>

class WizGoalData : public PropertyClass {
public:
    gid getGoalID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setGoalID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    GOAL_STATUS getStatus() { // Property Generated Getter
      return *reinterpret_cast<GOAL_STATUS*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setStatus(GOAL_STATUS val) { // Property Generated Setter
      *reinterpret_cast<GOAL_STATUS*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    std::string getLocation() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setLocation(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    GoalTemplate__GOAL_TYPE getType() { // Property Generated Getter
      return *reinterpret_cast<GoalTemplate__GOAL_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setType(GoalTemplate__GOAL_TYPE val) { // Property Generated Setter
      *reinterpret_cast<GoalTemplate__GOAL_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    ENUM_SENDTYPE getSendType() { // Property Generated Getter
      return *reinterpret_cast<ENUM_SENDTYPE*>(reinterpret_cast<uintptr_t>(this) + 0xBC);
    }

    void setSendType(ENUM_SENDTYPE val) { // Property Generated Setter
      *reinterpret_cast<ENUM_SENDTYPE*>(reinterpret_cast<uintptr_t>(this) + 0xBC) = val;
    }

    SharedPointer<MadlibBlock> * getMadLibs() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MadlibBlock> *>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setMadLibs(SharedPointer<MadlibBlock> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MadlibBlock> **>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    std::string getImage1() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setImage1(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    std::string getImage2() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setImage2(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    SharedPointer<ClientTagList> * getTagList() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ClientTagList> *>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setTagList(SharedPointer<ClientTagList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ClientTagList> **>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    std::string getCompleteText() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setCompleteText(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    bool getQuestHelperEnabled() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setQuestHelperEnabled(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    bool getPetOnlyQuest() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x141);
    }

    void setPetOnlyQuest(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x141) = val;
    }

    bool getHasActiveResults() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x142);
    }

    void setHasActiveResults(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x142) = val;
    }

    bool getHideGoalFloatyText() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x143);
    }

    void setHideGoalFloatyText(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x143) = val;
    }

};