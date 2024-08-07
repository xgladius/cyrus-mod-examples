#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ClientObject.h>
#include <Cyrus/Classes/CoreObject.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizClientObjectItem.h>

class ClientPetSnackItem : public WizClientObjectItem {
public:
    int getQuantity() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x258);
    }

    void setQuantity(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x258) = val;
    }

};