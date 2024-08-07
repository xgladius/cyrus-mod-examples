#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class BracketRewardsPlaceMapping : public PropertyClass {
public:
    unsigned int getNumOfTeams() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNumOfTeams(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<unsigned int> getMappedPlace() { // Property Generated Getter
      return *reinterpret_cast<Vector<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setMappedPlace(Vector<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};