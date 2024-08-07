#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CastleMagicItem.h>
#include <Cyrus/Classes/CastleMagicTimer.h>
#include <Cyrus/Classes/PropertyClass.h>

class CastleMagicManager : public PropertyClass {
public:
    List<SharedPointer<CastleMagicItem>> * getCastleMagicItemList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CastleMagicItem>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setCastleMagicItemList(List<SharedPointer<CastleMagicItem>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CastleMagicItem>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    List<SharedPointer<CastleMagicTimer>> * getCastleMagicTimerList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<CastleMagicTimer>> *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setCastleMagicTimerList(List<SharedPointer<CastleMagicTimer>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<CastleMagicTimer>> **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

    std::string getRandomNumberSetBuffer() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168);
    }

    void setRandomNumberSetBuffer(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x168) = val;
    }

    List<gid> getRandomNumberSetIndexList() { // Property Generated Getter
      return *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1A0);
    }

    void setRandomNumberSetIndexList(List<gid> val) { // Property Generated Setter
      *reinterpret_cast<List<gid>*>(reinterpret_cast<uintptr_t>(this) + 0x1A0) = val;
    }

    float getDefaultCameraTime() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210);
    }

    void setDefaultCameraTime(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x210) = val;
    }

    bool getSetPlayAsPet() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x215);
    }

    void setSetPlayAsPet(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x215) = val;
    }

};