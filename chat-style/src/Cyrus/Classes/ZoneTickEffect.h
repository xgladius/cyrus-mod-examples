#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameEffectBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class ZoneTickEffect : public GameEffectBase {
public:
    bool getTickOnAdd() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setTickOnAdd(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    std::string getZoneEventName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setZoneEventName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    float getTickRateSec() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setTickRateSec(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    int getMaxTicks() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setMaxTicks(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

};