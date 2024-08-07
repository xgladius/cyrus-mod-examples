#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CinematicAction.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Enums/TimerControlCinematicAction__kControlOperation.h>

class TimerControlCinematicAction : public CinematicAction {
public:
    bool getBSetVisible() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setBSetVisible(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    float getFTimeToSet() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54);
    }

    void setFTimeToSet(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x54) = val;
    }

    std::string getTimerStrKey() { // Property Generated Getter
      return *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setTimerStrKey(std::string val) { // Property Generated Setter
      *reinterpret_cast<std::string*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    TimerControlCinematicAction__kControlOperation getTimerOp() { // Property Generated Getter
      return *reinterpret_cast<TimerControlCinematicAction__kControlOperation*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setTimerOp(TimerControlCinematicAction__kControlOperation val) { // Property Generated Setter
      *reinterpret_cast<TimerControlCinematicAction__kControlOperation*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

};