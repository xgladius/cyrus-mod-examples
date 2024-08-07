#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ObjStateCategory : public PropertyClass {
public:
    std::string getCategoryName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCategoryName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<ObjState*> * getStates() { // Property Generated Getter
      return reinterpret_cast<List<ObjState*> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setStates(List<ObjState*> * val) { // Property Generated Setter
      *reinterpret_cast<List<ObjState*> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    std::string getStartState() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setStartState(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getBaseState() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setBaseState(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};