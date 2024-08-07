#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TeamHelpUpdateSigilInfo.h>

class TeamHelpUpdateSigilInfoList : public PropertyClass {
public:
    List<SharedPointer<TeamHelpUpdateSigilInfo>> * getSigilInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<TeamHelpUpdateSigilInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSigilInfoList(List<SharedPointer<TeamHelpUpdateSigilInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<TeamHelpUpdateSigilInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};