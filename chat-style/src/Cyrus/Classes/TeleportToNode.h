#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PathBehaviorTemplate::Action.h>
#include <Cyrus/Classes/PropertyClass.h>

class TeleportToNode : public PathBehaviorTemplate::Action {
public:
    int getNDestinationNodeID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setNDestinationNodeID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    bool getBContinuePathing() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setBContinuePathing(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

};