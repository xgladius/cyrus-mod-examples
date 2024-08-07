#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class TemplateCache : public PropertyClass {
public:
    unsigned int getNVersion() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNVersion(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SerializedBuffer getSSerializedCache() { // Property Generated Getter
      return *reinterpret_cast<SerializedBuffer*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setSSerializedCache(SerializedBuffer val) { // Property Generated Setter
      *reinterpret_cast<SerializedBuffer*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};