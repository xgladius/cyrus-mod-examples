#pragma once
#include "shared.h"
#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>

enum DMLFieldType : int8_t {
  UNKNOWN,
  GID,
  I16,
  U8,
  DFLOAT,
  I32,
  U16,
  U32,
  DDOUBLE,
  STR,
  WSTR,
};

class DMLField {
public:
  void *vftable;
  double doubleValue; // 0x0008
  float floatValue;   // 0x0010
  int32_t intValue;   // 0x0014
  char *strValue;     // 0x0018
  wchar_t *wstrValue; // 0x0020
  uint64_t gidValue;  // 0x0028
  DMLFieldType type;  // 0x0030
  char pad[3];        // 0x0031
  char pad_0034[4];   // 0x0034
  void *N000000D3;    // 0x0038
  int32_t N000000D4;  // 0x0040
  int32_t flags;      // 0x0044
  char pad_0048[8];   // 0x0048
  char fieldName[32]; // 0x0050
  char pad_0070[8];   // 0x0070

  std::string toString() const {
    switch (type) {
    case DMLFieldType::GID:
      return std::to_string(gidValue);
    case DMLFieldType::I16:
    case DMLFieldType::I32:
      return std::to_string(intValue);
    case DMLFieldType::U8:
    case DMLFieldType::U16:
    case DMLFieldType::U32:
      return std::to_string(static_cast<uint32_t>(intValue));
    case DMLFieldType::DFLOAT:
      return std::to_string(floatValue);
    case DMLFieldType::DDOUBLE:
      return std::to_string(doubleValue);
    case DMLFieldType::STR: {
      auto is_ptr = reinterpret_cast<uintptr_t>((void *)wstrValue) == 0;
      if (is_ptr) {
        auto str_adr = *reinterpret_cast<std::string *>(strValue);
        return str_adr;
      }
      return std::string(strValue);
    }
    case DMLFieldType::WSTR:
      return "WSTRING";
    default:
      return "UNKNOWN";
    }
  }

  template <typename T> void setValue(T value) {
    try {
      switch (type) {
      case DMLFieldType::GID:
        gidValue = static_cast<uint64_t>(value);
        break;
      case DMLFieldType::I16:
        intValue = static_cast<int16_t>(value);
        break;
      case DMLFieldType::U8:
        intValue = static_cast<uint8_t>(value);
        break;
      case DMLFieldType::DFLOAT:
        floatValue = static_cast<float>(value);
        break;
      case DMLFieldType::I32:
        intValue = static_cast<int32_t>(value);
        break;
      case DMLFieldType::U16:
        intValue = static_cast<uint16_t>(value);
        break;
      case DMLFieldType::U32:
        intValue = static_cast<uint32_t>(value);
        break;
      case DMLFieldType::DDOUBLE:
        doubleValue = static_cast<double>(value);
        break;
      case DMLFieldType::STR:
        if constexpr (std::is_same<T, std::string>::value) {
          delete[] strValue;
          strValue = new char[value.length() + 1];
          strcpy(strValue, value.c_str());
        } else {
          throw std::invalid_argument(
              "Type mismatch: expected std::string for STR");
        }
        break;
      case DMLFieldType::WSTR:
        if constexpr (std::is_same<T, std::wstring>::value) {
          delete[] wstrValue;
          wstrValue = new wchar_t[value.length() + 1];
          std::wcscpy(wstrValue, value.c_str());
        } else {
          throw std::invalid_argument(
              "Type mismatch: expected std::wstring for WSTR");
        }
        break;
      default:
        throw std::invalid_argument("Unknown DMLFieldType");
      }
    } catch (const std::exception &e) {
      std::cerr << "Error setting value: " << e.what() << std::endl;
    }
  }
}; // Size: 0x0080

class DMLRecord {
public:
  void *vftable;
  int16_t pad[2];       // 0x0008
  bool isInitialized;   // 0x000C
  uint8_t serviceID;    // 0x000D
  uint8_t messageID;    // 0x000E
  uint8_t unk;          // 0x000F
  char pad_0010[16];    // 0x0010
  DMLField *startField; // 0x0020
  DMLField *endField;   // 0x0028
  DMLField *maxField;   // 0x0030
  char pad_0038[72];    // 0x0038

  void PrintDMLFieldNames() {
    DMLField *currentField = this->startField;
    DMLField *endField = this->endField;

    while (currentField < endField) {
      std::cout << currentField->fieldName << ": " << currentField->toString()
                << std::endl;
      currentField = reinterpret_cast<DMLField *>(
          reinterpret_cast<char *>(currentField) + sizeof(DMLField));
    }
  }

  DMLField *getField(const std::string &fieldName) {
    DMLField *currentField = this->startField;
    while (currentField < this->endField) {
      if (fieldName == currentField->fieldName) {
        return currentField;
      }
      currentField = reinterpret_cast<DMLField *>(
          reinterpret_cast<char *>(currentField) + sizeof(DMLField));
    }
    return nullptr;
  }

  std::unordered_map<std::string, DMLField *> GetRecords() {
    std::unordered_map<std::string, DMLField *> records{};

    DMLField *currentField = this->startField;
    while (currentField < this->endField) {
      records[currentField->fieldName] = currentField;
      currentField = reinterpret_cast<DMLField *>(
          reinterpret_cast<char *>(currentField) + sizeof(DMLField));
    }
    return records;
  }
}; // Size: 0x0080