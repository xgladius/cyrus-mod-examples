#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/TextTagPair.h>

class CinematicTemplateAnimationData : public PropertyClass {
public:
    std::string getAnimationPath() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setAnimationPath(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getSound() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSound(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    float getLength() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setLength(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    List<SharedPointer<TextTagPair>> * getTextTags() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<TextTagPair>> *>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setTextTags(List<SharedPointer<TextTagPair>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<TextTagPair>> **>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};