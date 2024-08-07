#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class WhirlyBurlyPlanningData : public PropertyClass {
public:
    List<unsigned char> getUnitTypesList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setUnitTypesList(List<unsigned char> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<unsigned int> getCardsUsedList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setCardsUsedList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<unsigned int> getDiscardedCardsList() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setDiscardedCardsList(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};