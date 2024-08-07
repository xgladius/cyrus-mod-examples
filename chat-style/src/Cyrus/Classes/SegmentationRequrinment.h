#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class SegmentationRequrinment : public PropertyClass {
public:
    std::string getSReqName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSReqName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    SegmentationRequrinment__OPERATOR_TYPE getReqOperatorType() { // Property Generated Getter
      return *reinterpret_cast<SegmentationRequrinment__OPERATOR_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setReqOperatorType(SegmentationRequrinment__OPERATOR_TYPE val) { // Property Generated Setter
      *reinterpret_cast<SegmentationRequrinment__OPERATOR_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    std::string getSReqValue() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setSReqValue(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

};