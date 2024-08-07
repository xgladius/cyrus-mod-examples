#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/ClientTimedItemBehavior.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientElixirBehavior : public ClientTimedItemBehavior {
public:
    bool getStatsApplied() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setStatsApplied(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

};