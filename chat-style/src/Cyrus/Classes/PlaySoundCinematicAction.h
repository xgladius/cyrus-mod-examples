#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PlaySoundCinematicAction__SoundType.h>

class PlaySoundCinematicAction : public CinematicAction {
public:
    List<std::string> getSound() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setSound(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    bool getUseClientLocation() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setUseClientLocation(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    PlaySoundCinematicAction__SoundType getSoundType() { // Property Generated Getter
      return *reinterpret_cast<PlaySoundCinematicAction__SoundType*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setSoundType(PlaySoundCinematicAction__SoundType val) { // Property Generated Setter
      *reinterpret_cast<PlaySoundCinematicAction__SoundType*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    bool getStreamSound() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x65);
    }

    void setStreamSound(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x65) = val;
    }

    bool getPlayMusic() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x66);
    }

    void setPlayMusic(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x66) = val;
    }

    float getFadeDuration() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setFadeDuration(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

};