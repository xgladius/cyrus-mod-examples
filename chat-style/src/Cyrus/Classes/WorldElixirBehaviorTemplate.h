#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/ElixirBehaviorTemplate.h>
#include <Cyrus/Classes/LevelUpElixirBehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TimedItemBehaviorTemplate.h>

class WorldElixirBehaviorTemplate : public LevelUpElixirBehaviorTemplate {
public:
    std::string getQuestPrefix() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setQuestPrefix(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

};