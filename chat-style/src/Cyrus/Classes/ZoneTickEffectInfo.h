#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class ZoneTickEffectInfo : public GameEffectInfo {
public:
    bool getTickOnAdd() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setTickOnAdd(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getZoneEventName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setZoneEventName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    float getTickRateSec() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setTickRateSec(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    int getMaxTicks() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setMaxTicks(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

};