#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class NamedCharacterElement : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<CharacterElement*> * getList() { // Property Generated Getter
      return reinterpret_cast<Vector<CharacterElement*> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setList(Vector<CharacterElement*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<CharacterElement*> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};