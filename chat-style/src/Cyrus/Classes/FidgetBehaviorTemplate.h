#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/FidgetStateInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class FidgetBehaviorTemplate : public BehaviorTemplate {
public:
    Vector<FidgetStateInfo> getFidgetStateInfo() { // Property Generated Getter
      return *reinterpret_cast<Vector<FidgetStateInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setFidgetStateInfo(Vector<FidgetStateInfo> val) { // Property Generated Setter
      *reinterpret_cast<Vector<FidgetStateInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};