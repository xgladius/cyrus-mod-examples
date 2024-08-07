#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/FXDef.h>
#include <Cyrus/Classes/PropertyClass.h>

class Slot_Node_FXDef : public PropertyClass {
public:
    std::string getSlotName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSlotName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getNodeName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setNodeName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    SharedPointer<FXDef> * getFxDef() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<FXDef> *>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setFxDef(SharedPointer<FXDef> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<FXDef> **>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};