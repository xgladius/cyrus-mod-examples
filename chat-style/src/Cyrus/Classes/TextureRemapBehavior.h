#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorInstance.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TextureRemap.h>

class TextureRemapBehavior : public BehaviorInstance {
public:
    List<SharedPointer<TextureRemap>> * getTextureRemapList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<TextureRemap>> *>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setTextureRemapList(List<SharedPointer<TextureRemap>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<TextureRemap>> **>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};