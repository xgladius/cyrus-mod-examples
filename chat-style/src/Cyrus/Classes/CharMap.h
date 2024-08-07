#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class CharMap : public PropertyClass {
public:
    unsigned short getSrc() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSrc(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned short getDst() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x4A);
    }

    void setDst(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x4A) = val;
    }

};