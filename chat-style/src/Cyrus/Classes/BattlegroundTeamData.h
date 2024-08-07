#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class BattlegroundTeamData : public PropertyClass {
public:
    unsigned int getProjectID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setProjectID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<gid> getTeamListA() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTeamListA(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    List<gid> getTeamListB() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setTeamListB(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};