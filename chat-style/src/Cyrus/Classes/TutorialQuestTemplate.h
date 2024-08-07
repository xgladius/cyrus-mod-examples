#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/QuestTemplate.h>

class TutorialQuestTemplate : public QuestTemplate {
public:
    List<std::string> getAllowedQuests() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setAllowedQuests(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    List<std::string> getAllowedZoneEvents() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x278);
    }

    void setAllowedZoneEvents(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x278) = val;
    }

    List<std::string> getAllowedMinigames() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x288);
    }

    void setAllowedMinigames(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x288) = val;
    }

    std::string getTutorialScript() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2C8);
    }

    void setTutorialScript(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2C8) = val;
    }

    List<TutorialZoneMod*> * getModList() { // Property Generated Getter
      return reinterpret_cast<List<TutorialZoneMod*> *>(reinterpret_cast<uintptr_t>(this) + 0x298);
    }

    void setModList(List<TutorialZoneMod*> * val) { // Property Generated Setter
      *reinterpret_cast<List<TutorialZoneMod*> **>(reinterpret_cast<uintptr_t>(this) + 0x298) = val;
    }

    bool getRequiresTutorialZone() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x308);
    }

    void setRequiresTutorialZone(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x308) = val;
    }

    std::string getScriptZone() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E8);
    }

    void setScriptZone(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x2E8) = val;
    }

    bool getVisibleTutorial() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x309);
    }

    void setVisibleTutorial(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x309) = val;
    }

};