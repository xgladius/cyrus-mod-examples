#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GoldLootInfo.h>
#include <Cyrus/Classes/LootInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class LootInfoList : public PropertyClass {
public:
    List<SharedPointer<LootInfo>> * getLoot() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<LootInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLoot(List<SharedPointer<LootInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<LootInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<GoldLootInfo> * getGoldInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<GoldLootInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setGoldInfo(SharedPointer<GoldLootInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<GoldLootInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};