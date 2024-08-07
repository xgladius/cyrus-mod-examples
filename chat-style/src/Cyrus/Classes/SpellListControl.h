#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/GraphicalSpell.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class SpellListControl : public Window {
public:
    Size<int> getCardSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2C4);
    }

    void setCardSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2C4) = val;
    }

    Point<int> getSpacing() { // Property Generated Getter
      return *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2CC);
    }

    void setSpacing(Point<int> val) { // Property Generated Setter
      *reinterpret_cast<Point<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2CC) = val;
    }

    List<Rect<int>> getHoles() { // Property Generated Getter
      return *reinterpret_cast<List<Rect<int>>*>(reinterpret_cast<uintptr_t>(this) + 0x2B0);
    }

    void setHoles(List<Rect<int>> val) { // Property Generated Setter
      *reinterpret_cast<List<Rect<int>>*>(reinterpret_cast<uintptr_t>(this) + 0x2B0) = val;
    }

    int GetSpellCount() { // Function Generated
        using FunctionPointerType = int (*)(SpellListControl *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBCFF70);
        return inner(this);
    }

    void SelectSpell(int a0) { // Function Generated
        using FunctionPointerType = void (*)(SpellListControl *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBCFFC0);
        return inner(this, a0);
    }

    SharedPointer<GraphicalSpell> GetSpellByIndex(int a0) { // Function Generated
        using FunctionPointerType = SharedPointer<GraphicalSpell> (*)(SpellListControl *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBCFF90);
        return inner(this, a0);
    }

    Rect<int> GetCardPosition(int a0) { // Function Generated
        using FunctionPointerType = Rect<int> (*)(SpellListControl *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBD4470);
        return inner(this, a0);
    }

    void SetSpellEnabled(int a0, bool a1) { // Function Generated
        using FunctionPointerType = void (*)(SpellListControl *self, int a0, bool a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xBD0430);
        return inner(this, a0, a1);
    }

};