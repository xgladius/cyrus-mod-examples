#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DynaMod.h>
#include <Cyrus/Classes/PropertyClass.h>

class DynaModList : public PropertyClass {
public:
    List<SharedPointer<DynaMod>> * getAllMods() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<DynaMod>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAllMods(List<SharedPointer<DynaMod>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<DynaMod>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};