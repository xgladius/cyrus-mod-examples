#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PathBehaviorTemplate::Action.h>
#include <Cyrus/Classes/PropertyClass.h>

class PathActionChangePath : public PathBehaviorTemplate::Action {
public:
    gid getNDestinationPathID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setNDestinationPathID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    int getNDestinationNodeID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setNDestinationNodeID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};