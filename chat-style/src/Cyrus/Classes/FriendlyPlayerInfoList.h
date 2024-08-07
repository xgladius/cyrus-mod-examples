#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/FriendlyPlayerInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class FriendlyPlayerInfoList : public PropertyClass {
public:
    List<SharedPointer<FriendlyPlayerInfo>> * getFriendlyPlayerInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<FriendlyPlayerInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setFriendlyPlayerInfoList(List<SharedPointer<FriendlyPlayerInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<FriendlyPlayerInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};