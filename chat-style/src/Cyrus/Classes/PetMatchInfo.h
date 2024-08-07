#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ArenaMatchInfo.h>
#include <Cyrus/Classes/PetDerbyTrackInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetMatchInfo : public ArenaMatchInfo {
public:
    int getMinRank() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setMinRank(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    int getMaxRank() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x13C);
    }

    void setMaxRank(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x13C) = val;
    }

    int getTrackRank() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setTrackRank(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    SharedPointer<PetDerbyTrackInfo> * getPTrackInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PetDerbyTrackInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setPTrackInfo(SharedPointer<PetDerbyTrackInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PetDerbyTrackInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    ResultList* * getRatingBrackets() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setRatingBrackets(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

};