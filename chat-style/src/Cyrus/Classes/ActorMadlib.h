#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MadlibBlock.h>
#include <Cyrus/Classes/PropertyClass.h>

class ActorMadlib : public PropertyClass {
public:
    SharedPointer<MadlibBlock> * getMadlibBlock() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MadlibBlock> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMadlibBlock(SharedPointer<MadlibBlock> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MadlibBlock> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getIndex() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setIndex(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};