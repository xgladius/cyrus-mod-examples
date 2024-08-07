#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/Mail.h>
#include <Cyrus/Classes/PropertyClass.h>

class MailList : public PropertyClass {
public:
    List<SharedPointer<Mail>> * getMessages() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<Mail>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setMessages(List<SharedPointer<Mail>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<Mail>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

};