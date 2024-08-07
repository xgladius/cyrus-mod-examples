#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ResultList.h>
#include <Cyrus/Enums/ZTDisplayMode.h>
#include <Cyrus/Enums/ZTStorage.h>

class ZoneTokenBase : public PropertyClass {
public:
    std::string getDebugName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setDebugName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<std::string> getAdjectiveList() { // Property Generated Getter
      return *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setAdjectiveList(List<std::string> val) { // Property Generated Setter
      *reinterpret_cast<List<std::string>*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getIcon() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setIcon(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getIconBW() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setIconBW(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getDescription() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setDescription(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    ZTDisplayMode getDisplayMode() { // Property Generated Getter
      return *reinterpret_cast<ZTDisplayMode*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setDisplayMode(ZTDisplayMode val) { // Property Generated Setter
      *reinterpret_cast<ZTDisplayMode*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    ZTStorage getStorage() { // Property Generated Getter
      return *reinterpret_cast<ZTStorage*>(reinterpret_cast<uintptr_t>(this) + 0xDC);
    }

    void setStorage(ZTStorage val) { // Property Generated Setter
      *reinterpret_cast<ZTStorage*>(reinterpret_cast<uintptr_t>(this) + 0xDC) = val;
    }

    SharedPointer<ResultList> * getOnEnable() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0xE0);
    }

    void setOnEnable(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0xE0) = val;
    }

    SharedPointer<ResultList> * getOnDiscover() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0xF0);
    }

    void setOnDiscover(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0xF0) = val;
    }

    SharedPointer<ResultList> * getOnDisable() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x100);
    }

    void setOnDisable(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x100) = val;
    }

    gid getSourceID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x110);
    }

    void setSourceID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x110) = val;
    }

    bool getInZone() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setInZone(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    bool getEnabled() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x119);
    }

    void setEnabled(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x119) = val;
    }

    bool getDiscovered() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x11A);
    }

    void setDiscovered(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x11A) = val;
    }

};