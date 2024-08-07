#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ControlTab::Page.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>
#include <Cyrus/Enums/ControlTab__TabAlignment.h>

class ControlTab : public Window {
public:
    bool getBAutomaticFormatting() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x298);
    }

    void setBAutomaticFormatting(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x298) = val;
    }

    Vector<ControlTab__Page> getTabPages() { // Property Generated Getter
      return *reinterpret_cast<Vector<ControlTab__Page>*>(reinterpret_cast<uintptr_t>(this) + 0x2D0);
    }

    void setTabPages(Vector<ControlTab__Page> val) { // Property Generated Setter
      *reinterpret_cast<Vector<ControlTab__Page>*>(reinterpret_cast<uintptr_t>(this) + 0x2D0) = val;
    }

    Size<int> getTabSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2A0);
    }

    void setTabSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2A0) = val;
    }

    Rect<int> getTabPageRect() { // Property Generated Getter
      return *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setTabPageRect(Rect<int> val) { // Property Generated Setter
      *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    Rect<int> getTabButtonsRect() { // Property Generated Getter
      return *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x278);
    }

    void setTabButtonsRect(Rect<int> val) { // Property Generated Setter
      *reinterpret_cast<Rect<int>*>(reinterpret_cast<uintptr_t>(this) + 0x278) = val;
    }

    ControlTab__TabAlignment getTabAlign() { // Property Generated Getter
      return *reinterpret_cast<ControlTab__TabAlignment*>(reinterpret_cast<uintptr_t>(this) + 0x29C);
    }

    void setTabAlign(ControlTab__TabAlignment val) { // Property Generated Setter
      *reinterpret_cast<ControlTab__TabAlignment*>(reinterpret_cast<uintptr_t>(this) + 0x29C) = val;
    }

    void AddTab(std::string a0, std::wstring a1, Window a2) { // Function Generated
        using FunctionPointerType = void (*)(ControlTab *self, std::string a0, std::wstring a1, Window a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x164F550);
        return inner(this, a0, a1, a2);
    }

    bool RemoveTab(std::string a0) { // Function Generated
        using FunctionPointerType = bool (*)(ControlTab *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x164F9F0);
        return inner(this, a0);
    }

    bool SelectTab(std::string a0) { // Function Generated
        using FunctionPointerType = bool (*)(ControlTab *self, std::string a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x164FC60);
        return inner(this, a0);
    }

    bool SelectOrdinalTab(int a0) { // Function Generated
        using FunctionPointerType = bool (*)(ControlTab *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x164FD30);
        return inner(this, a0);
    }

    bool DeselectTab() { // Function Generated
        using FunctionPointerType = bool (*)(ControlTab *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x164FD90);
        return inner(this);
    }

    std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > GetCurrentTabName() { // Function Generated
        using FunctionPointerType = std::basic_string<char,struct std::char_traits<char>,std::allocator<char> > (*)(ControlTab *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x164FE50);
        return inner(this);
    }

};