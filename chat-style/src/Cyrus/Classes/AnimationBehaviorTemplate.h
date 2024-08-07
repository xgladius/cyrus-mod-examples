#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RenderBehaviorTemplate.h>
#include <Cyrus/Classes/UserAnimationEvent.h>

class AnimationBehaviorTemplate : public RenderBehaviorTemplate {
public:
    int getSkeletonID() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setSkeletonID(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    std::string getDataLookupAssetName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setDataLookupAssetName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    std::string getAnimationAssetName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setAnimationAssetName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    float getMovementScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setMovementScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    std::string getIdleAnimationName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setIdleAnimationName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    List<SharedPointer<UserAnimationEvent>> * getAnimationEventList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<UserAnimationEvent>> *>(reinterpret_cast<uintptr_t>(this) + 0x178);
    }

    void setAnimationEventList(List<SharedPointer<UserAnimationEvent>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<UserAnimationEvent>> **>(reinterpret_cast<uintptr_t>(this) + 0x178) = val;
    }

};