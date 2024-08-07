#pragma once
#include <Cyrus/Classes/PropertyClass.h>

class UIScaleConfigEntry : public PropertyClass {
public:
  int getRes() { // Property Generated Getter
    return *reinterpret_cast<int *>(reinterpret_cast<uintptr_t>(this) + 0x48);
  }

  void setRes(int val) { // Property Generated Setter
    *reinterpret_cast<int *>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
  }

  float getMicroScale() { // Property Generated Getter
    return *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x4C);
  }

  void setMicroScale(float val) { // Property Generated Setter
    *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
  }

  float getTinyScale() { // Property Generated Getter
    return *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x50);
  }

  void setTinyScale(float val) { // Property Generated Setter
    *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
  }

  float getSmallScale() { // Property Generated Getter
    return *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x54);
  }

  void setSmallScale(float val) { // Property Generated Setter
    *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
  }

  float getRegularScale() { // Property Generated Getter
    return *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x58);
  }

  void setRegularScale(float val) { // Property Generated Setter
    *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
  }

  float getLargeScale() { // Property Generated Getter
    return *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x5C);
  }

  void setLargeScale(float val) { // Property Generated Setter
    *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
  }

  float getHugeScale() { // Property Generated Getter
    return *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x60);
  }

  void setHugeScale(float val) { // Property Generated Setter
    *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
  }
};