#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class BattlegroundMatchmaking : public PropertyClass {
public:
    int getMatchSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMatchSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getSecondsWaited() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setSecondsWaited(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

};