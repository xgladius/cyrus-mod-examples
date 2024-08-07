#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class HatchmakingPetTypesList : public PropertyClass {
public:
    List<unsigned int> getHatchmakingPetTypesList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setHatchmakingPetTypesList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};