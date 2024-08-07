#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/DynamicSigilRound.h>
#include <Cyrus/Classes/DynamicSigilTeam.h>
#include <Cyrus/Classes/PropertyClass.h>

class DynamicSigilInstance : public PropertyClass {
public:
    Vector<SharedPointer<DynamicSigilTeam>> * getTeams() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<DynamicSigilTeam>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTeams(Vector<SharedPointer<DynamicSigilTeam>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<DynamicSigilTeam>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<DynamicSigilRound> * getRoundInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<DynamicSigilRound> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setRoundInfo(SharedPointer<DynamicSigilRound> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<DynamicSigilRound> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};