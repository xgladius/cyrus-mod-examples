#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/InitialCombatSound.h>
#include <Cyrus/Classes/PropertyClass.h>

class InitialCombatSoundsList : public PropertyClass {
public:
    List<SharedPointer<InitialCombatSound>> * getInitialCombatSoundsList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InitialCombatSound>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setInitialCombatSoundsList(List<SharedPointer<InitialCombatSound>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InitialCombatSound>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};