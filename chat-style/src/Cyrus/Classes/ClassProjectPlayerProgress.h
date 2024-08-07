#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClassProjectPlayer.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClassProjectPlayerProgress : public PropertyClass {
public:
    unsigned int getProjectID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setProjectID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<ClassProjectPlayer> * getClassProjectPlayer() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ClassProjectPlayer> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setClassProjectPlayer(SharedPointer<ClassProjectPlayer> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ClassProjectPlayer> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};