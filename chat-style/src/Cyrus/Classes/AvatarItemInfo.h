#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AvatarItemInfoBase.h>
#include <Cyrus/Classes/AvatarOption.h>
#include <Cyrus/Classes/AvatarTextureOption.h>
#include <Cyrus/Classes/PropertyClass.h>

class AvatarItemInfo : public AvatarItemInfoBase {
public:
    std::string getPartName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPartName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getSlotName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSlotName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    List<std::string> getFlags() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setFlags(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    List<SharedPointer<AvatarOption>> * getOptions() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AvatarOption>> *>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setOptions(List<SharedPointer<AvatarOption>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AvatarOption>> **>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    List<SharedPointer<AvatarTextureOption>> * getTextureOptions() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<AvatarTextureOption>> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setTextureOptions(List<SharedPointer<AvatarTextureOption>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<AvatarTextureOption>> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    SharedPointer<AvatarOption> * getDefaultOption() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<AvatarOption> *>(reinterpret_cast<uintptr_t>(this) + 0xC0);
    }

    void setDefaultOption(SharedPointer<AvatarOption> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<AvatarOption> **>(reinterpret_cast<uintptr_t>(this) + 0xC0) = val;
    }

    SharedPointer<AvatarTextureOption> * getDefaultTextureOption() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<AvatarTextureOption> *>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setDefaultTextureOption(SharedPointer<AvatarTextureOption> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<AvatarTextureOption> **>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

};