#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PipConversionValues.h>
#include <Cyrus/Classes/PropertyClass.h>

class PipConversionLevelData : public PropertyClass {
public:
    int getMinLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setMinLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<SharedPointer<PipConversionValues>> * getLevelValues() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PipConversionValues>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLevelValues(List<SharedPointer<PipConversionValues>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PipConversionValues>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};