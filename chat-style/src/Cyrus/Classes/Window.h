#pragma once
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "WindowFlags.h"
#include "WindowStyle.h"
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/shared.h>
#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class ControlButton;
class ControlEdit;
struct WindowLayout;

#pragma pack(push, 1)
/**
 * @class Window
 * @brief Represents a Wizard101 Window, think anything you see on screen that
 * is not a 3D model.
 *
 * This class inherits from PropertyClass and provides functionality for
 * managing windows. It contains various member variables and member functions
 * for manipulating the window properties.
 */
class Window : public PropertyClass {
private:
  float N00000A81;                               // 0x0048
  int32_t windowID;                              // 0x004C
  std::string m_sName;                           // 0x50
  std::vector<std::shared_ptr<Window>> children; // 0x70
  Window *parent;                                // 0x88
  void *inputHandler; // 0x90 seems to handle all input, even mouse position,
                      // key presses, etc.
  WindowStyle_internal m_Style; // 0x0098
  WindowFlags_internal m_Flags; // 0x009C
  Rect transform;               // 0xA0
  VectorI2D parentOffset;       // 0xB0
  char pad_00B8[8];             // 0x00B8
  VectorI2D offset;             // 0xC0
  Vector2D scale;               // 0xC8
  uint32_t N00000417;           // 0x00D0
  float m_fTargetAlpha;         // 0x00D4
  float m_fDisabledAlpha;       // 0x00D8
  float N000008E4;              // 0x00DC
  float screen_time;      // 0x00E0 // seconds this window has been displayed on
                          // screen
  float screen_time_;     // 0x00E4 // seconds this window has been displayed on
                          // screen
  int64_t m_pWindowStyle; // 0x00E8
  void *soundDescriptor;  // 0x00F0
  std::wstring m_sHelp;   // 0x00F8
  char pad_0118[0x48];    // 0x0118
  std::string m_sScript;  // 0x0160
  uintptr_t pad_d;        // 0x180
  std::wstring m_sTip;    // 0x0188
  void *m_BubbleList;     // 0x01A8
  char pad_01B0[16];      // 0x01B0
  void *artDescriptor;    // 0x01C0
  char pad_01C8[120];     // 0x01C8
  char **internalClassName; // 0x0240

public:
  /**
   * @brief Retrieve the unique identifier for the Window.
   *
   * Each Window object has a unique identifier that can be used to distinguish
   * it from other Window objects. This function returns that unique identifier.
   *
   * @return An integer representing the unique Window ID.
   */
  CYRUS int32_t getWindowID() const;

  /**
   * @brief Retrieve the name of the Window.
   *
   * This function returns the name assigned to the Window. The name can be used
   * for identification or display purposes.
   *
   * @return A string containing the name of the Window.
   */
  CYRUS std::string getName();

  /**
   * @brief Retrieve the child Windows of this Window.
   *
   * This function returns a vector of shared pointers to the children of this
   * Window. Each child is also a Window object. This allows you to access and
   * manipulate the hierarchical structure of Windows.
   *
   * @return A vector containing shared pointers to the child Window objects.
   */
  CYRUS std::vector<std::shared_ptr<Window>> getChildren();

  /**
   * @brief Get the Windows parent Window.
   *
   * This function returns the parent window if it exists. If there is no parent
   * window, it returns `nullptr`.
   *
   * @return The Windows parent Window, or `nullptr` if there is no parent
   * window.
   */
  CYRUS Window *getParent();

  CYRUS std::string getFlags();

  CYRUS std::string getStyles();

  /**
   * @brief Unconditionally sets the specified Window flag to 1.
   *
   * This function sets the specified flag in the internal flags variable to 1.
   * It performs a bitwise OR operation to ensure the flag is set without
   * affecting other flags.
   *
   * @param flag The flag to be set.
   */
  CYRUS void addFlag(uint32_t flag);

  /**
   * @brief Unconditionally sets the specified Window style to 1.
   *
   * This function sets the specified style in the internal style variable to 1.
   * It performs a bitwise OR operation to ensure the style is set without
   * affecting other styles.
   *
   * @param style The style to be set.
   */
  CYRUS void addStyle(uint32_t style);

  /**
   * @brief Toggles the current value of the specified Window flag.
   *
   * This function flips the current value of the specified flag in the internal
   * flags variable. If the flag is currently set to 1, it will be changed to 0,
   * and if it is currently set to 0, it will be changed to 1.
   *
   * @param flag The flag to be toggled.
   */
  CYRUS void toggleFlag(uint32_t flag);

  /**
   * @brief Toggles the current value of the specified Window style.
   *
   * This function flips the current value of the specified style in the
   * internal style variable. If the style is currently set to 1, it will be
   * changed to 0, and if it is currently set to 0, it will be changed to 1.
   *
   * @param style The style to be toggled.
   */
  CYRUS void toggleStyle(uint32_t style);

  /**
   * @brief Unconditionally sets the specified Window flag to 0.
   *
   * This function clears the specified flag in the internal flags variable by
   * setting it to 0. It performs a bitwise AND operation with the complement
   * of the flag to ensure the flag is cleared without affecting other flags.
   *
   * @param flag The flag to be cleared.
   */
  CYRUS void removeFlag(uint32_t flag);

  /**
   * @brief Unconditionally sets the specified Window style to 0.
   *
   * This function clears the specified style in the internal style variable by
   * setting it to 0. It performs a bitwise AND operation with the complement
   * of the style to ensure the style is cleared without affecting other styles.
   *
   * @param style The style to be cleared.
   */
  CYRUS void removeStyle(uint32_t style);

  /**
   * @brief Get the transformation coordinates of the window.
   *
   * @return The transformation coordinates as a structure containing left, top,
   * right, and bottom values.
   */
  CYRUS Rect *getTransform();

  /**
   * @brief Sets the transformation coordinates of the window.
   *
   */
  CYRUS void setTransform(Rect in);

  /**
   * @brief Get the offset of the window relative to its parent.
   *
   * @return The offset as a structure containing x and y values.
   */
  CYRUS VectorI2D getParentOffset() const;

  /**
   * @brief Get the total time the window has been displayed on the screen.
   *
   * @return The time in seconds.
   */
  CYRUS float getTimeOnScreen() const;

  /**
   * @brief Set the total time the window has been displayed on the screen.
   *
   * @param screenTime The time in seconds.
   */
  CYRUS void setTimeOnScreen(float screenTime);

  /**
   * @brief Get the alpha value when the window is disabled.
   *
   * @return The alpha value.
   */
  CYRUS float getDisabledAlpha() const;

  /**
   * @brief Set the alpha value for when the window is disabled.
   *
   * @param fDisabledAlpha The alpha value.
   */
  CYRUS void setFDisabledAlpha(float fDisabledAlpha);

  /**
   * @brief Get the target alpha value of the window.
   *
   * @return The target alpha value.
   */
  CYRUS float getTargetAlpha() const;

  /**
   * @brief Set the target alpha value of the window.
   *
   * @param fTargetAlpha The target alpha value.
   */
  CYRUS void setFTargetAlpha(float fTargetAlpha);

  /**
   * @brief Get the scale of the window.
   *
   * @return The scale as a structure containing x and y values.
   */
  CYRUS Vector2D getScale() const;

  /**
   * @brief Sets the scale of the window.
   *
   * @param x The horizontal scaling factor
   * @param y The vertical scaling factor
   */
  CYRUS void setScale(float x, float y);

  /**
   * @brief Get the offset of the window.
   *
   * @return The offset as a structure containing x and y values.
   */
  CYRUS VectorI2D getOffset() const;

  /**
   * @brief Scales the current Window, and all descendants, by the scale factor.
   * If the scale factor is 2, the Window and it's descendants will be twice as
   * large. If the scale factor is 0.5, the Window and it's descendants will be
   * twice as small.
   *
   */
  CYRUS void performScale(float factor);

  /**
   * @brief Find a child Window by name and cast it to the specified type.
   *
   * This function searches through the immediate children of the current
   * Window to find a child with the specified name. If a matching child is
   * found, it is cast to the specified type `T` and returned. If no matching
   * child is found, the function returns `nullptr`.
   *
   * @tparam T The type to which the found child should be cast.
   * @param name The name of the child Window to find.
   * @return A pointer to the child Window cast to type `T`, or `nullptr` if
   * no matching child is found.
   */
  template <class T> CYRUS T *findChild(const std::string &name) {
    for (auto &child : children) {
      if (child->getName() == name) {
        return child->as<T>();
      }
    }
    return nullptr;
  }

  /**
   * @brief Find a descendant Window by name and cast it to the specified
   * type.
   *
   * This function searches through the immediate children and all their
   * descendants of the current Window to find a descendant with the specified
   * name. If a matching descendant is found, it is cast to the specified type
   * `T` and returned. If no matching descendant is found, the function
   * returns `nullptr`.
   *
   * @tparam T The type to which the found descendant should be cast.
   * @param name The name of the descendant Window to find.
   * @return A pointer to the descendant Window cast to type `T`, or `nullptr`
   * if no matching descendant is found.
   */
  template <class T> CYRUS T *findDescendant(const std::string &name) {
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

public:
  virtual void func1();
  virtual void func2();
  virtual void func3();
  virtual void func4();
  virtual void func5();
  virtual void func6();
  virtual void func7();
  virtual void func8();
  virtual void func9();
  virtual void func10();
  virtual void func11();
  virtual void func12();
  virtual void func13();
  virtual void func14();
  virtual void func15();
  virtual void func16();
  virtual void func17();
  virtual void func18();
  virtual void func19();
  virtual void func20();
  virtual void func21();
  virtual void func22();
  virtual void func23();
  virtual void func24();
  virtual void func25();
  virtual void func26();
  virtual void func27();
  virtual void func28();
  virtual void func29();
  virtual void func30();
  virtual void func31();
  virtual void func32();
  virtual void func33();
  virtual void func34();
  virtual void func35();
  virtual bool updateDockPosition();

private:
  friend struct WindowLayout;
};

STATIC_ASSERT(sizeof(Window) == 0x248, "Window size is not correct");
struct WindowLayout {
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, N00000A81, 0x48);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, windowID, 0x4C);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_sName, 0x50);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, children, 0x70);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, parent, 0x88);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, inputHandler, 0x90);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_Style, 0x98);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_Flags, 0x9C);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, transform, 0xA0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, parentOffset, 0xB0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, pad_00B8, 0xB8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, offset, 0xC0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, scale, 0xC8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, N00000417, 0xD0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_fTargetAlpha, 0xD4);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_fDisabledAlpha, 0xD8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, N000008E4, 0xDC);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, screen_time, 0xE0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, screen_time_, 0xE4);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_pWindowStyle, 0xE8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, soundDescriptor, 0xF0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_sHelp, 0xF8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, pad_0118, 0x118);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_sScript, 0x160);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_sTip, 0x188);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, m_BubbleList, 0x1A8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, pad_01B0, 0x1B0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, artDescriptor, 0x1C0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, pad_01C8, 0x1C8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(Window, internalClassName, 0x240);
};
#pragma pack(pop)