#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/EmojiData.h>
#include <Cyrus/Classes/PropertyClass.h>

class EmojiDefinition : public PropertyClass {
public:
    List<SharedPointer<EmojiData>> * getEmojiDataList() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<EmojiData>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setEmojiDataList(List<SharedPointer<EmojiData>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<EmojiData>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};