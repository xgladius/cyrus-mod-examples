#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/ResultList.h>
#include <Cyrus/Classes/ZoneTokenBase.h>
#include <Cyrus/Classes/ZoneTokenTimeTrigger.h>

class ZoneTokenTimer : public ZoneTokenBase {
public:
    std::string getDuration() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120);
    }

    void setDuration(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x120) = val;
    }

    SharedPointer<ResultList> * getOnExpire() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<ResultList> *>(reinterpret_cast<uintptr_t>(this) + 0x140);
    }

    void setOnExpire(SharedPointer<ResultList> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<ResultList> **>(reinterpret_cast<uintptr_t>(this) + 0x140) = val;
    }

    List<SharedPointer<ZoneTokenTimeTrigger>> * getTimeTriggers() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<ZoneTokenTimeTrigger>> *>(reinterpret_cast<uintptr_t>(this) + 0x150);
    }

    void setTimeTriggers(List<SharedPointer<ZoneTokenTimeTrigger>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<ZoneTokenTimeTrigger>> **>(reinterpret_cast<uintptr_t>(this) + 0x150) = val;
    }

    unsigned int getExpireTime() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x164);
    }

    void setExpireTime(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x164) = val;
    }

};