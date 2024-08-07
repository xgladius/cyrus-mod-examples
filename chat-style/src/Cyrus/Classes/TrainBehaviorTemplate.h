#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>

class TrainBehaviorTemplate : public BehaviorTemplate {
public:
    float getIntroTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setIntroTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};