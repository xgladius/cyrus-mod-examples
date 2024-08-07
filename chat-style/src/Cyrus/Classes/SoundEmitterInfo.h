#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObjectInfo.h>
#include <Cyrus/Classes/CoreObjectInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SoundInfo.h>
#include <Cyrus/Enums/PlayList__Progression.h>

class SoundEmitterInfo : public SoundInfo {
public:
    float getVolume() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setVolume(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    int getLoopCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x124);
    }

    void setLoopCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x124) = val;
    }

    Vector<std::string> getTrackFilenameList() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setTrackFilenameList(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    Vector<PlayListEntry*> * getPlayList() { // Property Generated Getter
      return reinterpret_cast<Vector<PlayListEntry*> *>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setPlayList(Vector<PlayListEntry*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<PlayListEntry*> **>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    int getPriority() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setPriority(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    PlayList__Progression getProgression() { // Property Generated Getter
      return *reinterpret_cast<PlayList__Progression*>(reinterpret_cast<uintptr_t>(this) + 0x12C);
    }

    void setProgression(PlayList__Progression val) { // Property Generated Setter
      *reinterpret_cast<PlayList__Progression*>(reinterpret_cast<uintptr_t>(this) + 0x12C) = val;
    }

    float getProgressMin() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setProgressMin(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    float getProgressMax() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x134);
    }

    void setProgressMax(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x134) = val;
    }

    unsigned int getAudioFilterSet() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setAudioFilterSet(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    std::string getClientTag() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setClientTag(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

};