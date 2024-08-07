#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GameObjectAnimData.h>
#include <Cyrus/Classes/PropertyClass.h>

class GameObjectAnimStateTracker : public PropertyClass {
public:
    List<SharedPointer<GameObjectAnimData>> * getAnimDataList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<GameObjectAnimData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAnimDataList(List<SharedPointer<GameObjectAnimData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<GameObjectAnimData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};