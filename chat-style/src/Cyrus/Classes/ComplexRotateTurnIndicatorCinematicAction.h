#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/ComplexRotationInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class ComplexRotateTurnIndicatorCinematicAction : public CinematicAction {
public:
    SharedPointer<ComplexRotationInfo> * getRotationInfo() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ComplexRotationInfo> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setRotationInfo(SharedPointer<ComplexRotationInfo> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ComplexRotationInfo> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};