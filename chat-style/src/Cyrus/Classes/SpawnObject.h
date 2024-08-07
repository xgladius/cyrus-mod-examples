#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class SpawnObject : public PropertyClass {
public:
    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    gid getId() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setId(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getActive() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setActive(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    bool getPopSensitive() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x71);
    }

    void setPopSensitive(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x71) = val;
    }

    unsigned int getMaxNumberOfSpawns() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setMaxNumberOfSpawns(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    bool getAtLeastOneSpawn() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setAtLeastOneSpawn(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getActivateAtMax() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x79);
    }

    void setActivateAtMax(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x79) = val;
    }

    int getSpawnTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setSpawnTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    unsigned int getRespawnRate() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setRespawnRate(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    List<SpawnItem*> * getSpawnList() { // Property Generated Getter
      return reinterpret_cast<List<SpawnItem*> *>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setSpawnList(List<SpawnItem*> * val) { // Property Generated Setter
      *reinterpret_cast<List<SpawnItem*> **>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    RequirementList* * getGlobalDynamicReqs() { // Property Generated Getter
      return reinterpret_cast<RequirementList* *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setGlobalDynamicReqs(RequirementList* * val) { // Property Generated Setter
      *reinterpret_cast<RequirementList* **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    bool getGlobalDynamic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setGlobalDynamic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    bool getWaitForTimer() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7A);
    }

    void setWaitForTimer(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x7A) = val;
    }

    unsigned int getZoneLevelMin() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setZoneLevelMin(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    unsigned int getZoneLevelMax() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setZoneLevelMax(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    unsigned int getZoneLevelUp() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setZoneLevelUp(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

};