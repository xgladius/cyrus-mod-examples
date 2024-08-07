#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ProxyGeometry.h>

class ProxyMesh : public ProxyGeometry {
public:
    Vector<SimpleVert> getVerts() { // Property Generated Getter
      return *reinterpret_cast<Vector<SimpleVert>*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setVerts(Vector<SimpleVert> val) { // Property Generated Setter
      *reinterpret_cast<Vector<SimpleVert>*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    Vector<SimpleFace> getFaces() { // Property Generated Getter
      return *reinterpret_cast<Vector<SimpleFace>*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setFaces(Vector<SimpleFace> val) { // Property Generated Setter
      *reinterpret_cast<Vector<SimpleFace>*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    Vector<SimpleVert> getNormals() { // Property Generated Getter
      return *reinterpret_cast<Vector<SimpleVert>*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setNormals(Vector<SimpleVert> val) { // Property Generated Setter
      *reinterpret_cast<Vector<SimpleVert>*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

};