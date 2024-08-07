#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/BGGroupStatusEnum.h>

class BattlegroundGroupMemberStatus : public PropertyClass {
public:
    gid getPlayerID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPlayerID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getNameBlob() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setNameBlob(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    BGGroupStatusEnum getStatus() { // Property Generated Getter
      return *reinterpret_cast<BGGroupStatusEnum*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setStatus(BGGroupStatusEnum val) { // Property Generated Setter
      *reinterpret_cast<BGGroupStatusEnum*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};