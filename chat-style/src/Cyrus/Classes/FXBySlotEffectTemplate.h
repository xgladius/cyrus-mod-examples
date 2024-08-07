#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Slot_Node_FXDef.h>

class FXBySlotEffectTemplate : public GameEffectTemplate {
public:
    List<SharedPointer<Slot_Node_FXDef>> * getFxList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<Slot_Node_FXDef>> *>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setFxList(List<SharedPointer<Slot_Node_FXDef>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<Slot_Node_FXDef>> **>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

};