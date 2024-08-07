#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class RegistrarOptions : public PropertyClass {
public:
    List<SchoolOfFocusOption*> * getFocusOptions() { // Property Generated Getter
      return reinterpret_cast<List<SchoolOfFocusOption*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setFocusOptions(List<SchoolOfFocusOption*> * val) { // Property Generated Setter
      *reinterpret_cast<List<SchoolOfFocusOption*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<TitleOption*> * getTitleOptions() { // Property Generated Getter
      return reinterpret_cast<List<TitleOption*> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setTitleOptions(List<TitleOption*> * val) { // Property Generated Setter
      *reinterpret_cast<List<TitleOption*> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    unsigned int getCurrentSchoolID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setCurrentSchoolID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getCurrentTitleKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setCurrentTitleKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};