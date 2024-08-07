#pragma once
#include <Cyrus/Classes/Window.h>
#include <Cyrus/shared.h>

struct ControlButtonLayout;

#pragma pack(push, 1)
/**
 * @class ControlButton
 * @brief A class that represents a button control element in a window.
 *
 * The ControlButton class extends the functionality of the Window class to
 * provide specific features for handling and displaying a button within a
 * window. This class includes capabilities for managing button states, labels,
 * hotkeys, colors, scaling, and various display options such as drop shadows
 * and outlines. Additionally, it supports detecting cursor interaction and
 * handling toggle states.
 *
 * @note This class inherits from the Window class, thereby incorporating all
 * the functionalities and attributes of a standard window.
 */
class ControlButton : public Window {
private:
  uint8_t pad[0x18];              // 0x248
  bool m_bToggle;                 // 0x260
  bool m_bButtonDown;             // 0x261
  uint8_t pad_1[0x6];             // 0x262
  std::wstring m_sLabel;          // 0x268
  uintptr_t pad_2;                // 0x288
  uint8_t m_pButton[0x10];        // 0x290
  unsigned int m_HotKey;          // 0x2A0
  int color;                      // 0x2A4
  bool m_bHotKeyDown;             // 0x2A8
  uint8_t pad_3[0x3];             // 0x2A9
  float m_fTime;                  // 0x2AC
  bool m_bGreyed;                 // 0x2B0
  bool m_bCursorOver;             // 0x2B1
  uint8_t pad_4[0x2];             // 0x2B2
  float m_fMaxScale;              // 0x2B4
  float m_fScaleSpeed;            // 0x2B8
  uint32_t pad_a;                 // 0x2BC
  bool m_bUseDropShadow;          // 0x2C0
  bool m_bUseOutline;             // 0x2C1
  bool m_bAbortWhenCursorNotOver; // 0x2C2

public:
  /**
   * @brief Check if the button is in toggle state.
   *
   * @return True if the button is toggled, false otherwise.
   */
  CYRUS bool isToggle() const;

  /**
   * @brief Set the toggle state of the button.
   *
   * @param toggle True to enable toggle, false to disable.
   */
  CYRUS void setToggle(bool toggle);

  /**
   * @brief Check if the button is currently pressed down.
   *
   * @return True if the button is pressed down, false otherwise.
   */
  CYRUS bool isButtonDown() const;

  /**
   * @brief Set the button down state.
   *
   * @param buttonDown True to set the button as pressed down, false to release.
   */
  CYRUS void setButtonDown(bool buttonDown);

  /**
   * @brief Get the label of the button.
   *
   * @return The label as a wide string.
   */
  CYRUS std::wstring getLabel() const;

  /**
   * @brief Set the label of the button.
   *
   * @param label The label to set as a wide string.
   */
  CYRUS void setLabel(const std::wstring &label);

  /**
   * @brief Get the hotkey assigned to the button.
   *
   * @return The hotkey as an unsigned integer.
   */
  CYRUS unsigned int getHotKey() const;

  /**
   * @brief Set the hotkey for the button.
   *
   * @param hotKey The hotkey to set as an unsigned integer.
   */
  CYRUS void setHotKey(unsigned int hotKey);

  /**
   * @brief Get the color of the button.
   *
   * @return The color as an integer.
   */
  CYRUS int getColor() const;

  /**
   * @brief Set the color of the button.
   *
   * @param col The color to set as an integer.
   */
  CYRUS void setColor(int col);

  /**
   * @brief Check if the hotkey is currently pressed down.
   *
   * @return True if the hotkey is pressed down, false otherwise.
   */
  CYRUS bool isHotKeyDown() const;

  /**
   * @brief Set the hotkey down state.
   *
   * @param hotKeyDown True to set the hotkey as pressed down, false to release.
   */
  CYRUS void setHotKeyDown(bool hotKeyDown);

  /**
   * @brief Get the time associated with the button.
   *
   * @return The time as a float.
   */
  CYRUS float getTime() const;

  /**
   * @brief Set the time associated with the button.
   *
   * @param time The time to set as a float.
   */
  CYRUS void setTime(float time);

  /**
   * @brief Check if the button is greyed out.
   *
   * @return True if the button is greyed out, false otherwise.
   */
  CYRUS bool isGreyed() const;

  /**
   * @brief Set the greyed out state of the button.
   *
   * @param greyed True to grey out the button, false to enable it.
   */
  CYRUS void setGreyed(bool greyed);

  /**
   * @brief Check if the cursor is over the button.
   *
   * @return True if the cursor is over the button, false otherwise.
   */
  CYRUS bool isCursorOver() const;

  /**
   * @brief Set the cursor over state of the button.
   *
   * @param cursorOver True to set the cursor as over the button, false
   * otherwise.
   */
  CYRUS void setCursorOver(bool cursorOver);

  /**
   * @brief Get the maximum scale of the button.
   *
   * @return The maximum scale as a float.
   */
  CYRUS float getMaxScale() const;

  /**
   * @brief Set the maximum scale of the button.
   *
   * @param maxScale The maximum scale to set as a float.
   */
  CYRUS void setMaxScale(float maxScale);

  /**
   * @brief Get the scale speed of the button.
   *
   * @return The scale speed as a float.
   */
  CYRUS float getScaleSpeed() const;

  /**
   * @brief Set the scale speed of the button.
   *
   * @param scaleSpeed The scale speed to set as a float.
   */
  CYRUS void setScaleSpeed(float scaleSpeed);

  /**
   * @brief Check if drop shadow is used.
   *
   * @return True if drop shadow is used, false otherwise.
   */
  CYRUS bool isDropShadowUsed() const;

  /**
   * @brief Enable or disable drop shadow.
   *
   * @param useDropShadow True to use drop shadow, false to disable.
   */
  CYRUS void setDropShadowUsed(bool useDropShadow);

  /**
   * @brief Check if outline is used.
   *
   * @return True if outline is used, false otherwise.
   */
  CYRUS bool isOutlineUsed() const;

  /**
   * @brief Enable or disable outline.
   *
   * @param useOutline True to use outline, false to disable.
   */
  CYRUS void setOutlineUsed(bool useOutline);

  /**
   * @brief Check if actions should be aborted when the cursor is not over the
   * button.
   *
   * @return True if actions are aborted when the cursor is not over, false
   * otherwise.
   */
  CYRUS bool isAbortWhenCursorNotOver() const;

  /**
   * @brief Enable or disable aborting actions when the cursor is not over the
   * button.
   *
   * @param abortWhenCursorNotOver True to abort actions when the cursor is not
   * over, false to disable.
   */
  CYRUS void setAbortWhenCursorNotOver(bool abortWhenCursorNotOver);

private:
  friend struct ControlButtonLayout;
};
#pragma pack(pop)

struct ControlButtonLayout {
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, pad, 0x248);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_bToggle, 0x260);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_bButtonDown, 0x261);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, pad_1, 0x262);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_sLabel, 0x268);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, pad_2, 0x288);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_pButton, 0x290);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_HotKey, 0x2A0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, color, 0x2A4);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_bHotKeyDown, 0x2A8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, pad_3, 0x2A9);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_fTime, 0x2AC);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_bGreyed, 0x2B0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_bCursorOver, 0x2B1);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, pad_4, 0x2B2);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_fMaxScale, 0x2B4);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_fScaleSpeed, 0x2B8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_bUseDropShadow, 0x2C0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_bUseOutline, 0x2C1);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlButton, m_bAbortWhenCursorNotOver,
                                  0x2C2);
};