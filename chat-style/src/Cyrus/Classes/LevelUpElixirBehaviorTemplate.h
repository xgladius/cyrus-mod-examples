#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/ElixirBehaviorTemplate.h>
#include <Cyrus/Classes/LevelUpElixirSchoolSpecificData.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TimedItemBehaviorTemplate.h>

class LevelUpElixirBehaviorTemplate : public ElixirBehaviorTemplate {
public:
    int getSetCharacterToLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setSetCharacterToLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

    int getResultingTrainingPoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x19C);
    }

    void setResultingTrainingPoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x19C) = val;
    }

    List<SharedPointer<LevelUpElixirSchoolSpecificData>> * getSchoolSpecificData() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<LevelUpElixirSchoolSpecificData>> *>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setSchoolSpecificData(List<SharedPointer<LevelUpElixirSchoolSpecificData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<LevelUpElixirSchoolSpecificData>> **>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    SharedPointer<LevelUpElixirSchoolSpecificData> * getAllSchoolData() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<LevelUpElixirSchoolSpecificData> *>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setAllSchoolData(SharedPointer<LevelUpElixirSchoolSpecificData> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<LevelUpElixirSchoolSpecificData> **>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    std::string getFirstWarningStringKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setFirstWarningStringKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    std::string getSecondWarningStringKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setSecondWarningStringKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

    List<std::string> getAccessPasses() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1C8);
    }

    void setAccessPasses(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1C8) = val;
    }

    int getGold() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setGold(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    List<std::string> getTutorialEventsToTrigger() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1A8);
    }

    void setTutorialEventsToTrigger(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1A8) = val;
    }

    List<gid> getTipIDsToDismiss() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setTipIDsToDismiss(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    int getMaxPotions() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setMaxPotions(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

};