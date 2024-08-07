#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObjectInfo.h>
#include <Cyrus/Classes/CoreObjectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundInfo.h>
#include <Cyrus/Enums/AccousticSignature.h>

class SoundAcousticsInfo : public SoundInfo {
public:
    AccousticSignature getEffect() { // Property Generated Getter
      return *reinterpret_cast<AccousticSignature*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setEffect(AccousticSignature val) { // Property Generated Setter
      *reinterpret_cast<AccousticSignature*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

};