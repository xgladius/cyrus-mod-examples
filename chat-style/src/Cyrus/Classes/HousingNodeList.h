#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/HousingNode.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingNodeList : public PropertyClass {
public:
    Vector<SharedPointer<HousingNode>> * getNodeList() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<HousingNode>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNodeList(Vector<SharedPointer<HousingNode>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<HousingNode>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};