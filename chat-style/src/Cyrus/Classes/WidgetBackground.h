#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Texture.h>

class WidgetBackground : public PropertyClass {
public:
    float getFBackgroundAlpha() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setFBackgroundAlpha(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SharedPointer<Texture> * getPTopLeftBackgroundAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPTopLeftBackgroundAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    SharedPointer<Texture> * getPTopRightBackgroundAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setPTopRightBackgroundAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    SharedPointer<Texture> * getPBottomLeftBackgroundAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setPBottomLeftBackgroundAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    SharedPointer<Texture> * getPBottomRightBackgroundAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setPBottomRightBackgroundAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    SharedPointer<Texture> * getPBottomBackgroundAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setPBottomBackgroundAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    SharedPointer<Texture> * getPTopBackgroundAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setPTopBackgroundAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    SharedPointer<Texture> * getPLeftBackgroundAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setPLeftBackgroundAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    SharedPointer<Texture> * getPRightBackgroundAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setPRightBackgroundAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    SharedPointer<Texture> * getPCenterBackgroundAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setPCenterBackgroundAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

};