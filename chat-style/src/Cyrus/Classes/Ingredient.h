#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/Ingredient__INGREDIENT_TYPE.h>

class Ingredient : public PropertyClass {
public:
    gid getItemID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setItemID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    std::string getAdjective() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setAdjective(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    int getQuantity() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setQuantity(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getSpellTemplate() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setSpellTemplate(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    Ingredient__INGREDIENT_TYPE getIngredientType() { // Property Generated Getter
      return *reinterpret_cast<Ingredient__INGREDIENT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setIngredientType(Ingredient__INGREDIENT_TYPE val) { // Property Generated Setter
      *reinterpret_cast<Ingredient__INGREDIENT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};