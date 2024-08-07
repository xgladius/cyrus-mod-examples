#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/QuestEffectTemplate.h>

class AccompanyNPCBehaviorTemplate : public BehaviorTemplate {
public:
    bool getAutoAdd() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x79);
    }

    void setAutoAdd(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x79) = val;
    }

    bool getAutoRemove() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setAutoRemove(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    List<std::string> getAllowedQuests() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setAllowedQuests(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    bool getAllowedInZones() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setAllowedInZones(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    List<std::string> getZoneList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setZoneList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    List<std::string> getOtherNpcsToReplace() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setOtherNpcsToReplace(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    List<std::string> getDontSpawnIfNpcIsPresent() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setDontSpawnIfNpcIsPresent(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    SharedPointer<QuestEffectTemplate> * getQuestEffectTemplate() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<QuestEffectTemplate> *>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setQuestEffectTemplate(SharedPointer<QuestEffectTemplate> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<QuestEffectTemplate> **>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

};