#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PathBehaviorTemplate::Action.h>
#include <Cyrus/Classes/PropertyClass.h>

class PathActionEmote : public PathBehaviorTemplate::Action {
public:
    std::string getSEmoteName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setSEmoteName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    float getFMinTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setFMinTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    float getFMaxTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setFMaxTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

};