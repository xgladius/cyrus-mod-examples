#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BracketReportInfo.h>
#include <Cyrus/Classes/PropertyClass.h>

class BracketReport : public PropertyClass {
public:
    List<SharedPointer<BracketReportInfo>> * getReport() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<BracketReportInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setReport(List<SharedPointer<BracketReportInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<BracketReportInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};