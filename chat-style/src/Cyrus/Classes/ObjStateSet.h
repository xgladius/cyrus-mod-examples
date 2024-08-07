#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ObjStateSet : public PropertyClass {
public:
    List<ObjStateCategory*> * getCategories() { // Property Generated Getter
      return reinterpret_cast<List<ObjStateCategory*> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setCategories(List<ObjStateCategory*> * val) { // Property Generated Setter
      *reinterpret_cast<List<ObjStateCategory*> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    std::string getStateSetName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setStateSetName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};