#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class InfractionPenalty : public PropertyClass {
public:
    unsigned int getInternalID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setInternalID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned int getCategoryID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setCategoryID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    float getRemoveAtPointValue() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setRemoveAtPointValue(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    unsigned int getExpireTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setExpireTime(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

};