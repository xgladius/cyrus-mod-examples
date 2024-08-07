#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>

class BreadCrumbBehaviorBase : public BehaviorInstance {
public:
    unsigned int getBreadCrumbNumber() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setBreadCrumbNumber(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<gid> getEquippedPetGIDList() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setEquippedPetGIDList(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    List<unsigned short> getEquippedBreadCrumbIDList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setEquippedBreadCrumbIDList(List<unsigned short> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    unsigned int getFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

};