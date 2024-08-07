#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ScoreTracking.h>

class ScoreTrackingList : public PropertyClass {
public:
    List<SharedPointer<ScoreTracking>> * getScores() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ScoreTracking>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setScores(List<SharedPointer<ScoreTracking>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ScoreTracking>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};