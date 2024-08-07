#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/MusicFileInfo.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ZoneData.h>

class WizZoneData : public ZoneData {
public:
    std::string getCombatMusic() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240);
    }

    void setCombatMusic(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x240) = val;
    }

    std::string getGuiFile() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setGuiFile(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    float getBloomBrightnessThreshold() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x280);
    }

    void setBloomBrightnessThreshold(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x280) = val;
    }

    float getBloomScale() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x284);
    }

    void setBloomScale(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x284) = val;
    }

    int getBloomCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x288);
    }

    void setBloomCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x288) = val;
    }

    bool getNoMounts() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x28C);
    }

    void setNoMounts(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x28C) = val;
    }

    bool getA2wFog() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x28D);
    }

    void setA2wFog(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x28D) = val;
    }

    bool getSwimZone() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x28E);
    }

    void setSwimZone(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x28E) = val;
    }

    List<MusicFileInfo> getAltMusicFile() { // Property Generated Getter
      return *reinterpret_cast<List<MusicFileInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x290);
    }

    void setAltMusicFile(List<MusicFileInfo> val) { // Property Generated Setter
      *reinterpret_cast<List<MusicFileInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x290) = val;
    }

};