#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/InfractionPenalty.h>
#include <Cyrus/Classes/InfractionRecord.h>
#include <Cyrus/Classes/PropertyClass.h>

class InfractionBehavior : public BehaviorInstance {
public:
    List<SharedPointer<InfractionPenalty>> * getPenalties() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InfractionPenalty>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPenalties(List<SharedPointer<InfractionPenalty>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InfractionPenalty>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<SharedPointer<InfractionRecord>> * getRecord() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InfractionRecord>> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setRecord(List<SharedPointer<InfractionRecord>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InfractionRecord>> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};