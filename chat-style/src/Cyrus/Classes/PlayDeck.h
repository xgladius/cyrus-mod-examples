#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PlaySpellData.h>
#include <Cyrus/Classes/PropertyClass.h>

class PlayDeck : public PropertyClass {
public:
    Vector<SharedPointer<PlaySpellData>> * getDeckToSave() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<PlaySpellData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDeckToSave(Vector<SharedPointer<PlaySpellData>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<PlaySpellData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<SharedPointer<PlaySpellData>> * getGraveYardToSave() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<PlaySpellData>> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setGraveYardToSave(Vector<SharedPointer<PlaySpellData>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<PlaySpellData>> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};