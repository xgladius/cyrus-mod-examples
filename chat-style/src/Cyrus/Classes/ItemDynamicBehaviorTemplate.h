#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class ItemDynamicBehaviorTemplate : public BehaviorTemplate {
public:
    Vector<BehaviorTemplate*> * getBehaviorList() { // Property Generated Getter
      return reinterpret_cast<Vector<BehaviorTemplate*> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setBehaviorList(Vector<BehaviorTemplate*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<BehaviorTemplate*> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};