#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PetDerbyTrackTerrain.h>

class PetDerbyRacerState : public PropertyClass {
public:
    gid getPlayerOID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setPlayerOID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    PetDerbyTrackTerrain getCurrentTerrain() { // Property Generated Getter
      return *reinterpret_cast<PetDerbyTrackTerrain*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setCurrentTerrain(PetDerbyTrackTerrain val) { // Property Generated Setter
      *reinterpret_cast<PetDerbyTrackTerrain*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    int getCurrentLane() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setCurrentLane(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    unsigned int getCurrentLap() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setCurrentLap(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    unsigned char getIndexIntoArray() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setIndexIntoArray(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};