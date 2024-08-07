#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetGameInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetGameConfig : public PropertyClass {
public:
    Vector<SharedPointer<PetGameInfo>> * getGames() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<PetGameInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setGames(Vector<SharedPointer<PetGameInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<PetGameInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};