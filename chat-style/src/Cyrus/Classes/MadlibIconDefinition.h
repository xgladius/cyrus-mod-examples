#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MadlibIconData.h>
#include <Cyrus/Classes/PropertyClass.h>

class MadlibIconDefinition : public PropertyClass {
public:
    List<SharedPointer<MadlibIconData>> * getMadlibIconDataList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MadlibIconData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMadlibIconDataList(List<SharedPointer<MadlibIconData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MadlibIconData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};