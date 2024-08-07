#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>

class SoftwareStyle : public PropertyClass {
public:
    SharedPointer<Material> * getMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    Size<int> getSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Point<int> getHotSpot() { // Property Generated Getter
      return *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setHotSpot(Point<int> val) { // Property Generated Setter
      *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};