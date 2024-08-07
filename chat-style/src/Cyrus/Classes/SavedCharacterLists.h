#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SavedCharacter.h>

class SavedCharacterLists : public PropertyClass {
public:
    List<SharedPointer<SavedCharacter>> * getBoyCharacterList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SavedCharacter>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBoyCharacterList(List<SharedPointer<SavedCharacter>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SavedCharacter>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<SavedCharacter>> * getGirlCharacterList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SavedCharacter>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setGirlCharacterList(List<SharedPointer<SavedCharacter>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SavedCharacter>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};