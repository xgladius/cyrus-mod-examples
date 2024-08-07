#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class SpawnItem : public PropertyClass {
public:
    unsigned char getPercentChance() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPercentChance(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SpawnObjectInfo* * getObjectInfo() { // Property Generated Getter
      return reinterpret_cast<SpawnObjectInfo* *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setObjectInfo(SpawnObjectInfo* * val) { // Property Generated Setter
      *reinterpret_cast<SpawnObjectInfo* **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};