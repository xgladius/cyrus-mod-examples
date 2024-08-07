#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CritAndBlockValues.h>
#include <Cyrus/Classes/PropertyClass.h>

class CritAndBlockLevelData : public PropertyClass {
public:
    int getMinLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setMinLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<SharedPointer<CritAndBlockValues>> * getCritAndBlockValues() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CritAndBlockValues>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCritAndBlockValues(List<SharedPointer<CritAndBlockValues>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CritAndBlockValues>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};