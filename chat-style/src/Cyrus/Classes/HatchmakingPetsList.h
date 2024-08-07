#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HatchmakingPet.h>
#include <Cyrus/Classes/PropertyClass.h>

class HatchmakingPetsList : public PropertyClass {
public:
    List<SharedPointer<HatchmakingPet>> * getHatchmakingPetsList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<HatchmakingPet>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setHatchmakingPetsList(List<SharedPointer<HatchmakingPet>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<HatchmakingPet>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    bool getDisableKiosk() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDisableKiosk(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    bool getDisableOffer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x59);
    }

    void setDisableOffer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x59) = val;
    }

    unsigned int getPremiumPetExceptionCode() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setPremiumPetExceptionCode(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

};