#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class PathManager__NodeTemplateList : public PropertyClass {
public:
    List<NodeObject*> * getNodeList() { // Property Generated Getter
      return reinterpret_cast<List<NodeObject*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNodeList(List<NodeObject*> * val) { // Property Generated Setter
      *reinterpret_cast<List<NodeObject*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};