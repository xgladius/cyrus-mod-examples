#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PipCount.h>
#include <Cyrus/Classes/PropertyClass.h>

class ParticipantPipData : public PropertyClass {
public:
    gid getPartID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPartID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<PipCount> * getPips() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<PipCount> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPips(SharedPointer<PipCount> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<PipCount> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getAcq() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setAcq(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned int getArch() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setArch(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    float getArchPoints() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setArchPoints(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};