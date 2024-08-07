#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BattlegroundPolymorphList.h>
#include <Cyrus/Classes/PropertyClass.h>

class BattlegroundPolymorphs : public PropertyClass {
public:
    Vector<SharedPointer<BattlegroundPolymorphList>> * getPolymorphTypeList() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<BattlegroundPolymorphList>> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPolymorphTypeList(Vector<SharedPointer<BattlegroundPolymorphList>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<BattlegroundPolymorphList>> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};