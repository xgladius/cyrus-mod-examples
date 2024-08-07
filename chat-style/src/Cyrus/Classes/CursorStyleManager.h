#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CursorStyle.h>
#include <Cyrus/Classes/PropertyClass.h>

class CursorStyleManager : public PropertyClass {
public:
    CursorStyle getDefaultStyle() { // Property Generated Getter
      return *reinterpret_cast<CursorStyle*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setDefaultStyle(CursorStyle val) { // Property Generated Setter
      *reinterpret_cast<CursorStyle*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Vector<CursorStyle> getCursorStyles() { // Property Generated Getter
      return *reinterpret_cast<Vector<CursorStyle>*>(reinterpret_cast<uintptr_t>(this) + 0x198);
    }

    void setCursorStyles(Vector<CursorStyle> val) { // Property Generated Setter
      *reinterpret_cast<Vector<CursorStyle>*>(reinterpret_cast<uintptr_t>(this) + 0x198) = val;
    }

};