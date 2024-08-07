#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PolymorphImprovementRatingInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class PolymorphImprovementRatingInfoList : public PropertyClass {
public:
    List<SharedPointer<PolymorphImprovementRatingInfo>> * getList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<PolymorphImprovementRatingInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setList(List<SharedPointer<PolymorphImprovementRatingInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<PolymorphImprovementRatingInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};