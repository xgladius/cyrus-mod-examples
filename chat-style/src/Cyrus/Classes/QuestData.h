#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class QuestData : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int GoalCount() { // Function Generated
        using FunctionPointerType = int (*)(QuestData *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15B1270);
        return inner(this);
    }

    GoalData* GetGoalByIndex(unsigned int a0) { // Function Generated
        using FunctionPointerType = GoalData* (*)(QuestData *self, unsigned int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15B1280);
        return inner(this, a0);
    }

    GoalData* GetGoalByGID(gid a0) { // Function Generated
        using FunctionPointerType = GoalData* (*)(QuestData *self, gid a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x15B1320);
        return inner(this, a0);
    }

};