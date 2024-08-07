#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/PlayList__Progression.h>

class PlayList : public PropertyClass {
public:
    PlayList__Progression getProgression() { // Property Generated Getter
      return *reinterpret_cast<PlayList__Progression*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setProgression(PlayList__Progression val) { // Property Generated Setter
      *reinterpret_cast<PlayList__Progression*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int getCurrentTrack() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C);
    }

    void setCurrentTrack(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x4C) = val;
    }

    Vector<PlayListEntry*> * getTrackFilenameList() { // Property Generated Getter
      return reinterpret_cast<Vector<PlayListEntry*> *>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTrackFilenameList(Vector<PlayListEntry*> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<PlayListEntry*> **>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};