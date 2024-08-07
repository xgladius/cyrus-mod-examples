#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObject.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class WizClientObjectItem : public ClientObject {
public:
    int getPrimaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x230);
    }

    void setPrimaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x230) = val;
    }

    int getPattern() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x234);
    }

    void setPattern(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x234) = val;
    }

    int getSecondaryColor() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x238);
    }

    void setSecondaryColor(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x238) = val;
    }

    gid getDisplayID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setDisplayID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

    unsigned int getItemFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setItemFlags(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

};