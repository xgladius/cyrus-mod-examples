#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/QuestFinderNPCData.h>
#include <Cyrus/Enums/NPCDataList__ZONE_TYPE.h>

class NPCDataList : public PropertyClass {
public:
    List<SharedPointer<QuestFinderNPCData>> * getNpcList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<QuestFinderNPCData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setNpcList(List<SharedPointer<QuestFinderNPCData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<QuestFinderNPCData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    NPCDataList__ZONE_TYPE getZoneType() { // Property Generated Getter
      return *reinterpret_cast<NPCDataList__ZONE_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setZoneType(NPCDataList__ZONE_TYPE val) { // Property Generated Setter
      *reinterpret_cast<NPCDataList__ZONE_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};