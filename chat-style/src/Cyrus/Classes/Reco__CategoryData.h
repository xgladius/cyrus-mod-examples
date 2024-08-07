#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Reco::RecoItemData.h>

class Reco__CategoryData : public PropertyClass {
public:
    int getId() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setId(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<Reco__RecoItemData>> * getItems() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<Reco__RecoItemData>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setItems(List<SharedPointer<Reco__RecoItemData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<Reco__RecoItemData>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};