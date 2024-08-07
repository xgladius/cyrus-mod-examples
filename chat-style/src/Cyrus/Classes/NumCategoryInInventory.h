#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class NumCategoryInInventory : public PropertyClass {
public:
    std::string getSCategory() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSCategory(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getNumCategoryInInventory() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setNumCategoryInInventory(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};