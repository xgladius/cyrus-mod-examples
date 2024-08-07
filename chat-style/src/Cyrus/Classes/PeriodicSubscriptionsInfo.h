#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PeriodicSubscription.h>
#include <Cyrus/Classes/PropertyClass.h>

class PeriodicSubscriptionsInfo : public PropertyClass {
public:
    List<SharedPointer<PeriodicSubscription>> * getSubscriptions() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PeriodicSubscription>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSubscriptions(List<SharedPointer<PeriodicSubscription>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PeriodicSubscription>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};