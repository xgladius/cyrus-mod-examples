#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/InteractiveMusicNote.h>
#include <Cyrus/Classes/PropertyClass.h>

class InteractiveMusicLoop : public PropertyClass {
public:
    int getLoopNumber() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setLoopNumber(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getComposerPackedName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setComposerPackedName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    gid getComposerGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setComposerGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    float getMetronomeTempo() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setMetronomeTempo(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    float getFirstNodeDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setFirstNodeDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    List<SharedPointer<InteractiveMusicNote>> * getMusicNoteList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<InteractiveMusicNote>> *>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setMusicNoteList(List<SharedPointer<InteractiveMusicNote>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<InteractiveMusicNote>> **>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    std::string getCompressedmusicNoteData() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setCompressedmusicNoteData(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

};