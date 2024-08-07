#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BadgeFilterInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class BadgeFilterInfoList : public PropertyClass {
public:
    List<SharedPointer<BadgeFilterInfo>> * getBadgeFilterInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BadgeFilterInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBadgeFilterInfoList(List<SharedPointer<BadgeFilterInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BadgeFilterInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};