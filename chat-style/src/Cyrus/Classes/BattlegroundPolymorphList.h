#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/RatingBadgeInfo.h>

class BattlegroundPolymorphList : public PropertyClass {
public:
    Vector<unsigned int> getPolymorphList() { // Property Generated Getter
      return *reinterpret_cast<Vector<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPolymorphList(Vector<unsigned int> val) { // Property Generated Setter
      *reinterpret_cast<Vector<unsigned int>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getPolymorphCategory() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setPolymorphCategory(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

    std::string getPolymorphRole() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8);
    }

    void setPolymorphRole(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0xB8) = val;
    }

    Vector<SharedPointer<RatingBadgeInfo>> * getRatingBadgeInfo() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<RatingBadgeInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setRatingBadgeInfo(Vector<SharedPointer<RatingBadgeInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<RatingBadgeInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

};