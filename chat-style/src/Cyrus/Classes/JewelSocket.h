#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/JewelSocket__JewelSocketType.h>

class JewelSocket : public PropertyClass {
public:
    JewelSocket__JewelSocketType getSocketType() { // Property Generated Getter
      return *reinterpret_cast<JewelSocket__JewelSocketType*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSocketType(JewelSocket__JewelSocketType val) { // Property Generated Setter
      *reinterpret_cast<JewelSocket__JewelSocketType*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    bool getBLockable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setBLockable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

};