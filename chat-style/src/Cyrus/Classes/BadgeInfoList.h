#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BadgeInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class BadgeInfoList : public PropertyClass {
public:
    List<SharedPointer<BadgeInfo>> * getBadges() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BadgeInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBadges(List<SharedPointer<BadgeInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BadgeInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};