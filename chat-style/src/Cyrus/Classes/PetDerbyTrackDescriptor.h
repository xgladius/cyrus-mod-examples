#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/NodeDescriptor.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PetDerbyLaneSwitch.h>
#include <Cyrus/Enums/PetDerbyTrackTerrain.h>

class PetDerbyTrackDescriptor : public NodeDescriptor {
public:
    PetDerbyTrackTerrain getTerrainType() { // Property Generated Getter
      return *reinterpret_cast<PetDerbyTrackTerrain*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTerrainType(PetDerbyTrackTerrain val) { // Property Generated Setter
      *reinterpret_cast<PetDerbyTrackTerrain*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    PetDerbyLaneSwitch getLaneSwitch() { // Property Generated Getter
      return *reinterpret_cast<PetDerbyLaneSwitch*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setLaneSwitch(PetDerbyLaneSwitch val) { // Property Generated Setter
      *reinterpret_cast<PetDerbyLaneSwitch*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

};