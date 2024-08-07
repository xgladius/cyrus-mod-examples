#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlTree : public Window {
public:
    int getNIndent() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setNIndent(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    ControlTree__Item* * getPRoot() { // Property Generated Getter
      return reinterpret_cast<ControlTree__Item* *>(reinterpret_cast<uintptr_t>(this) + 0x250);
    }

    void setPRoot(ControlTree__Item* * val) { // Property Generated Setter
      *reinterpret_cast<ControlTree__Item* **>(reinterpret_cast<uintptr_t>(this) + 0x250) = val;
    }

    ControlTree__Item* * getPCursorOver() { // Property Generated Getter
      return reinterpret_cast<ControlTree__Item* *>(reinterpret_cast<uintptr_t>(this) + 0x258);
    }

    void setPCursorOver(ControlTree__Item* * val) { // Property Generated Setter
      *reinterpret_cast<ControlTree__Item* **>(reinterpret_cast<uintptr_t>(this) + 0x258) = val;
    }

    ControlTree__Item* * getPSelected() { // Property Generated Getter
      return reinterpret_cast<ControlTree__Item* *>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setPSelected(ControlTree__Item* * val) { // Property Generated Setter
      *reinterpret_cast<ControlTree__Item* **>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    bool getBCursorInWindow() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setBCursorInWindow(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    void Expand(struct ControlTree::Item a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTree *self, struct ControlTree::Item a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x166EF10);
        return inner(this, a0);
    }

    void Collapse(struct ControlTree::Item a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTree *self, struct ControlTree::Item a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x166EF20);
        return inner(this, a0);
    }

    void Sort(struct ControlTree::Item a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTree *self, struct ControlTree::Item a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x166EF30);
        return inner(this, a0);
    }

    void SetIndent(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTree *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x166ECF0);
        return inner(this, a0);
    }

    struct ControlTree::Item* InsertItem(std::wstring a0, Color a1, unsigned int a2, struct ControlTree::Item a3) { // Function Generated
        using FunctionPointerType = struct ControlTree::Item* (*)(ControlTree *self, std::wstring a0, Color a1, unsigned int a2, struct ControlTree::Item a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x166ED00);
        return inner(this, a0, a1, a2, a3);
    }

    bool DeleteItem(struct ControlTree::Item a0) { // Function Generated
        using FunctionPointerType = bool (*)(ControlTree *self, struct ControlTree::Item a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x166EDE0);
        return inner(this, a0);
    }

    void Reset() { // Function Generated
        using FunctionPointerType = void (*)(ControlTree *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x166EEA0);
        return inner(this);
    }

    int ItemDepth(struct ControlTree::Item a0) { // Function Generated
        using FunctionPointerType = int (*)(ControlTree *self, struct ControlTree::Item a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16720B0);
        return inner(this, a0);
    }

};