#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TeamHelpSigilMonthlyGauntletInfo.h>
#include <Cyrus/Enums/RequestedSigilMode.h>

class TeamHelpUpdateSigilInfo : public PropertyClass {
public:
    unsigned int getSigilID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSigilID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getButtonStringKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setButtonStringKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    List<unsigned int> getPlayerSchoolIDList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPlayerSchoolIDList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    bool getIsInstance() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setIsInstance(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    unsigned int getSecondsElapsed() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setSecondsElapsed(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    bool getIsFarming() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setIsFarming(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    unsigned char getMinimumTeamSize() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x89);
    }

    void setMinimumTeamSize(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x89) = val;
    }

    SharedPointer<TeamHelpSigilMonthlyGauntletInfo> * getPSigilMonthlyGauntletInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<TeamHelpSigilMonthlyGauntletInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setPSigilMonthlyGauntletInfo(SharedPointer<TeamHelpSigilMonthlyGauntletInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<TeamHelpSigilMonthlyGauntletInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    RequestedSigilMode getRequestedSigilMode() { // Property Generated Getter
      return *reinterpret_cast<RequestedSigilMode*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setRequestedSigilMode(RequestedSigilMode val) { // Property Generated Setter
      *reinterpret_cast<RequestedSigilMode*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

};