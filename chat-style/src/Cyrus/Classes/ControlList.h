#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlText.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlList : public ControlText {
public:
    Color getTextColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x2B8);
    }

    void setTextColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x2B8) = val;
    }

    Color getSelectColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x2BC);
    }

    void setSelectColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x2BC) = val;
    }

    Color getHighlightColor() { // Property Generated Getter
      return *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x2C0);
    }

    void setHighlightColor(Color val) { // Property Generated Setter
      *reinterpret_cast<Color*>(reinterpret_cast<uintptr_t>(this) + 0x2C0) = val;
    }

    bool getBSortEnable() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x310);
    }

    void setBSortEnable(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x310) = val;
    }

    int getNSortByColumn() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x314);
    }

    void setNSortByColumn(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x314) = val;
    }

    bool getBSortAscending() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x318);
    }

    void setBSortAscending(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x318) = val;
    }

    int getNHighlighted() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x31C);
    }

    void setNHighlighted(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x31C) = val;
    }

    int getNSelected() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x320);
    }

    void setNSelected(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x320) = val;
    }

    bool getBListInvalid() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x324);
    }

    void setBListInvalid(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x324) = val;
    }

    bool getBSortInvalid() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x325);
    }

    void setBSortInvalid(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x325) = val;
    }

    SharedPointer<Window> * getPScrollWin() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Window> *>(reinterpret_cast<uintptr_t>(this) + 0x328);
    }

    void setPScrollWin(SharedPointer<Window> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Window> **>(reinterpret_cast<uintptr_t>(this) + 0x328) = val;
    }

    int getItemHeight() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x338);
    }

    void setItemHeight(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x338) = val;
    }

    ControlList__ListItemState* * getItemNormalState() { // Property Generated Getter
      return reinterpret_cast<ControlList__ListItemState* *>(reinterpret_cast<uintptr_t>(this) + 0x340);
    }

    void setItemNormalState(ControlList__ListItemState* * val) { // Property Generated Setter
      *reinterpret_cast<ControlList__ListItemState* **>(reinterpret_cast<uintptr_t>(this) + 0x340) = val;
    }

    ControlList__ListItemState* * getItemHighlightedState() { // Property Generated Getter
      return reinterpret_cast<ControlList__ListItemState* *>(reinterpret_cast<uintptr_t>(this) + 0x348);
    }

    void setItemHighlightedState(ControlList__ListItemState* * val) { // Property Generated Setter
      *reinterpret_cast<ControlList__ListItemState* **>(reinterpret_cast<uintptr_t>(this) + 0x348) = val;
    }

    ControlList__ListItemState* * getItemSelectedState() { // Property Generated Getter
      return reinterpret_cast<ControlList__ListItemState* *>(reinterpret_cast<uintptr_t>(this) + 0x350);
    }

    void setItemSelectedState(ControlList__ListItemState* * val) { // Property Generated Setter
      *reinterpret_cast<ControlList__ListItemState* **>(reinterpret_cast<uintptr_t>(this) + 0x350) = val;
    }

    ControlList__ListItemState* * getItemDisabledState() { // Property Generated Getter
      return reinterpret_cast<ControlList__ListItemState* *>(reinterpret_cast<uintptr_t>(this) + 0x358);
    }

    void setItemDisabledState(ControlList__ListItemState* * val) { // Property Generated Setter
      *reinterpret_cast<ControlList__ListItemState* **>(reinterpret_cast<uintptr_t>(this) + 0x358) = val;
    }

    int ColumnCount() { // Function Generated
        using FunctionPointerType = int (*)(ControlList *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16158E0);
        return inner(this);
    }

    struct ControlList::Column* ColumnByIndex(int a0) { // Function Generated
        using FunctionPointerType = struct ControlList::Column* (*)(ControlList *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16158D0);
        return inner(this, a0);
    }

    int AddColumn(int a0, Color a1, int a2, int a3) { // Function Generated
        using FunctionPointerType = int (*)(ControlList *self, int a0, Color a1, int a2, int a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160CF50);
        return inner(this, a0, a1, a2, a3);
    }

    int AddExistingColumn(struct ControlList::Column a0) { // Function Generated
        using FunctionPointerType = int (*)(ControlList *self, struct ControlList::Column a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160D000);
        return inner(this, a0);
    }

    void SetColumn(int a0, struct ControlList::Column a1) { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self, int a0, struct ControlList::Column a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160D120);
        return inner(this, a0, a1);
    }

    void RemoveColumn(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160D210);
        return inner(this, a0);
    }

    int ItemCount() { // Function Generated
        using FunctionPointerType = int (*)(ControlList *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x4BE530);
        return inner(this);
    }

    std::wstring ItemByIndex(int a0, int a1) { // Function Generated
        using FunctionPointerType = std::wstring (*)(ControlList *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x1617660);
        return inner(this, a0, a1);
    }

    int AddItem(std::wstring a0, int a1) { // Function Generated
        using FunctionPointerType = int (*)(ControlList *self, std::wstring a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160D3E0);
        return inner(this, a0, a1);
    }

    int AddSeperatedItems(std::wstring a0, std::wstring a1, int a2) { // Function Generated
        using FunctionPointerType = int (*)(ControlList *self, std::wstring a0, std::wstring a1, int a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160D9A0);
        return inner(this, a0, a1, a2);
    }

    int SetItem(int a0, int a1, std::wstring a2) { // Function Generated
        using FunctionPointerType = int (*)(ControlList *self, int a0, int a1, std::wstring a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160DAD0);
        return inner(this, a0, a1, a2);
    }

    void RemoveItem(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160DBF0);
        return inner(this, a0);
    }

    void SwapItems(int a0, int a1) { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160DD60);
        return inner(this, a0, a1);
    }

    void MoveItem(int a0, int a1) { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160DF70);
        return inner(this, a0, a1);
    }

    void RemoveAllItems() { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160E150);
        return inner(this);
    }

    void RemoveAll() { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160E460);
        return inner(this);
    }

    int Selected() { // Function Generated
        using FunctionPointerType = int (*)(ControlList *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16176A0);
        return inner(this);
    }

    int SortedItem(int a0) { // Function Generated
        using FunctionPointerType = int (*)(ControlList *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16176B0);
        return inner(this, a0);
    }

    void SetSelected(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160E400);
        return inner(this, a0);
    }

    void SetSortEnable(bool a0, bool a1) { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self, bool a0, bool a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160E230);
        return inner(this, a0, a1);
    }

    void SetSort(int a0, bool a1) { // Function Generated
        using FunctionPointerType = void (*)(ControlList *self, int a0, bool a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x160E250);
        return inner(this, a0, a1);
    }

};