#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PathBehaviorTemplate::Action.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PathBehaviorTemplate__PathType.h>

class PathBehaviorTemplate : public BehaviorTemplate {
public:
    PathBehaviorTemplate__PathType getKPathType() { // Property Generated Getter
      return *reinterpret_cast<PathBehaviorTemplate__PathType*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setKPathType(PathBehaviorTemplate__PathType val) { // Property Generated Setter
      *reinterpret_cast<PathBehaviorTemplate__PathType*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    gid getPathID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setPathID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    int getNPathDirection() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setNPathDirection(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    List<SharedPointer<PathBehaviorTemplate__Action>> * getActionList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PathBehaviorTemplate__Action>> *>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setActionList(List<SharedPointer<PathBehaviorTemplate__Action>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PathBehaviorTemplate__Action>> **>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    unsigned int getPauseChance() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setPauseChance(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    float getTimeToPause() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setTimeToPause(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

};