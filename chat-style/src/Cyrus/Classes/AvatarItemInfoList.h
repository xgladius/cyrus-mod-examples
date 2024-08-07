#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class AvatarItemInfoList : public PropertyClass {
public:
    List<AvatarItemInfoBase*> * getItemInfoList() { // Property Generated Getter
      return reinterpret_cast<List<AvatarItemInfoBase*> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setItemInfoList(List<AvatarItemInfoBase*> * val) { // Property Generated Setter
      *reinterpret_cast<List<AvatarItemInfoBase*> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};