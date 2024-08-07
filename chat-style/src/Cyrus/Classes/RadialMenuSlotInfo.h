#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class RadialMenuSlotInfo : public PropertyClass {
public:
    short getSlot() { // Property Generated Getter
      return *reinterpret_cast<short*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSlot(short val) { // Property Generated Setter
      *reinterpret_cast<short*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getEmoteID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setEmoteID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};