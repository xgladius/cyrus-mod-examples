#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorDialogEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class NPCDialogEntry : public ActorDialogEntry {
public:
    std::string getPersonaName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x308);
    }

    void setPersonaName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x308) = val;
    }

    std::string getNameOverride() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x348);
    }

    void setNameOverride(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x348) = val;
    }

    std::string getNameSTKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x328);
    }

    void setNameSTKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x328) = val;
    }

    std::string getGuiDisplay() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x368);
    }

    void setGuiDisplay(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x368) = val;
    }

    int getMaxTimeSeconds() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x388);
    }

    void setMaxTimeSeconds(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x388) = val;
    }

    bool getInvisible() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x38C);
    }

    void setInvisible(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x38C) = val;
    }

};