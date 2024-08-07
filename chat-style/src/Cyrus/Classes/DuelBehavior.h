#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/Duel.h>
#include <Cyrus/Classes/PropertyClass.h>

class DuelBehavior : public BehaviorInstance {
public:
    SharedPointer<Duel> * getPDuel() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Duel> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPDuel(SharedPointer<Duel> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Duel> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned int getSigilTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setSigilTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};