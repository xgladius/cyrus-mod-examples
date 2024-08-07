#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class PvPRatingsConfig : public PropertyClass {
public:
    Vector<RatingInfo*> * getRatingsConfig() { // Property Generated Getter
      return reinterpret_cast<Vector<RatingInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setRatingsConfig(Vector<RatingInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<RatingInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};