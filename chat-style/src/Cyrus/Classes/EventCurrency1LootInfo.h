#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/LootInfo.h>
#include <Cyrus/Classes/LootInfoBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class EventCurrency1LootInfo : public LootInfo {
public:
    int getEventCurrency1Amount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setEventCurrency1Amount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};