#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PremiumContentOption.h>
#include <Cyrus/Classes/PropertyClass.h>

class PremiumContentOptionList : public PropertyClass {
public:
    List<PremiumContentOption> getOptionList() { // Property Generated Getter
      return *reinterpret_cast<List<PremiumContentOption>*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setOptionList(List<PremiumContentOption> val) { // Property Generated Setter
      *reinterpret_cast<List<PremiumContentOption>*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};