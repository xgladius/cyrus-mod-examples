#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingGameHiScores : public PropertyClass {
public:
    std::string getPlayerName0() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPlayerName0(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned short getScore0() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setScore0(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getPlayerName1() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPlayerName1(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned short getScore1() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setScore1(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    std::string getPlayerName2() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setPlayerName2(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    unsigned short getScore2() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setScore2(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

};