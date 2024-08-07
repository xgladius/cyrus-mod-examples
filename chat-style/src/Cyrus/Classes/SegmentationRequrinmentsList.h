#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SegmentationRequrinment.h>

class SegmentationRequrinmentsList : public PropertyClass {
public:
    Vector<SegmentationRequrinment> getSegRequirnments() { // Property Generated Getter
      return *reinterpret_cast<Vector<SegmentationRequrinment>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSegRequirnments(Vector<SegmentationRequrinment> val) { // Property Generated Setter
      *reinterpret_cast<Vector<SegmentationRequrinment>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    bool getBApplyDiscount() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setBApplyDiscount(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned int getNDiscountPrice() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setNDiscountPrice(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    unsigned int getNDiscountPercent() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setNDiscountPercent(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getBShowStrikethruPrice() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setBShowStrikethruPrice(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

};