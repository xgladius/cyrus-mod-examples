#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/WizardStatTable__STAT_TYPE.h>

class WizardStatTable : public PropertyClass {
public:
    std::string getTableName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setTableName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getSchoolName() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setSchoolName(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    bool getModifyAll() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8C);
    }

    void setModifyAll(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x8C) = val;
    }

    WizardStatTable__STAT_TYPE getStatType() { // Property Generated Getter
      return *reinterpret_cast<WizardStatTable__STAT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setStatType(WizardStatTable__STAT_TYPE val) { // Property Generated Setter
      *reinterpret_cast<WizardStatTable__STAT_TYPE*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    Vector<float> getStatVector() { // Property Generated Getter
      return *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setStatVector(Vector<float> val) { // Property Generated Setter
      *reinterpret_cast<Vector<float>*>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

};