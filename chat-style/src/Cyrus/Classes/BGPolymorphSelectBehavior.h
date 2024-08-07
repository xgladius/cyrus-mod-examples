#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class BGPolymorphSelectBehavior : public BehaviorInstance {
public:
    List<gid> getPolyCategoryInactiveToRedTeamPlayers() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPolyCategoryInactiveToRedTeamPlayers(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<gid> getPolyCategoryUnavailableToRedTeamPlayers() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setPolyCategoryUnavailableToRedTeamPlayers(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    List<gid> getPolyCategoryInactiveToBlueTeamPlayers() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setPolyCategoryInactiveToBlueTeamPlayers(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    List<gid> getPolyCategoryUnavailableToBlueTeamPlayers() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setPolyCategoryUnavailableToBlueTeamPlayers(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

};