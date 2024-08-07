#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CharacterSet.h>
#include <Cyrus/Classes/PropertyClass.h>

class CustomNameOptions : public PropertyClass {
public:
    unsigned int getCustomNameMaxLength() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCustomNameMaxLength(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getCustomNameMinLength() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setCustomNameMinLength(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    Vector<std::wstring> getSubStringNameExceptions() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::wstring>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setSubStringNameExceptions(Vector<std::wstring> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::wstring>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    std::wstring getSingleCharExceptions() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setSingleCharExceptions(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    bool getCaseInsensitive() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setCaseInsensitive(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    List<SharedPointer<CharacterSet>> * getCharSetCosts() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CharacterSet>> *>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setCharSetCosts(List<SharedPointer<CharacterSet>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CharacterSet>> **>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

};