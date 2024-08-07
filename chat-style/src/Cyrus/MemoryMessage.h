#pragma once
#include "shared.h"
#include <cstdint>
#include <unordered_set>

struct MemoryMessageNode {
  MemoryMessageNode *leftNode;  // 0x0
  void *unk;                    // 0x8
  MemoryMessageNode *rightNode; // 0x10
  uint8_t unk1;                 // 0x18
  bool isLastNode;              // 0x19
  uint8_t pad[6];               // 0x1A
  std::string name;             // 0x20
  uint8_t data;                 // 0x40 either serviceID or messageID
};

void traverseMemNodes(MemoryMessageNode *node,
                      std::unordered_set<std::string> &names, uint8_t id) {
  if (!node || node->isLastNode)
    return;

  if (node->data == id) {
    names.insert(node->name);
  }

  traverseMemNodes(node->leftNode, names, id);
  traverseMemNodes(node->rightNode, names, id);
}

std::string getMessageName(uintptr_t MessageManager, uint8_t serviceID,
                           uint8_t messageID) {
  const auto serviceBST =
      *reinterpret_cast<uintptr_t *>(MessageManager + 0x4AD8);
  const auto messageBST =
      *reinterpret_cast<uintptr_t *>(MessageManager + 0x4AC8);

  const auto rootServiceNode =
      *reinterpret_cast<MemoryMessageNode **>(serviceBST + 0x8);
  const auto rootMessageNode =
      *reinterpret_cast<MemoryMessageNode **>(messageBST + 0x8);

  std::unordered_set<std::string> serviceMsgNames{};
  traverseMemNodes(rootServiceNode, serviceMsgNames, serviceID);

  std::unordered_set<std::string> messageNames{};
  traverseMemNodes(rootMessageNode, messageNames, messageID);

  for (const auto &name : messageNames) {
    for (const auto &service : serviceMsgNames) {
      if (name.find(service) != std::string::npos) {
        return name;
      }
    }
  }

  return "UNKNOWN";
}