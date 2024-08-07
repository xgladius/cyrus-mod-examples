#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GuildChatInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class GuildChatList : public PropertyClass {
public:
    List<SharedPointer<GuildChatInfo>> * getGuildChatList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GuildChatInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setGuildChatList(List<SharedPointer<GuildChatInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GuildChatInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};