#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/HousingMusicPlayerBehaviorBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class HousingMusicPlayerBehavior : public HousingMusicPlayerBehaviorBase {
public:
    std::string getMusicData() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setMusicData(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};