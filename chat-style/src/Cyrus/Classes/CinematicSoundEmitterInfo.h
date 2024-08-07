#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/CinematicSoundEmitterInfo__AudioCategory.h>
#include <Cyrus/Enums/CinematicSoundEmitterInfo__Progression.h>

class CinematicSoundEmitterInfo : public PropertyClass {
public:
    float getVolume() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setVolume(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getLoopCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setLoopCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    int getPriority() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setPriority(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    CinematicSoundEmitterInfo__Progression getProgression() { // Property Generated Getter
      return *reinterpret_cast<CinematicSoundEmitterInfo__Progression*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setProgression(CinematicSoundEmitterInfo__Progression val) { // Property Generated Setter
      *reinterpret_cast<CinematicSoundEmitterInfo__Progression*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    float getProgressMin() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setProgressMin(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    float getProgressMax() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setProgressMax(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    Vector<std::string> getTrackFilenameList() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setTrackFilenameList(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    CinematicSoundEmitterInfo__AudioCategory getCategory() { // Property Generated Getter
      return *reinterpret_cast<CinematicSoundEmitterInfo__AudioCategory*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setCategory(CinematicSoundEmitterInfo__AudioCategory val) { // Property Generated Setter
      *reinterpret_cast<CinematicSoundEmitterInfo__AudioCategory*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    bool getUseClientLocation() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setUseClientLocation(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    float getFadeInDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setFadeInDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    float getFadeOutDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setFadeOutDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    float getWetReverb() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setWetReverb(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    float getDryReverb() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setDryReverb(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    bool getIsStreamed() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setIsStreamed(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

};