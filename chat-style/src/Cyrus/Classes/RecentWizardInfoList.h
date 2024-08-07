#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RecentWizardInfo.h>

class RecentWizardInfoList : public PropertyClass {
public:
    List<SharedPointer<RecentWizardInfo>> * getRecentWizardInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<RecentWizardInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRecentWizardInfoList(List<SharedPointer<RecentWizardInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<RecentWizardInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};