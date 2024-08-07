#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class SubscriberOnlyItemsList : public PropertyClass {
public:
    Vector<gid> getSubscriberOnlyItems() { // Property Generated Getter
      return *reinterpret_cast<Vector<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSubscriberOnlyItems(Vector<gid> val) { // Property Generated Setter
      *reinterpret_cast<Vector<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};