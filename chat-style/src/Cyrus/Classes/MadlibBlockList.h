#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class MadlibBlockList : public PropertyClass {
public:
    List<MadlibBlock*> * getMadlibBlocks() { // Property Generated Getter
      return reinterpret_cast<List<MadlibBlock*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMadlibBlocks(List<MadlibBlock*> * val) { // Property Generated Setter
      *reinterpret_cast<List<MadlibBlock*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};