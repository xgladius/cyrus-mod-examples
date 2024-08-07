#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/InfractionPenalty.h>
#include <Cyrus/Classes/PropertyClass.h>

class BGPenaltyMatchBan : public InfractionPenalty {
public:
    unsigned int getDuration() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setDuration(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};