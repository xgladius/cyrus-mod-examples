#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SigilZoneInfo.h>

class HousingSigilBehaviorTemplate : public BehaviorTemplate {
public:
    List<SharedPointer<SigilZoneInfo>> * getSigilZoneInfoList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SigilZoneInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setSigilZoneInfoList(List<SharedPointer<SigilZoneInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SigilZoneInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    unsigned int getUsedDisposableDungeonTemplateID() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setUsedDisposableDungeonTemplateID(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};