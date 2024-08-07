#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ParticipantParameter.h>
#include <Cyrus/Classes/PropertyClass.h>

class CombatTimerListObj : public PropertyClass {
public:
    List<ParticipantParameter> getTimeList() { // Property Generated Getter
      return *reinterpret_cast<List<ParticipantParameter>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTimeList(List<ParticipantParameter> val) { // Property Generated Setter
      *reinterpret_cast<List<ParticipantParameter>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned __int64 getDuelID.full() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDuelID.full(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};