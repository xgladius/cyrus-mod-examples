#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/DailyPvPInfo__DailyPvPTypes.h>

class DailyPvPInfo : public PropertyClass {
public:
    unsigned int getNumMatchesRequired() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNumMatchesRequired(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    DailyPvPInfo__DailyPvPTypes getPvpType() { // Property Generated Getter
      return *reinterpret_cast<DailyPvPInfo__DailyPvPTypes*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setPvpType(DailyPvPInfo__DailyPvPTypes val) { // Property Generated Setter
      *reinterpret_cast<DailyPvPInfo__DailyPvPTypes*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    bool getWinRequired() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setWinRequired(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};