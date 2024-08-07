#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class PathManager__PathTemplateList : public PropertyClass {
public:
    List<PathObjectTemplate*> * getPathList() { // Property Generated Getter
      return reinterpret_cast<List<PathObjectTemplate*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPathList(List<PathObjectTemplate*> * val) { // Property Generated Setter
      *reinterpret_cast<List<PathObjectTemplate*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};