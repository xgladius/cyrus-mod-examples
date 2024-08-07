#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/NameOverrideBehavior.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/eGender.h>
#include <Cyrus/Enums/eRace.h>

class ClientWizPlayerNameBehavior : public NameOverrideBehavior {
public:
    unsigned int getNameKeys() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setNameKeys(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    bool getUseRank() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x164);
    }

    void setUseRank(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x164) = val;
    }

    eGender getEGender() { // Property Generated Getter
      return *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setEGender(eGender val) { // Property Generated Setter
      *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    eRace getERace() { // Property Generated Getter
      return *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0x1B4);
    }

    void setERace(eRace val) { // Property Generated Setter
      *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0x1B4) = val;
    }

    std::string getBadgeTitle() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setBadgeTitle(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    unsigned int getChatPermissions() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setChatPermissions(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    unsigned int getPvpIconID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setPvpIconID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    unsigned int getLocaleID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1E4);
    }

    void setLocaleID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1E4) = val;
    }

    bool getFriendlyPlayer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1EA);
    }

    void setFriendlyPlayer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1EA) = val;
    }

    bool getVolunteer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1EB);
    }

    void setVolunteer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x1EB) = val;
    }

    unsigned int getGuildName() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1EC);
    }

    void setGuildName(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x1EC) = val;
    }

};