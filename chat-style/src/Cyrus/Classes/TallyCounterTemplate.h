#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class TallyCounterTemplate : public PropertyClass {
public:
    float getPercentChance() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPercentChance(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    std::string getDescriptor() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setDescriptor(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    std::string getDescriptor2() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setDescriptor2(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    int getCount() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90);
    }

    void setCount(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x90) = val;
    }

    ResultList* * getTallyResults() { // Property Generated Getter
      return reinterpret_cast<ResultList* *>(reinterpret_cast<uintptr_t>(this) + 0x98);
    }

    void setTallyResults(ResultList* * val) { // Property Generated Setter
      *reinterpret_cast<ResultList* **>(reinterpret_cast<uintptr_t>(this) + 0x98) = val;
    }

};