#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/AreaBehaviorTemplate.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PlayList__Progression.h>

class SoundBehaviorTemplate : public AreaBehaviorTemplate {
public:
    Vector<std::string> getTrackFilenameList() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setTrackFilenameList(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    Vector<PlayListEntry*> * getPlayList() { // Property Generated Getter
      return reinterpret_cast<Vector<PlayListEntry*> *>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setPlayList(Vector<PlayListEntry*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<PlayListEntry*> **>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    int getPriority() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setPriority(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    float getVolume() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setVolume(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    int getLoopCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xCC);
    }

    void setLoopCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xCC) = val;
    }

    PlayList__Progression getProgression() { // Property Generated Getter
      return *reinterpret_cast<PlayList__Progression*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setProgression(PlayList__Progression val) { // Property Generated Setter
      *reinterpret_cast<PlayList__Progression*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    float getProgressMin() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xD4);
    }

    void setProgressMin(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xD4) = val;
    }

    float getProgressMax() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setProgressMax(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    unsigned int getAudioFilterSet() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setAudioFilterSet(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    std::string getAnimationNameFilter() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setAnimationNameFilter(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    std::string getFunctionallabel() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setFunctionallabel(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

};