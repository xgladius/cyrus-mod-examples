#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MountRecord.h>
#include <Cyrus/Classes/PropertyClass.h>

class MountTable : public PropertyClass {
public:
    Vector<SharedPointer<MountRecord>> * getMounts() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<MountRecord>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMounts(Vector<SharedPointer<MountRecord>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<MountRecord>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};