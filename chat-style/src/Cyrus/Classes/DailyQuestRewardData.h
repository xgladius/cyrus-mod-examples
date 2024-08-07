#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DailyQuestReward.h>
#include <Cyrus/Classes/PropertyClass.h>

class DailyQuestRewardData : public PropertyClass {
public:
    List<SharedPointer<DailyQuestReward>> * getDailyQuestRewardList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DailyQuestReward>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDailyQuestRewardList(List<SharedPointer<DailyQuestReward>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DailyQuestReward>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<DailyQuestReward>> * getDailyPvPRewardList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DailyQuestReward>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDailyPvPRewardList(List<SharedPointer<DailyQuestReward>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DailyQuestReward>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<std::string> getCircleRegistryList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setCircleRegistryList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<std::string> getQuestRewardsList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setQuestRewardsList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};