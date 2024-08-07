#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TeamHelpWorldInfo.h>

class TeamHelpWorldInfoList : public PropertyClass {
public:
    List<SharedPointer<TeamHelpWorldInfo>> * getTeamHelpWorldInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<TeamHelpWorldInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTeamHelpWorldInfoList(List<SharedPointer<TeamHelpWorldInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<TeamHelpWorldInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};