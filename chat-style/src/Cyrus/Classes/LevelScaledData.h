#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LevelScaledInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class LevelScaledData : public PropertyClass {
public:
    List<SharedPointer<LevelScaledInfo>> * getLevelScaledInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<LevelScaledInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLevelScaledInfoList(List<SharedPointer<LevelScaledInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<LevelScaledInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<LevelScaledInfo> * getStatsFloorPercent() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<LevelScaledInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setStatsFloorPercent(SharedPointer<LevelScaledInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<LevelScaledInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};