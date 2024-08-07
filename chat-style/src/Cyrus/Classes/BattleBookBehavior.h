#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PolymorphRatingInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SpellData.h>

class BattleBookBehavior : public BehaviorInstance {
public:
    List<SharedPointer<SpellData>> * getSpellList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SpellData>> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setSpellList(List<SharedPointer<SpellData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SpellData>> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    SharedPointer<PolymorphRatingInfo> * getRating() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PolymorphRatingInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setRating(SharedPointer<PolymorphRatingInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PolymorphRatingInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};