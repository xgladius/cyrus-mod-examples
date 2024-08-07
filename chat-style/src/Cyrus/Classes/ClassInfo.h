#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClassInfo : public PropertyClass {
public:
    std::string getClassName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setClassName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<MagicLevelInfo*> * getClassLevelInfo() { // Property Generated Getter
      return reinterpret_cast<List<MagicLevelInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setClassLevelInfo(List<MagicLevelInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<List<MagicLevelInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};