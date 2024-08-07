#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SG_GameAction.h>

class SG_GameAction_PlaySound : public SG_GameAction {
public:
    List<std::string> getSimpleSounds() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setSimpleSounds(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};