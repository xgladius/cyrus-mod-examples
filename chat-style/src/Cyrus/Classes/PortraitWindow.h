#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Texture.h>
#include <Cyrus/Classes/Window.h>

class PortraitWindow : public Window {
public:
    SharedPointer<Material> * getPMaterial() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x278);
    }

    void setPMaterial(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x278) = val;
    }

    SharedPointer<Texture> * getAlphaMask() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Texture> *>(reinterpret_cast<uintptr_t>(this) + 0x288);
    }

    void setAlphaMask(SharedPointer<Texture> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Texture> **>(reinterpret_cast<uintptr_t>(this) + 0x288) = val;
    }

};