#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CastleTourTeleportInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class CastleGamesEntry : public CastleTourTeleportInfo {
public:
    std::string getPackedName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setPackedName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    unsigned char getGameType() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setGameType(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    unsigned char getSubGameType() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x89);
    }

    void setSubGameType(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x89) = val;
    }

};