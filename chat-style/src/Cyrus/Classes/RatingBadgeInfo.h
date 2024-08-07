#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class RatingBadgeInfo : public PropertyClass {
public:
    std::string getBadgeName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBadgeName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getCost() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setCost(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<Ingredient*> * getIngredients() { // Property Generated Getter
      return reinterpret_cast<List<Ingredient*> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setIngredients(List<Ingredient*> * val) { // Property Generated Setter
      *reinterpret_cast<List<Ingredient*> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};