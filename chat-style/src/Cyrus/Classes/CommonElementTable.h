#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class CommonElementTable : public PropertyClass {
public:
    Vector<CharacterElement*> * getHairColorList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setHairColorList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};