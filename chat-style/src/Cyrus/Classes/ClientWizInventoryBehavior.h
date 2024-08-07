#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/ClientInventoryBehavior.h>
#include <Cyrus/Classes/InventoryBehaviorBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientWizInventoryBehavior : public ClientInventoryBehavior {
public:
    int getNumItemsAllowed() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setNumItemsAllowed(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    int getNumJewelsAllowed() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setNumJewelsAllowed(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

    int getNumCEEmotesAllowed() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setNumCEEmotesAllowed(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    int getNumCETeleportsAllowed() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setNumCETeleportsAllowed(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

};