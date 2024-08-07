#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class TemplateCache__Entry : public PropertyClass {
public:
    unsigned __int64 getFileTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setFileTime(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SerializedBuffer getSBinary() { // Property Generated Getter
      return *reinterpret_cast<SerializedBuffer*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSBinary(SerializedBuffer val) { // Property Generated Setter
      *reinterpret_cast<SerializedBuffer*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};