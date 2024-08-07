#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class MatchTeamResult : public PropertyClass {
public:
    gid getTeamID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTeamID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned char getTeamResolution() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTeamResolution(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};