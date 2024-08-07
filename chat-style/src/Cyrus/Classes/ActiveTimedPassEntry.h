#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PassInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class ActiveTimedPassEntry : public PropertyClass {
public:
    PassInfo getPassInfo() { // Property Generated Getter
      return *reinterpret_cast<PassInfo*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPassInfo(PassInfo val) { // Property Generated Setter
      *reinterpret_cast<PassInfo*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getExpireTime() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setExpireTime(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

};