#pragma once
#include <Cyrus/Classes/Window.h>
#include <Cyrus/shared.h>

struct ControlEditLayout;

#pragma pack(push, 1)
/**
 * @class ControlEdit
 * @brief A class that represents an editable text control element in a window.
 *
 * The ControlEdit class extends the functionality of the Window class to
 * provide specific features for handling and displaying an editable text field
 * within a window. This class includes capabilities for managing text content,
 * cursor behavior, editing states, and various input options such as password
 * mode and paste allowance.
 *
 * @note This class inherits from the Window class, thereby incorporating all
 * the functionalities and attributes of a standard window.
 */
class ControlEdit : public Window {
private:
  std::wstring m_sText;      // 0x248
  bool m_bEditing;           // 0x268
  bool pad_b;                // 0x269
  bool m_bDeleteOnFirstChar; // 0x26A
  uint8_t pad;               // 0x26B
  int m_nMaxLength;          // 0x26C
  bool m_bPassword;          // 0x270
  bool m_bLog;               // 0x271
  bool m_bAllowPaste;        // 0x272
  bool m_previousNext;       // 0x273
  uint8_t pad_2[0x4C];       // 0x274
  int m_nLogPosition;        // 0x2C0
  int pad_c;                 // 0x2C4
  int m_nMaxLogSize;         // 0x2C8
  int m_nCursor;             // 0x2CC
  int m_nEditBegin;          // 0x2D0
  int m_nEditEnd;            // 0x2D4
  std::wstring m_sSavedText; // 0x2D8
  float m_fCursorBlinkSpeed; // 0x2F8
  float m_fCursorTimer;      // 0x2FC
  bool m_bCursorBlink;       // 0x300
  uint8_t pad_3[0x7];        // 0x301
  double m_fMinRange;        // 0x308
  double m_fMaxRange;        // 0x310
  int m_nPrecision;          // 0x318

public:
  /**
   * @brief Get the text content of the control.
   *
   * @return The text content as a wide string.
   */
  CYRUS std::wstring getText() const;

  /**
   * @brief Set the text content of the control.
   *
   * @param text The text content to set as a wide string.
   */
  CYRUS void setText(const std::wstring &text);

  /**
   * @brief Check if the control is in editing mode.
   *
   * @return True if the control is in editing mode, false otherwise.
   */
  CYRUS bool isEditing() const;

  /**
   * @brief Set the editing mode of the control.
   *
   * @param editing True to enable editing mode, false to disable.
   */
  CYRUS void setEditing(bool editing);

  /**
   * @brief Check if the text should be deleted on the first character input.
   *
   * @return True if the text should be deleted on the first character input,
   * false otherwise.
   */
  CYRUS bool isDeleteOnFirstChar() const;

  /**
   * @brief Set the behavior to delete text on the first character input.
   *
   * @param deleteOnFirstChar True to enable delete on first character input,
   * false to disable.
   */
  CYRUS void setDeleteOnFirstChar(bool deleteOnFirstChar);

  /**
   * @brief Get the maximum length of the text.
   *
   * @return The maximum length of the text.
   */
  CYRUS int getMaxLength() const;

  /**
   * @brief Set the maximum length of the text.
   *
   * @param maxLength The maximum length to set.
   */
  CYRUS void setMaxLength(int maxLength);

  /**
   * @brief Check if the control is in password mode.
   *
   * @return True if the control is in password mode, false otherwise.
   */
  CYRUS bool isPasswordMode() const;

  /**
   * @brief Set the password mode of the control.
   *
   * @param password True to enable password mode, false to disable.
   */
  CYRUS void setPasswordMode(bool password);

  /**
   * @brief Check if the control is in log mode.
   *
   * @return True if the control is in log mode, false otherwise.
   */
  CYRUS bool isLogMode() const;

  /**
   * @brief Set the log mode of the control.
   *
   * @param log True to enable log mode, false to disable.
   */
  CYRUS void setLogMode(bool log);

  /**
   * @brief Check if paste is allowed in the control.
   *
   * @return True if paste is allowed, false otherwise.
   */
  CYRUS bool isAllowPaste() const;

  /**
   * @brief Set the paste allowance in the control.
   *
   * @param allowPaste True to allow paste, false to disable.
   */
  CYRUS void setAllowPaste(bool allowPaste);

  /**
   * @brief Check if previous and next navigation is enabled.
   *
   * @return True if previous and next navigation is enabled, false otherwise.
   */
  CYRUS bool isPreviousNextEnabled() const;

  /**
   * @brief Set the previous and next navigation.
   *
   * @param previousNext True to enable previous and next navigation, false to
   * disable.
   */
  CYRUS void setPreviousNextEnabled(bool previousNext);

  /**
   * @brief Get the current log position.
   *
   * @return The current log position.
   */
  CYRUS int getLogPosition() const;

  /**
   * @brief Set the current log position.
   *
   * @param logPosition The log position to set.
   */
  CYRUS void setLogPosition(int logPosition);

  /**
   * @brief Get the maximum size of the log.
   *
   * @return The maximum size of the log.
   */
  CYRUS int getMaxLogSize() const;

  /**
   * @brief Set the maximum size of the log.
   *
   * @param maxLogSize The maximum size of the log to set.
   */
  CYRUS void setMaxLogSize(int maxLogSize);

  /**
   * @brief Get the cursor position.
   *
   * @return The cursor position.
   */
  CYRUS int getCursorPosition() const;

  /**
   * @brief Set the cursor position.
   *
   * @param cursorPosition The cursor position to set.
   */
  CYRUS void setCursorPosition(int cursorPosition);

  /**
   * @brief Get the start position of the text being edited.
   *
   * @return The start position of the text being edited.
   */
  CYRUS int getEditBegin() const;

  /**
   * @brief Set the start position of the text being edited.
   *
   * @param editBegin The start position of the text being edited.
   */
  CYRUS void setEditBegin(int editBegin);

  /**
   * @brief Get the end position of the text being edited.
   *
   * @return The end position of the text being edited.
   */
  CYRUS int getEditEnd() const;

  /**
   * @brief Set the end position of the text being edited.
   *
   * @param editEnd The end position of the text being edited.
   */
  CYRUS void setEditEnd(int editEnd);

  /**
   * @brief Get the saved text content.
   *
   * @return The saved text content as a wide string.
   */
  CYRUS std::wstring getSavedText() const;

  /**
   * @brief Set the saved text content.
   *
   * @param savedText The saved text content to set as a wide string.
   */
  CYRUS void setSavedText(const std::wstring &savedText);

  /**
   * @brief Get the cursor blink speed.
   *
   * @return The cursor blink speed as a float.
   */
  CYRUS float getCursorBlinkSpeed() const;

  /**
   * @brief Set the cursor blink speed.
   *
   * @param cursorBlinkSpeed The cursor blink speed to set as a float.
   */
  CYRUS void setCursorBlinkSpeed(float cursorBlinkSpeed);

  /**
   * @brief Get the cursor timer value.
   *
   * @return The cursor timer value as a float.
   */
  CYRUS float getCursorTimer() const;

  /**
   * @brief Set the cursor timer value.
   *
   * @param cursorTimer The cursor timer value to set as a float.
   */
  CYRUS void setCursorTimer(float cursorTimer);

  /**
   * @brief Check if the cursor is blinking.
   *
   * @return True if the cursor is blinking, false otherwise.
   */
  CYRUS bool isCursorBlinking() const;

  /**
   * @brief Set the cursor blinking state.
   *
   * @param cursorBlink True to enable cursor blinking, false to disable.
   */
  CYRUS void setCursorBlinking(bool cursorBlink);

  /**
   * @brief Get the minimum range value for the control.
   *
   * @return The minimum range value as a double.
   */
  CYRUS double getMinRange() const;

  /**
   * @brief Set the minimum range value for the control.
   *
   * @param minRange The minimum range value to set as a double.
   */
  CYRUS void setMinRange(double minRange);

  /**
   * @brief Get the maximum range value for the control.
   *
   * @return The maximum range value as a double.
   */
  CYRUS double getMaxRange() const;

  /**
   * @brief Set the maximum range value for the control.
   *
   * @param maxRange The maximum range value to set as a double.
   */
  CYRUS void setMaxRange(double maxRange);

  /**
   * @brief Get the precision value for the control.
   *
   * @return The precision value.
   */
  CYRUS int getPrecision() const;

  /**
   * @brief Set the precision value for the control.
   *
   * @param precision The precision value to set.
   */
  CYRUS void setPrecision(int precision);

private:
  friend struct ControlEditLayout;
};
#pragma pack(pop)

struct ControlEditLayout {
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_sText, 0x248);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_bEditing, 0x268);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_bDeleteOnFirstChar, 0x26A);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, pad, 0x26B);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_nMaxLength, 0x26C);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_bPassword, 0x270);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_bLog, 0x271);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_bAllowPaste, 0x272);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_previousNext, 0x273);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, pad_2, 0x274);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_nLogPosition, 0x2C0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_nMaxLogSize, 0x2C8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_nCursor, 0x2CC);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_nEditBegin, 0x2D0);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_nEditEnd, 0x2D4);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_sSavedText, 0x2D8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_fCursorBlinkSpeed, 0x2F8);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_fCursorTimer, 0x2FC);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_bCursorBlink, 0x300);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, pad_3, 0x301);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_fMinRange, 0x308);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_fMaxRange, 0x310);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlEdit, m_nPrecision, 0x318);
};