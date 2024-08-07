#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActiveClassProject.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClassProjectActiveList : public PropertyClass {
public:
    List<SharedPointer<ActiveClassProject>> * getActiveProjectList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ActiveClassProject>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setActiveProjectList(List<SharedPointer<ActiveClassProject>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ActiveClassProject>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};