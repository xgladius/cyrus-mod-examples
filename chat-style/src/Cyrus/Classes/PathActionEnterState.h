#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PathBehaviorTemplate::Action.h>
#include <Cyrus/Classes/PropertyClass.h>

class PathActionEnterState : public PathBehaviorTemplate::Action {
public:
    std::string getSStateName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setSStateName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};