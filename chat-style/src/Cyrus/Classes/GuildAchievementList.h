#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GuildAchievementInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class GuildAchievementList : public PropertyClass {
public:
    List<SharedPointer<GuildAchievementInfo>> * getGuildAchievementList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GuildAchievementInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setGuildAchievementList(List<SharedPointer<GuildAchievementInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GuildAchievementInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};