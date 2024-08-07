#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/BehaviorTemplate.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/TimerType.h>

class TimedItemBehaviorTemplate : public BehaviorTemplate {
public:
    std::string getExpireTime() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80);
    }

    void setExpireTime(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x80) = val;
    }

    TimerType getTimerType() { // Property Generated Getter
      return *reinterpret_cast<TimerType*>(reinterpret_cast<uintptr_t>(this) + 0x78);
    }

    void setTimerType(TimerType val) { // Property Generated Setter
      *reinterpret_cast<TimerType*>(reinterpret_cast<uintptr_t>(this) + 0x78) = val;
    }

};