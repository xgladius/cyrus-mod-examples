#pragma once
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WizGameObjectTemplate.h>
#include <Cyrus/shared.h>
#include <cstdint>

struct CoreObjectLayout;
struct BehaviorInstanceLayout;

#pragma pack(push, 1)
class BehaviorInstance : public PropertyClass {
private:
  uint8_t pad[0x20];               // 0x48
  uint32_t behaviorTemplateNameID; // 0x68
};
#pragma pack(pop)

#pragma pack(push, 1)
/**
 * @class CoreObject
 * @brief
 *
 */
class CoreObject : public PropertyClass {
public:
  uint64_t globalID;                                                // 0x48
  uint64_t permID;                                                  // 0x50
  WizGameObjectTemplate *m_template;                                // 0x58
  uint64_t templateID;                                              // 0x60
  std::string debugName;                                            // 0x68
  std::string displayKey;                                           // 0x88
  Vector3D location;                                                // 0xA8
  Vector3D orentiation;                                             // 0xB4
  short speedMultiplier;                                            // 0xC0
  unsigned short mobileID;                                          // 0xC2
  float scale;                                                      // 0xC4
  void *unk1;                                                       // 0xC8
  CoreObject *parent;                                               // 0xD0
  SharedObjectDeleter<CoreObject *> *deleter;                       // 0xD8
  std::vector<std::shared_ptr<BehaviorInstance>> inactiveBehaviors; // 0xE0
  std::vector<std::shared_ptr<BehaviorInstance>> activeBehaviors;   // 0xF8
  void *unk2;                                                       // 0x110
  void *unk3;                                                       // 0x118
  void *unk4;                                                       // 0x120
  void *unk5;                                                       // 0x128
  void *zoneData;                                                   // 0x130
  void *unk6;                                                       // 0x138
  void *unk7;                                                       // 0x140
  void *unk8;                                                       // 0x148
  void *unk9;                                                       // 0x150
  uint32_t zoneTagID;                                               // 0x158
  uint32_t pad;                                                     // 0x15C
  void *unk10;                                                      // 0x160
  void *unk11;                                                      // 0x168
  void *unk12;                                                      // 0x170
  void *unk13;                                                      // 0x178
  std::vector<std::shared_ptr<CoreObject>> children;                // 0x180

public:
  /**
   * @brief Find a child CoreObject by name and cast it to the specified type.
   *
   * This function searches through the immediate children of the current
   * CoreObject to find a child with the specified name. If a matching child is
   * found, it is cast to the specified type `T` and returned. If no matching
   * child is found, the function returns `nullptr`.
   *
   * @tparam T The type to which the found child should be cast.
   * @param name The name of the child Window to find.
   * @return A pointer to the child CoreObject cast to type `T`, or `nullptr` if
   * no matching child is found.
   */
  template <class T> T *findChild(const std::string &name) {
    for (auto &child : children) {
      if (child->getName() == name) {
        return child->as<T>();
      }
    }
    return nullptr;
  }

  /**
   * @brief Find a descendant CoreObject by name and cast it to the specified
   * type.
   *
   * This function searches through the immediate children and all their
   * descendants of the current CoreObject to find a descendant with the
   * specified name. If a matching descendant is found, it is cast to the
   * specified type `T` and returned. If no matching descendant is found, the
   * function returns `nullptr`.
   *
   * @tparam T The type to which the found descendant should be cast.
   * @param name The name of the descendant CoreObject to find.
   * @return A pointer to the descendant CoreObject cast to type `T`, or
   * `nullptr` if no matching descendant is found.
   */
  template <class T> T *findDescendant(const std::string &name) {
    for (auto &child : children) {
      if (child->getName() == name) {
        return child->as<T>();
      }
      T *descendant = child->findDescendant<T>(name);
      if (descendant != nullptr) {
        return descendant;
      }
    }
    return nullptr;
  }

  /*
   * @brief Get the root CoreObject of the current CoreObject.
   *
   * This function returns the root CoreObject of the current CoreObject. If the
   * current CoreObject has no parent, the current CoreObject is the root and is
   * returned. Otherwise, the function recursively calls itself on the parent
   * CoreObject until the root CoreObject is found.
   *
   * @return The root CoreObject of the current CoreObject.
   */
  CoreObject *getRoot() {
    CoreObject *root = this;
    while (root->parent != nullptr) {
      root = root->parent;
    }
    return root;
  }

  std::vector<std::shared_ptr<CoreObject>> getChildren() { return children; }

private:
  friend struct CoreObjectLayout;
};

struct CoreObjectLayout {
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, globalID, 0x48);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, permID, 0x50);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, m_template, 0x58);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, templateID, 0x60);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, debugName, 0x68);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, displayKey, 0x88);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, location, 0xA8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, orentiation, 0xB4);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, speedMultiplier, 0xC0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, mobileID, 0xC2);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, scale, 0xC4);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk1, 0xC8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, parent, 0xD0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, deleter, 0xD8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, inactiveBehaviors, 0xE0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, activeBehaviors, 0xF8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk2, 0x110);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk3, 0x118);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk4, 0x120);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk5, 0x128);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, zoneData, 0x130);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk6, 0x138);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk7, 0x140);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk8, 0x148);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk9, 0x150);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, zoneTagID, 0x158);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, pad, 0x15C);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk10, 0x160);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk11, 0x168);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk12, 0x170);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, unk13, 0x178);
  DEFINE_OFFSET_AND_STATIC_ASSERT(CoreObject, children, 0x180);
};
#pragma pack(pop)