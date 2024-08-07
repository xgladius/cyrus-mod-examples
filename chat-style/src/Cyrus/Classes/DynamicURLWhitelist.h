#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DynamicURLDescriptor.h>
#include <Cyrus/Classes/PropertyClass.h>

class DynamicURLWhitelist : public PropertyClass {
public:
    Vector<DynamicURLDescriptor> getWhitelist() { // Property Generated Getter
      return *reinterpret_cast<Vector<DynamicURLDescriptor>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setWhitelist(Vector<DynamicURLDescriptor> val) { // Property Generated Setter
      *reinterpret_cast<Vector<DynamicURLDescriptor>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};