#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class RidableBehaviorBase : public BehaviorInstance {
public:
    Vector<gid> getAssignedPlayers() { // Property Generated Getter
      return *reinterpret_cast<Vector<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setAssignedPlayers(Vector<gid> val) { // Property Generated Setter
      *reinterpret_cast<Vector<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};