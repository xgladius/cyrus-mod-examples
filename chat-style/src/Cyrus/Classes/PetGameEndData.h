#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PetStatModificationSet.h>
#include <Cyrus/Classes/PropertyClass.h>

class PetGameEndData : public PropertyClass {
public:
    float getScore() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setScore(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<PetStatModificationSet> * getStatMods() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PetStatModificationSet> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setStatMods(SharedPointer<PetStatModificationSet> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PetStatModificationSet> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getXpGain() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setXpGain(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned int getWins() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setWins(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

};