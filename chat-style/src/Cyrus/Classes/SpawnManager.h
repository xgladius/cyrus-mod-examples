#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpawnObject.h>

class SpawnManager : public PropertyClass {
public:
    List<SharedPointer<SpawnObject>> * getSpawners() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpawnObject>> *>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setSpawners(List<SharedPointer<SpawnObject>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpawnObject>> **>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};