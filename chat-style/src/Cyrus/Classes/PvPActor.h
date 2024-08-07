#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MatchActor.h>
#include <Cyrus/Classes/PropertyClass.h>

class PvPActor : public MatchActor {
public:
    unsigned char getPvpStatus() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setPvpStatus(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    short getGender() { // Property Generated Getter
      return *reinterpret_cast<short*>(reinterpret_cast<uintptr_t>(this) + 0x1B2);
    }

    void setGender(short val) { // Property Generated Setter
      *reinterpret_cast<short*>(reinterpret_cast<uintptr_t>(this) + 0x1B2) = val;
    }

    int getLevel() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B4);
    }

    void setLevel(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1B4) = val;
    }

    std::string getNameBlob() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8);
    }

    void setNameBlob(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1B8) = val;
    }

    std::string getSSchool() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D8);
    }

    void setSSchool(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x1D8) = val;
    }

    int getTimeLeft() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1FC);
    }

    void setTimeLeft(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1FC) = val;
    }

};