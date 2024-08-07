#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ReqNumeric.h>
#include <Cyrus/Classes/Requirement.h>

class ReqEnergy : public ReqNumeric {
public:
    bool getIsPercent() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setIsPercent(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};