#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/MountRecord__VolumeTypes.h>

class MountRecord : public PropertyClass {
public:
    MountRecord__VolumeTypes getNVolumeType() { // Property Generated Getter
      return *reinterpret_cast<MountRecord__VolumeTypes*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNVolumeType(MountRecord__VolumeTypes val) { // Property Generated Setter
      *reinterpret_cast<MountRecord__VolumeTypes*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getSOption() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSOption(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    int getNPriority() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setNPriority(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getSMount() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setSMount(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    bool getBWritable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setBWritable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

};