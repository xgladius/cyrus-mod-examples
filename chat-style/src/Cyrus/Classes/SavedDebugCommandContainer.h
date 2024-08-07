#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/SavedDebugCommand.h>

class SavedDebugCommandContainer : public PropertyClass {
public:
    List<SharedPointer<SavedDebugCommand>> * getSavedDebugCommandList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<SavedDebugCommand>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setSavedDebugCommandList(List<SharedPointer<SavedDebugCommand>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<SavedDebugCommand>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    bool getSaveToHistory() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setSaveToHistory(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

};