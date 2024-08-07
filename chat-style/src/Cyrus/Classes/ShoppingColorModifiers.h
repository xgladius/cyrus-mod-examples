#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ShoppingColorModifiers : public PropertyClass {
public:
    Vector<float> getBoysPrimaryColors() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setBoysPrimaryColors(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    Vector<float> getBoysSecondaryColors() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setBoysSecondaryColors(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    Vector<float> getGirlsPrimaryColors() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setGirlsPrimaryColors(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    Vector<float> getGirlsSecondaryColors() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setGirlsSecondaryColors(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};