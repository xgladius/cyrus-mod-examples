#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ResultList.h>

class AdvPvPLeagueAwardInfo : public PropertyClass {
public:
    std::string getLeagueType() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLeagueType(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<ResultList> * getAwardInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setAwardInfo(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};