#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GuildAchievementData.h>
#include <Cyrus/Classes/PropertyClass.h>

class GuildAchievementDataList : public PropertyClass {
public:
    List<SharedPointer<GuildAchievementData>> * getGuildAchievementDataList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GuildAchievementData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setGuildAchievementDataList(List<SharedPointer<GuildAchievementData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GuildAchievementData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};