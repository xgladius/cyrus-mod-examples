#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class RitualObjectBehaviorTemplate : public BehaviorTemplate {
public:
    List<std::string> getNifStateList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setNifStateList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    RequirementList* * getRequirementList() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setRequirementList(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    ResultList* * getActivatedResultList() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setActivatedResultList(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    std::string getQuestEvent() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setQuestEvent(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bool getSingleUse() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setSingleUse(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    float getRemovalTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setRemovalTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    std::string getLootTable() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setLootTable(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    bool getUseStates() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setUseStates(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

    List<std::string> getStateList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setStateList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    bool getUnlockFirst() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setUnlockFirst(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    std::string getRemovedState() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setRemovedState(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    std::string getAllowedSchoolsList() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setAllowedSchoolsList(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    ResultList* * getWrongSchoolResultList() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setWrongSchoolResultList(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

};