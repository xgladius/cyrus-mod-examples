#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BracketRewardsPlaceMapping.h>
#include <Cyrus/Classes/PropertyClass.h>

class TournamentConfig : public PropertyClass {
public:
    List<std::string> getPrincipalTournamentNames() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPrincipalTournamentNames(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    List<std::string> getTemporaryTournamentNames() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setTemporaryTournamentNames(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    int getObserverTimeout() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setObserverTimeout(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    int getForfeitTimeout() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setForfeitTimeout(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getActiveSeason() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setActiveSeason(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned int getMaxUpdateTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setMaxUpdateTime(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    unsigned int getMaxUpdateCount() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setMaxUpdateCount(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    unsigned int getCacheUpdateTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setCacheUpdateTime(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    std::string getBracketScheduleFilename() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setBracketScheduleFilename(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    std::string getBracketStringTableFilename() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setBracketStringTableFilename(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    List<SharedPointer<BracketRewardsPlaceMapping>> * getBracketRewardsPlaceMappingList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BracketRewardsPlaceMapping>> *>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setBracketRewardsPlaceMappingList(List<SharedPointer<BracketRewardsPlaceMapping>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BracketRewardsPlaceMapping>> **>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

};