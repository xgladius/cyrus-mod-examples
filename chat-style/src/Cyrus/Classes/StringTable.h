#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/CharMap.h>
#include <Cyrus/Classes/PropertyClass.h>

class StringTable : public PropertyClass {
public:
    wchar_t getThousandSeparator() { // Property Generated Getter
      return *reinterpret_cast<wchar_t*>(reinterpret_cast<uintptr_t>(this) + 0xC8);
    }

    void setThousandSeparator(wchar_t val) { // Property Generated Setter
      *reinterpret_cast<wchar_t*>(reinterpret_cast<uintptr_t>(this) + 0xC8) = val;
    }

    wchar_t getDecimalCharacter() { // Property Generated Getter
      return *reinterpret_cast<wchar_t*>(reinterpret_cast<uintptr_t>(this) + 0xCA);
    }

    void setDecimalCharacter(wchar_t val) { // Property Generated Setter
      *reinterpret_cast<wchar_t*>(reinterpret_cast<uintptr_t>(this) + 0xCA) = val;
    }

    wchar_t getDefaultSpace() { // Property Generated Getter
      return *reinterpret_cast<wchar_t*>(reinterpret_cast<uintptr_t>(this) + 0xCC);
    }

    void setDefaultSpace(wchar_t val) { // Property Generated Setter
      *reinterpret_cast<wchar_t*>(reinterpret_cast<uintptr_t>(this) + 0xCC) = val;
    }

    int getNumberPrecision() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD0);
    }

    void setNumberPrecision(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0xD0) = val;
    }

    List<CharMap> getLowerToUpperList() { // Property Generated Getter
      return *reinterpret_cast<List<CharMap>*>(reinterpret_cast<uintptr_t>(this) + 0xD8);
    }

    void setLowerToUpperList(List<CharMap> val) { // Property Generated Setter
      *reinterpret_cast<List<CharMap>*>(reinterpret_cast<uintptr_t>(this) + 0xD8) = val;
    }

    List<CharMap> getUpperToLowerList() { // Property Generated Getter
      return *reinterpret_cast<List<CharMap>*>(reinterpret_cast<uintptr_t>(this) + 0xE8);
    }

    void setUpperToLowerList(List<CharMap> val) { // Property Generated Setter
      *reinterpret_cast<List<CharMap>*>(reinterpret_cast<uintptr_t>(this) + 0xE8) = val;
    }

    List<CharMap> getSortScoreList() { // Property Generated Getter
      return *reinterpret_cast<List<CharMap>*>(reinterpret_cast<uintptr_t>(this) + 0xF8);
    }

    void setSortScoreList(List<CharMap> val) { // Property Generated Setter
      *reinterpret_cast<List<CharMap>*>(reinterpret_cast<uintptr_t>(this) + 0xF8) = val;
    }

    List<unsigned short> getTypeSpaces() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x108);
    }

    void setTypeSpaces(List<unsigned short> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x108) = val;
    }

    List<unsigned short> getTypePunctuation() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x118);
    }

    void setTypePunctuation(List<unsigned short> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x118) = val;
    }

    List<unsigned short> getTypeAlphaNumeric() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x128);
    }

    void setTypeAlphaNumeric(List<unsigned short> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x128) = val;
    }

    List<unsigned short> getTypeAlpha() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x138);
    }

    void setTypeAlpha(List<unsigned short> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x138) = val;
    }

    List<unsigned short> getTypeDigit() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x148);
    }

    void setTypeDigit(List<unsigned short> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x148) = val;
    }

    List<unsigned short> getTypeHexDigit() { // Property Generated Getter
      return *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x158);
    }

    void setTypeHexDigit(List<unsigned short> val) { // Property Generated Setter
      *reinterpret_cast<List<unsigned short>*>(reinterpret_cast<uintptr_t>(this) + 0x158) = val;
    }

    float getMinFontSizeForDropshadow() { // Property Generated Getter
      return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xD4);
    }

    void setMinFontSizeForDropshadow(float val) { // Property Generated Setter
      *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xD4) = val;
    }

};