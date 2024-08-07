#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Search::ResultItem.h>
#include <Cyrus/Enums/eGender.h>
#include <Cyrus/Enums/eRace.h>

class WizardSearchResultItem : public Search::ResultItem {
public:
    int getLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    int getWorld() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setWorld(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    unsigned int getNameKey() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setNameKey(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    eGender getGender() { // Property Generated Getter
      return *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setGender(eGender val) { // Property Generated Setter
      *reinterpret_cast<eGender*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    eRace getRace() { // Property Generated Getter
      return *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xE4);
    }

    void setRace(eRace val) { // Property Generated Setter
      *reinterpret_cast<eRace*>(reinterpret_cast<uintptr_t>(this) + 0xE4) = val;
    }

};