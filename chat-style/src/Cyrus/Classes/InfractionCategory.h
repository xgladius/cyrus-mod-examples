#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/InfractionEvent.h>
#include <Cyrus/Classes/InfractionPenaltyInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class InfractionCategory : public PropertyClass {
public:
    std::string getCategory() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCategory(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<InfractionEvent>> * getEvents() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InfractionEvent>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setEvents(List<SharedPointer<InfractionEvent>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InfractionEvent>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    List<SharedPointer<InfractionPenaltyInfo>> * getPenalties() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InfractionPenaltyInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setPenalties(List<SharedPointer<InfractionPenaltyInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InfractionPenaltyInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

};