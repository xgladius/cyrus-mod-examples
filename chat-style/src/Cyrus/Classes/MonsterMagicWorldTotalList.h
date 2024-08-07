#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MonsterMagicWorldTotal.h>
#include <Cyrus/Classes/PropertyClass.h>

class MonsterMagicWorldTotalList : public PropertyClass {
public:
    List<SharedPointer<MonsterMagicWorldTotal>> * getMonsterMagicWorldTotalList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MonsterMagicWorldTotal>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMonsterMagicWorldTotalList(List<SharedPointer<MonsterMagicWorldTotal>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MonsterMagicWorldTotal>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};