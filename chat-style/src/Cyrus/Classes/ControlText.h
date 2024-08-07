#pragma once
#include <Cyrus/Classes/Window.h>
#include <Cyrus/shared.h>

struct ControlTextLayout;

#pragma pack(push, 1)
/**
 * @class ControlText
 * @brief A class that represents a text-based control element in a window.
 *
 * The ControlText class extends the functionality of the Window class to
 * provide specific features for handling and displaying text within a window.
 * This class includes capabilities for managing text content, tooltips, and
 * various display options such as drop shadows, outlines, and word wrapping.
 * Additionally, it supports enabling and disabling toggle states and adjusting
 * leading (the space between lines of text).
 *
 * @note This class inherits from the Window class, thereby incorporating all
 * the functionalities and attributes of a standard window.
 */
class ControlText : public Window {
private:
  std::wstring m_sText;    // 0x248
  std::wstring m_sTooltip; // 0x268
  int32_t pad;             // 0x288
  bool m_bEnableToggle;    // 0x28C
  bool m_bUseDropShadow;   // 0x28D
  bool m_bUseOutline;      // 0x28E
  bool m_bEnableWordWrap;  // 0x28F
  int m_nLeadingAdjust;    // 0x290

public:
  /**
   * @brief Get the text of the control.
   *
   * @return The text as a wide string.
   */
  std::wstring getText() const { return m_sText; }

  /**
   * @brief Set the text of the control.
   *
   * @param text The text to set as a wide string.
   */
  void setText(const std::wstring &text) { m_sText = text; }

  /**
   * @brief Get the tooltip text of the control.
   *
   * @return The tooltip text as a wide string.
   */
  std::wstring getTooltip() const { return m_sTooltip; }

  /**
   * @brief Set the tooltip text of the control.
   *
   * @param tooltip The tooltip text to set as a wide string.
   */
  void setTooltip(const std::wstring &tooltip) { m_sTooltip = tooltip; }

  /**
   * @brief Check if toggle is enabled.
   *
   * @return True if toggle is enabled, false otherwise.
   */
  bool isToggleEnabled() const { return m_bEnableToggle; }

  /**
   * @brief Enable or disable toggle.
   *
   * @param enableToggle True to enable toggle, false to disable.
   */
  void setToggleEnabled(bool enableToggle) { m_bEnableToggle = enableToggle; }

  /**
   * @brief Check if drop shadow is used.
   *
   * @return True if drop shadow is used, false otherwise.
   */
  bool isDropShadowUsed() const { return m_bUseDropShadow; }

  /**
   * @brief Enable or disable drop shadow.
   *
   * @param useDropShadow True to use drop shadow, false to disable.
   */
  void setDropShadowUsed(bool useDropShadow) {
    m_bUseDropShadow = useDropShadow;
  }

  /**
   * @brief Check if outline is used.
   *
   * @return True if outline is used, false otherwise.
   */
  bool isOutlineUsed() const { return m_bUseOutline; }

  /**
   * @brief Enable or disable outline.
   *
   * @param useOutline True to use outline, false to disable.
   */
  void setOutlineUsed(bool useOutline) { m_bUseOutline = useOutline; }

  /**
   * @brief Check if word wrap is enabled.
   *
   * @return True if word wrap is enabled, false otherwise.
   */
  bool isWordWrapEnabled() const { return m_bEnableWordWrap; }

  /**
   * @brief Enable or disable word wrap.
   *
   * @param enableWordWrap True to enable word wrap, false to disable.
   */
  void setWordWrapEnabled(bool enableWordWrap) {
    m_bEnableWordWrap = enableWordWrap;
  }

  /**
   * @brief Get the leading adjustment value.
   *
   * @return The leading adjustment value.
   */
  int getLeadingAdjust() const { return m_nLeadingAdjust; }

  /**
   * @brief Set the leading adjustment value.
   *
   * @param leadingAdjust The leading adjustment value to set.
   */
  void setLeadingAdjust(int leadingAdjust) { m_nLeadingAdjust = leadingAdjust; }

private:
  friend struct ControlTextLayout;
};
#pragma pack(pop)

struct ControlTextLayout {
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlText, m_sText, 0x248);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlText, m_sTooltip, 0x268);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlText, pad, 0x288);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlText, m_bEnableToggle, 0x28C);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlText, m_bUseDropShadow, 0x28D);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlText, m_bUseOutline, 0x28E);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlText, m_bEnableWordWrap, 0x28F);
  DEFINE_OFFSET_AND_STATIC_ASSERT(ControlText, m_nLeadingAdjust, 0x290);
};