#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AdventurePartyEntryInfo.h>
#include <Cyrus/Classes/MessageBoardMessage.h>
#include <Cyrus/Classes/PropertyClass.h>

class AdventurePartyInfo : public PropertyClass {
public:
    gid getAdventurePartyGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAdventurePartyGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getAdventurePartyName() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setAdventurePartyName(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getCreationDate() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setCreationDate(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    gid getOwnerGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setOwnerGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    std::string getOwnerName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setOwnerName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    int getPurposeType() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setPurposeType(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    unsigned int getPurposeWorldID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setPurposeWorldID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    unsigned int getFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    gid getEquippedHouseInstanceGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setEquippedHouseInstanceGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    gid getEquippedInteriorInstanceGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setEquippedInteriorInstanceGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    List<SharedPointer<AdventurePartyEntryInfo>> * getAdventurePartyMemberList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AdventurePartyEntryInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setAdventurePartyMemberList(List<SharedPointer<AdventurePartyEntryInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AdventurePartyEntryInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    List<SharedPointer<MessageBoardMessage>> * getMessageBoardList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MessageBoardMessage>> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setMessageBoardList(List<SharedPointer<MessageBoardMessage>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MessageBoardMessage>> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    unsigned int getRenameCooldownTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setRenameCooldownTime(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    unsigned int getNewOwnerTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xC4);
    }

    void setNewOwnerTime(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xC4) = val;
    }

};