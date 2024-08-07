#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchActor.h>
#include <Cyrus/Classes/PropertyClass.h>

class MatchActorResult : public PropertyClass {
public:
    SharedPointer<MatchActor> * getPActor() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<MatchActor> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPActor(SharedPointer<MatchActor> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<MatchActor> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getPlace() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPlace(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int getRatingGained() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setRatingGained(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    int getArenaPoints() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setArenaPoints(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    int getPvpCurrency() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setPvpCurrency(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    int getPvpTourneyCurrency() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setPvpTourneyCurrency(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    int getGold() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setGold(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    unsigned char getGameResult() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setGameResult(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};