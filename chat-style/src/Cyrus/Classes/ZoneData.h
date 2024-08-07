#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CoreObjectInfo.h>
#include <Cyrus/Classes/LocationTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SkyboxInfo.h>
#include <Cyrus/Classes/SpawnPointTemplate.h>
#include <Cyrus/Classes/TeleporterTemplate.h>
#include <Cyrus/Enums/ZoneData__Type.h>

class ZoneData : public PropertyClass {
public:
    ZoneData__Type getNType() { // Property Generated Getter
      return *reinterpret_cast<ZoneData__Type*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNType(ZoneData__Type val) { // Property Generated Setter
      *reinterpret_cast<ZoneData__Type*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getZoneName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setZoneName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    std::string getZoneDisplayName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setZoneDisplayName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    std::string getSkyDomeName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setSkyDomeName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    Vector<std::string> getSkyLayerName() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setSkyLayerName(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    std::string getCollisionFileName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setCollisionFileName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    std::string getGamebryoSceneFileName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setGamebryoSceneFileName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    std::string getMusicFileName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setMusicFileName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    List<SpawnPointTemplate> getSpawnList() { // Property Generated Getter
      return *reinterpret_cast<List<SpawnPointTemplate>*>(reinterpret_cast<uintptr_t>(this) + 0x130);
    }

    void setSpawnList(List<SpawnPointTemplate> val) { // Property Generated Setter
      *reinterpret_cast<List<SpawnPointTemplate>*>(reinterpret_cast<uintptr_t>(this) + 0x130) = val;
    }

    List<TeleporterTemplate> getTeleportList() { // Property Generated Getter
      return *reinterpret_cast<List<TeleporterTemplate>*>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setTeleportList(List<TeleporterTemplate> val) { // Property Generated Setter
      *reinterpret_cast<List<TeleporterTemplate>*>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    List<LocationTemplate> getLocationList() { // Property Generated Getter
      return *reinterpret_cast<List<LocationTemplate>*>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setLocationList(List<LocationTemplate> val) { // Property Generated Setter
      *reinterpret_cast<List<LocationTemplate>*>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    List<SharedPointer<CoreObjectInfo>> * getObjectList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CoreObjectInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x160);
    }

    void setObjectList(List<SharedPointer<CoreObjectInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CoreObjectInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x160) = val;
    }

    List<std::string> getAllEffects() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x170);
    }

    void setAllEffects(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x170) = val;
    }

    int getHealingPerMinute() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1E0);
    }

    void setHealingPerMinute(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1E0) = val;
    }

    int getPlayerPopThresh() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1E4);
    }

    void setPlayerPopThresh(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1E4) = val;
    }

    int getNSoftLimit() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1E8);
    }

    void setNSoftLimit(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1E8) = val;
    }

    int getNHardLimit() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1EC);
    }

    void setNHardLimit(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x1EC) = val;
    }

    float getFarClip() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F0);
    }

    void setFarClip(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F0) = val;
    }

    float getNearClipOverride() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F4);
    }

    void setNearClipOverride(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F4) = val;
    }

    float getDefaultBackgroundColorRed() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F8);
    }

    void setDefaultBackgroundColorRed(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1F8) = val;
    }

    float getDefaultBackgroundColorGreen() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1FC);
    }

    void setDefaultBackgroundColorGreen(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x1FC) = val;
    }

    float getDefaultBackgroundColorBlue() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200);
    }

    void setDefaultBackgroundColorBlue(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x200) = val;
    }

    int getFogColorRed() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x204);
    }

    void setFogColorRed(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x204) = val;
    }

    int getFogColorGreen() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x208);
    }

    void setFogColorGreen(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x208) = val;
    }

    int getFogColorBlue() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x20C);
    }

    void setFogColorBlue(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x20C) = val;
    }

    float getFogDensity() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setFogDensity(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    float getFogStartDensity() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x214);
    }

    void setFogStartDensity(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x214) = val;
    }

    bool getFogEnabled() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x218);
    }

    void setFogEnabled(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x218) = val;
    }

    unsigned int getNObjectID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x21C);
    }

    void setNObjectID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x21C) = val;
    }

    bool getBDisableTransitionAutoHide() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x220);
    }

    void setBDisableTransitionAutoHide(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x220) = val;
    }

    List<std::string> getEncounterNames() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x180);
    }

    void setEncounterNames(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x180) = val;
    }

    std::string getEncounterGroup() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190);
    }

    void setEncounterGroup(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x190) = val;
    }

    List<std::string> getZoneAdjectives() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1B0);
    }

    void setZoneAdjectives(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1B0) = val;
    }

    List<std::string> getZonePermissions() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1D0);
    }

    void setZonePermissions(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x1D0) = val;
    }

    bool getCanPlaceTeleportMarker() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x221);
    }

    void setCanPlaceTeleportMarker(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x221) = val;
    }

    unsigned int getFilterSetUID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x224);
    }

    void setFilterSetUID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x224) = val;
    }

    List<SkyboxInfo> getConditionalSkyboxes() { // Property Generated Getter
      return *reinterpret_cast<List<SkyboxInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x228);
    }

    void setConditionalSkyboxes(List<SkyboxInfo> val) { // Property Generated Setter
      *reinterpret_cast<List<SkyboxInfo>*>(reinterpret_cast<uintptr_t>(this) + 0x228) = val;
    }

    float getMusicDelay() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x238);
    }

    void setMusicDelay(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x238) = val;
    }

};