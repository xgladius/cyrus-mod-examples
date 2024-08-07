#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingPetMovementCompressed : public PropertyClass {
public:
    Vector<unsigned int> getCompressedPetMovement() { // Property Generated Getter
      return *reinterpret_cast<Vector<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCompressedPetMovement(Vector<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};