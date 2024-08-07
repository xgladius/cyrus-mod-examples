#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class MinigameConfig : public PropertyClass {
public:
    Vector<MinigameInfo*> * getMinigames() { // Property Generated Getter
      return reinterpret_cast<Vector<MinigameInfo*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMinigames(Vector<MinigameInfo*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<MinigameInfo*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};