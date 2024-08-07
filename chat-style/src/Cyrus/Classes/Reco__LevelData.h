#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Reco::CategoryData.h>

class Reco__LevelData : public PropertyClass {
public:
    int getLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<Reco__CategoryData>> * getCategoryData() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<Reco__CategoryData>> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setCategoryData(List<SharedPointer<Reco__CategoryData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<Reco__CategoryData>> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};