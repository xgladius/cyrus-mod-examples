#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchRequest.h>
#include <Cyrus/Classes/PetDerbyTrackInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetMatchRequest : public MatchRequest {
public:
    int getMinRank() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setMinRank(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getMaxRank() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setMaxRank(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    SharedPointer<PetDerbyTrackInfo> * getPTrackInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PetDerbyTrackInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPTrackInfo(SharedPointer<PetDerbyTrackInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PetDerbyTrackInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};