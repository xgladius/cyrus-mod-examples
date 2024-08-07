#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/MonsterArenaBehaviorBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class MonsterArenaBehavior : public MonsterArenaBehaviorBase {
public:
    std::string getMonsterData() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setMonsterData(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};