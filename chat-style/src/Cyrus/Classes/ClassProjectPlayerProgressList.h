#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClassProjectPlayerProgress.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClassProjectPlayerProgressList : public PropertyClass {
public:
    List<SharedPointer<ClassProjectPlayerProgress>> * getPlayerProgressList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ClassProjectPlayerProgress>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPlayerProgressList(List<SharedPointer<ClassProjectPlayerProgress>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ClassProjectPlayerProgress>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};