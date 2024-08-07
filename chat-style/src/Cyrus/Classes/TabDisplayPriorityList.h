#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TabDisplayPriority.h>

class TabDisplayPriorityList : public PropertyClass {
public:
    Vector<TabDisplayPriority> getTabPriList() { // Property Generated Getter
      return *reinterpret_cast<Vector<TabDisplayPriority>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTabPriList(Vector<TabDisplayPriority> val) { // Property Generated Setter
      *reinterpret_cast<Vector<TabDisplayPriority>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};