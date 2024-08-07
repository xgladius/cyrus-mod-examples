#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchActorResult.h>
#include <Cyrus/Classes/MatchTeamResult.h>
#include <Cyrus/Classes/PropertyClass.h>

class ArenaMatchResults : public PropertyClass {
public:
    gid getMatchID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMatchID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getMatchNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setMatchNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    int getMatchResolution() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setMatchResolution(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    List<SharedPointer<MatchActorResult>> * getActorList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<MatchActorResult>> *>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setActorList(List<SharedPointer<MatchActorResult>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<MatchActorResult>> **>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    List<MatchTeamResult> getTeamResults() { // Property Generated Getter
      return *reinterpret_cast<List<MatchTeamResult>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setTeamResults(List<MatchTeamResult> val) { // Property Generated Setter
      *reinterpret_cast<List<MatchTeamResult>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getTimeOutDraw() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setTimeOutDraw(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};