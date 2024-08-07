#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreObjectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/SpawnObjectInfo__StartNodeType.h>

class SpawnObjectInfo : public CoreObjectInfo {
public:
    SpawnObjectInfo__StartNodeType getKStartNodeType() { // Property Generated Getter
      return *reinterpret_cast<SpawnObjectInfo__StartNodeType*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setKStartNodeType(SpawnObjectInfo__StartNodeType val) { // Property Generated Setter
      *reinterpret_cast<SpawnObjectInfo__StartNodeType*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    unsigned int getStartNode() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setStartNode(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    gid getPathID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setPathID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    char getUniqueLoc() { // Property Generated Getter
      return *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x104);
    }

    void setUniqueLoc(char val) { // Property Generated Setter
      *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x104) = val;
    }

};