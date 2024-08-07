#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/CraftingSlot.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClientPetOwnerBehavior : public BehaviorInstance {
public:
    unsigned char getMaxSlots() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setMaxSlots(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    List<SharedPointer<CraftingSlot>> * getMorphingSlots() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CraftingSlot>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setMorphingSlots(List<SharedPointer<CraftingSlot>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CraftingSlot>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned int getEnergyTickTimeSecs() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setEnergyTickTimeSecs(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    int getEnergy() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setEnergy(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    bool getPlayingAsPet() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setPlayingAsPet(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

};