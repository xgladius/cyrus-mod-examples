#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WeightedEntry.h>

class WeightedList : public PropertyClass {
public:
    Vector<SharedPointer<WeightedEntry>> * getList() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<WeightedEntry>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setList(Vector<SharedPointer<WeightedEntry>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<WeightedEntry>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};