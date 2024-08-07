#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ControlTree__Item : public PropertyClass {
public:
    Color getColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::wstring getSLabel() { // Property Generated Getter
      return *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSLabel(std::wstring val) { // Property Generated Setter
      *reinterpret_cast<std::wstring*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    Vector<ControlTree__Item*> * getChildren() { // Property Generated Getter
      return reinterpret_cast<Vector<ControlTree__Item*> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setChildren(Vector<ControlTree__Item*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<ControlTree__Item*> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};