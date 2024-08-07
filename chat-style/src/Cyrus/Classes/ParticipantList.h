#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CombatParticipant.h>
#include <Cyrus/Classes/PropertyClass.h>

class ParticipantList : public PropertyClass {
public:
    List<SharedPointer<CombatParticipant>> * getPartList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CombatParticipant>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPartList(List<SharedPointer<CombatParticipant>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CombatParticipant>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<unsigned int> getDeckSize() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDeckSize(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<unsigned int> getTotalDeckSize() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setTotalDeckSize(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<unsigned int> getTreasureCardAmount() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setTreasureCardAmount(List<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};