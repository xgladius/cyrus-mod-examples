#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class TieredSpellGroupVisibility : public PropertyClass {
public:
    List<unsigned char> getVisibility() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setVisibility(List<unsigned char> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<int> getCanUpgrade() { // Property Generated Getter
      return *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setCanUpgrade(List<int> val) { // Property Generated Setter
      *reinterpret_cast<List<int>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};