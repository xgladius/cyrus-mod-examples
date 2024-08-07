#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class SpawnPointTemplate : public PropertyClass {
public:
    Vector3D getLocation() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLocation(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector3D getBoxLengths() { // Property Generated Getter
      return *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setBoxLengths(Vector3D val) { // Property Generated Setter
      *reinterpret_cast<Vector3D*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    unsigned __int64 getTemplateID.full() { // Property Generated Getter
      return *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setTemplateID.full(unsigned __int64 val) { // Property Generated Setter
      *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float getRespawnTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setRespawnTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    int getNumSpawns() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setNumSpawns(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    unsigned int getZoneLevelMin() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setZoneLevelMin(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned int getZoneLevelMax() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setZoneLevelMax(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    unsigned int getZoneLevelUp() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setZoneLevelUp(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};