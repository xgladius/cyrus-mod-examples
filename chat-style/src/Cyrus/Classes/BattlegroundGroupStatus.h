#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BattlegroundGroupMemberStatus.h>
#include <Cyrus/Classes/PropertyClass.h>

class BattlegroundGroupStatus : public PropertyClass {
public:
    gid getGroupID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setGroupID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<BattlegroundGroupMemberStatus>> * getMembers() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BattlegroundGroupMemberStatus>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setMembers(List<SharedPointer<BattlegroundGroupMemberStatus>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BattlegroundGroupMemberStatus>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};