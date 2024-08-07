#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Material.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class DeckListControl : public Window {
public:
    Size<int> getCardSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2A4);
    }

    void setCardSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x2A4) = val;
    }

    int getSpacing() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2AC);
    }

    void setSpacing(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2AC) = val;
    }

    int getVerticalSpacingAdjust() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2B0);
    }

    void setVerticalSpacingAdjust(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x2B0) = val;
    }

    SharedPointer<Material> * getSlotImage() { // Property Generated Getter
      return reinterpret_cast<SharedPointer<Material> *>(reinterpret_cast<uintptr_t>(this) + 0x268);
    }

    void setSlotImage(SharedPointer<Material> * val) { // Property Generated Setter
      *reinterpret_cast<SharedPointer<Material> **>(reinterpret_cast<uintptr_t>(this) + 0x268) = val;
    }

    int getTreasureFrame() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x278);
    }

    void setTreasureFrame(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x278) = val;
    }

    void SelectCard(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DeckListControl *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x77BE20);
        return inner(this, a0);
    }

    void RemoveAllSpells() { // Function Generated
        using FunctionPointerType = void (*)(DeckListControl *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x77A030);
        return inner(this);
    }

};