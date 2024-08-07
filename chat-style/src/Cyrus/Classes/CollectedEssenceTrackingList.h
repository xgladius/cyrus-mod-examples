#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CollectedEssenceTrackingData.h>
#include <Cyrus/Classes/PropertyClass.h>

class CollectedEssenceTrackingList : public PropertyClass {
public:
    List<SharedPointer<CollectedEssenceTrackingData>> * getEssenceTrackingList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CollectedEssenceTrackingData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEssenceTrackingList(List<SharedPointer<CollectedEssenceTrackingData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CollectedEssenceTrackingData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getCollectedEssenceCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setCollectedEssenceCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int getFailedToCollectReason() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setFailedToCollectReason(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

};