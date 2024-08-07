#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GroupMember.h>
#include <Cyrus/Classes/PropertyClass.h>

class Group : public PropertyClass {
public:
    gid getGroupID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setGroupID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getChannelID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setChannelID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    List<SharedPointer<GroupMember>> * getMemberList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GroupMember>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setMemberList(List<SharedPointer<GroupMember>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GroupMember>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    unsigned int getNMaxSize() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setNMaxSize(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getFromAdventureParty() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setFromAdventureParty(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    gid getLeaderGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setLeaderGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    gid getQuestGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setQuestGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    gid getGoalGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setGoalGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

};