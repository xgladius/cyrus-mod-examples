#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CrownShopSettings.h>
#include <Cyrus/Classes/LoginHistoryEntry.h>
#include <Cyrus/Classes/PropertyClass.h>

class CharacterRegistry : public PropertyClass {
public:
    List<gid> getDisplayedTips() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setDisplayedTips(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<gid> getFinishedTips() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setFinishedTips(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    List<CharacterChatStatsByState> getChatStatsByState() { // Property Generated Getter
      return *reinterpret_cast<List<CharacterChatStatsByState>*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setChatStatsByState(List<CharacterChatStatsByState> val) { // Property Generated Setter
      *reinterpret_cast<List<CharacterChatStatsByState>*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    List<CharacterChatStatsByText> getChatStatsByText() { // Property Generated Getter
      return *reinterpret_cast<List<CharacterChatStatsByText>*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setChatStatsByText(List<CharacterChatStatsByText> val) { // Property Generated Setter
      *reinterpret_cast<List<CharacterChatStatsByText>*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    List<LockData> getLockList() { // Property Generated Getter
      return *reinterpret_cast<List<LockData>*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setLockList(List<LockData> val) { // Property Generated Setter
      *reinterpret_cast<List<LockData>*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    List<FriendData> getFriendList() { // Property Generated Getter
      return *reinterpret_cast<List<FriendData>*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setFriendList(List<FriendData> val) { // Property Generated Setter
      *reinterpret_cast<List<FriendData>*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    gid getActiveQuestId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setActiveQuestId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    unsigned int getActiveGoalId() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setActiveGoalId(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    bool getActiveGoalSetByPlayer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x154);
    }

    void setActiveGoalSetByPlayer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x154) = val;
    }

    SharedPointer<CrownShopSettings> * getCrownShopSettings() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<CrownShopSettings> *>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setCrownShopSettings(SharedPointer<CrownShopSettings> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<CrownShopSettings> **>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    List<LoginHistoryEntry> getLoginHistory() { // Property Generated Getter
      return *reinterpret_cast<List<LoginHistoryEntry>*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setLoginHistory(List<LoginHistoryEntry> val) { // Property Generated Setter
      *reinterpret_cast<List<LoginHistoryEntry>*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

};