#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RequirementList.h>

class MusicFileInfo : public PropertyClass {
public:
    std::string getAltMusicFileName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAltMusicFileName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    RequirementList getRequirements() { // Property Generated Getter
      return *reinterpret_cast<RequirementList*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setRequirements(RequirementList val) { // Property Generated Setter
      *reinterpret_cast<RequirementList*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};