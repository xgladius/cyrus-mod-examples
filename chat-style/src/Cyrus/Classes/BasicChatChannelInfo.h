#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BasicChatPlayer.h>
#include <Cyrus/Classes/PropertyClass.h>

class BasicChatChannelInfo : public PropertyClass {
public:
    gid getOwnerCharacterID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setOwnerCharacterID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getOwnerNameBlob() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setOwnerNameBlob(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    bool getIsPublic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setIsPublic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getInviteAllCooldownTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setInviteAllCooldownTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    List<SharedPointer<BasicChatPlayer>> * getPlayerList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BasicChatPlayer>> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPlayerList(List<SharedPointer<BasicChatPlayer>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BasicChatPlayer>> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};