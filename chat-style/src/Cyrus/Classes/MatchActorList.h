#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchActor.h>
#include <Cyrus/Classes/PropertyClass.h>

class MatchActorList : public PropertyClass {
public:
    List<SharedPointer<MatchActor>> * getList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MatchActor>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setList(List<SharedPointer<MatchActor>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MatchActor>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};