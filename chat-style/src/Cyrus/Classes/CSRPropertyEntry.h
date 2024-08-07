#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class CSRPropertyEntry : public PropertyClass {
public:
    s24 getValue() { // Property Generated Getter
      return *reinterpret_cast<s24*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setValue(s24 val) { // Property Generated Setter
      *reinterpret_cast<s24*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    unsigned int getPropertyID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPropertyID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};