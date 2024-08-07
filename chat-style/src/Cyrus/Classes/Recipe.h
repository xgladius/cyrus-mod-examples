#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>

class Recipe : public CoreObject {
public:
    unsigned int getRecipeNameID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setRecipeNameID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

};