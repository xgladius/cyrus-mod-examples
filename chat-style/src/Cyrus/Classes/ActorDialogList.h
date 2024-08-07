#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ActorDialogListBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class ActorDialogList : public ActorDialogListBase {
public:
    List<ActorDialog*> * getDialogs() { // Property Generated Getter
      return reinterpret_cast<List<ActorDialog*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDialogs(List<ActorDialog*> * val) { // Property Generated Setter
      *reinterpret_cast<List<ActorDialog*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};