#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetGameMorphPartner : public PropertyClass {
public:
    gid getCharacterId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCharacterId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<CoreObject>> * getPets() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CoreObject>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPets(List<SharedPointer<CoreObject>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CoreObject>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};