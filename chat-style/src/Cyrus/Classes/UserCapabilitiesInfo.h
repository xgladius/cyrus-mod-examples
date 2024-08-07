#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class UserCapabilitiesInfo : public PropertyClass {
public:
    std::string getMacAddress() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMacAddress(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned short getSystemMemory() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSystemMemory(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    unsigned short getFreeDiskSpace() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x6A);
    }

    void setFreeDiskSpace(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x6A) = val;
    }

    unsigned short getProcessorArchitecture() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setProcessorArchitecture(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    char getNumProcessors() { // Property Generated Getter
      return *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x6E);
    }

    void setNumProcessors(char val) { // Property Generated Setter
      *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x6E) = val;
    }

    unsigned int getProcessorType() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setProcessorType(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    unsigned short getProcessorLevel() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x74);
    }

    void setProcessorLevel(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x74) = val;
    }

    unsigned short getProcessorRevision() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x76);
    }

    void setProcessorRevision(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x76) = val;
    }

    unsigned short getVendorID() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setVendorID(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    unsigned short getDeviceID() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x7A);
    }

    void setDeviceID(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x7A) = val;
    }

    unsigned int getSubSysID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x7C);
    }

    void setSubSysID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x7C) = val;
    }

    unsigned short getTextureMemory() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setTextureMemory(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    bool getHwTransformAndLight() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x82);
    }

    void setHwTransformAndLight(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x82) = val;
    }

    bool getDynamicTextures() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x83);
    }

    void setDynamicTextures(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x83) = val;
    }

    bool getRenderToTexture_A8R8G8B8() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x84);
    }

    void setRenderToTexture_A8R8G8B8(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x84) = val;
    }

    bool getRenderToTexture_A8B8G8R8() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x85);
    }

    void setRenderToTexture_A8B8G8R8(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x85) = val;
    }

    bool getTextureFromSystemMemory() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x86);
    }

    void setTextureFromSystemMemory(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x86) = val;
    }

    bool getTextureFromVideoMemory() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x87);
    }

    void setTextureFromVideoMemory(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x87) = val;
    }

    char getMaxTextureBlendStages() { // Property Generated Getter
      return *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setMaxTextureBlendStages(char val) { // Property Generated Setter
      *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

    char getMaxActiveLights() { // Property Generated Getter
      return *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x89);
    }

    void setMaxActiveLights(char val) { // Property Generated Setter
      *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x89) = val;
    }

    char getMaxSimultaneousTextures() { // Property Generated Getter
      return *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x8A);
    }

    void setMaxSimultaneousTextures(char val) { // Property Generated Setter
      *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(this) + 0x8A) = val;
    }

    unsigned short getMaxTextureWidth() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setMaxTextureWidth(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    unsigned short getMaxTextureHeight() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x8E);
    }

    void setMaxTextureHeight(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x8E) = val;
    }

    unsigned int getVertexShaderVersion() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setVertexShaderVersion(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    unsigned int getPixelShaderVersion() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x94);
    }

    void setPixelShaderVersion(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x94) = val;
    }

    int getNumMonitors() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setNumMonitors(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    int getMouseButtons() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x9C);
    }

    void setMouseButtons(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x9C) = val;
    }

    unsigned short getScreenResX() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xA0);
    }

    void setScreenResX(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xA0) = val;
    }

    unsigned short getScreenResY() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xA2);
    }

    void setScreenResY(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0xA2) = val;
    }

    unsigned int getPackedOSVersion() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA4);
    }

    void setPackedOSVersion(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA4) = val;
    }

    unsigned int getPackedOSServicePack() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA8);
    }

    void setPackedOSServicePack(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0xA8) = val;
    }

    bool getHostedOS() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAC);
    }

    void setHostedOS(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAC) = val;
    }

    bool getFlashPluginInstalled() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAD);
    }

    void setFlashPluginInstalled(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAD) = val;
    }

    bool getIsAdministrator() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAE);
    }

    void setIsAdministrator(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAE) = val;
    }

    bool getTabletPC() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAF);
    }

    void setTabletPC(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xAF) = val;
    }

    int getTouchCapabilites() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB0);
    }

    void setTouchCapabilites(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xB0) = val;
    }

    std::string getHwID() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setHwID(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    Vector<std::string> getHwSerials() { // Property Generated Getter
      return *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setHwSerials(Vector<std::string> val) { // Property Generated Setter
      *reinterpret_cast<Vector<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

};