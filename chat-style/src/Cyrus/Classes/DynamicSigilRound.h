#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DynamicSigilTurn.h>
#include <Cyrus/Classes/PropertyClass.h>

class DynamicSigilRound : public PropertyClass {
public:
    Vector<SharedPointer<DynamicSigilTurn>> * getTurns() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<DynamicSigilTurn>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTurns(Vector<SharedPointer<DynamicSigilTurn>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<DynamicSigilTurn>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};