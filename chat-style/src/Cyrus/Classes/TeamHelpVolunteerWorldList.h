#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TeamHelpVolunteerInfo.h>

class TeamHelpVolunteerWorldList : public PropertyClass {
public:
    List<SharedPointer<TeamHelpVolunteerInfo>> * getVolunteerWorldList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<TeamHelpVolunteerInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setVolunteerWorldList(List<SharedPointer<TeamHelpVolunteerInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<TeamHelpVolunteerInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};