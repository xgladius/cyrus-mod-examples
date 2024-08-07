#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/NodeDescriptor.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/SpringboardNodeDescriptor__AnimationState.h>

class SpringboardNodeDescriptor : public NodeDescriptor {
public:
    SpringboardNodeDescriptor__AnimationState getKAnimationState() { // Property Generated Getter
      return *reinterpret_cast<SpringboardNodeDescriptor__AnimationState*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setKAnimationState(SpringboardNodeDescriptor__AnimationState val) { // Property Generated Setter
      *reinterpret_cast<SpringboardNodeDescriptor__AnimationState*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};