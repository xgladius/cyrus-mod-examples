#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class CantripXPConfig : public PropertyClass {
public:
    List<CantripLevelInfo*> * getLevelInfo() { // Property Generated Getter
      return reinterpret_cast<List<CantripLevelInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLevelInfo(List<CantripLevelInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<CantripLevelInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned char getMaxLevel() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setMaxLevel(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};