#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BadgeFilterDescription.h>
#include <Cyrus/Classes/PropertyClass.h>

class BadgeFilterDescriptionList : public PropertyClass {
public:
    List<SharedPointer<BadgeFilterDescription>> * getBadgeFilterDescriptionList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BadgeFilterDescription>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBadgeFilterDescriptionList(List<SharedPointer<BadgeFilterDescription>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BadgeFilterDescription>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};