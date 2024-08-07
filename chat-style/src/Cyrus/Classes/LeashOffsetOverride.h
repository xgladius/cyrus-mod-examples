#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/LeashOffsetOverride__LeashOffsetType.h>

class LeashOffsetOverride : public PropertyClass {
public:
    LeashOffsetOverride__LeashOffsetType getOffsetType() { // Property Generated Getter
      return *reinterpret_cast<LeashOffsetOverride__LeashOffsetType*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setOffsetType(LeashOffsetOverride__LeashOffsetType val) { // Property Generated Setter
      *reinterpret_cast<LeashOffsetOverride__LeashOffsetType*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};