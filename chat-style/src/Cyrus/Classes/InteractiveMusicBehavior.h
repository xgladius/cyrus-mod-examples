#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/InteractiveMusicBehaviorBase.h>
#include <Cyrus/Classes/PropertyClass.h>

class InteractiveMusicBehavior : public InteractiveMusicBehaviorBase {
public:
    std::string getMusicData() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setMusicData(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

};