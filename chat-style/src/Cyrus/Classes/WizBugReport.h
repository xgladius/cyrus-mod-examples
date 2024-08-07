#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BugReport.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/WizBugReport__IdeaType.h>
#include <Cyrus/Enums/WizBugReport__SystemType.h>
#include <Cyrus/Enums/WizBugReport__UserGender.h>

class WizBugReport : public BugReport {
public:
    WizBugReport__SystemType getSystemType() { // Property Generated Getter
      return *reinterpret_cast<WizBugReport__SystemType*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setSystemType(WizBugReport__SystemType val) { // Property Generated Setter
      *reinterpret_cast<WizBugReport__SystemType*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    WizBugReport__IdeaType getIdeaType() { // Property Generated Getter
      return *reinterpret_cast<WizBugReport__IdeaType*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setIdeaType(WizBugReport__IdeaType val) { // Property Generated Setter
      *reinterpret_cast<WizBugReport__IdeaType*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    gid getUserId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setUserId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    WizBugReport__UserGender getGender() { // Property Generated Getter
      return *reinterpret_cast<WizBugReport__UserGender*>(reinterpret_cast<uintptr_t>(this) + 0xC4);
    }

    void setGender(WizBugReport__UserGender val) { // Property Generated Setter
      *reinterpret_cast<WizBugReport__UserGender*>(reinterpret_cast<uintptr_t>(this) + 0xC4) = val;
    }

    unsigned char getAge() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setAge(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    std::string getUserName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setUserName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getReleaseUpdate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setReleaseUpdate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    std::string getJiraIssue() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setJiraIssue(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    std::string getOsString() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setOsString(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

};