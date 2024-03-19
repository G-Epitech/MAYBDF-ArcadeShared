/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IWindow
*/

#pragma once

#include <string>
#include "../../types/types.hpp"
#include "types/Window.hpp"

using namespace shared::types;

namespace shared::rendering
{
  class IWindow;

  typedef enum
  {
    WINDOWED,
    FULLSCREEN
  } WindowMode;
}

class shared::rendering::IWindow {
  public:
    virtual ~IWindow() = default;

    /**
     * @brief Set the title of current window
     *
     * @param title Title of the window
     */
    virtual void setTitle(const std::string &title) = 0;

    /**
     * @brief Get the title of current window
     *
     * @return Title of the window
     */
    virtual std::string getTitle() const = 0;

    /**
     * @brief Set the size of the window
     *
     * @param size Size of the window
     */
    virtual void setSize(Vector2u size) = 0;

    /**
     * @brief Get the size of the window
     *
     * @return Size of the window
     */
    virtual Vector2u getSize() const = 0;

    /**
     * @brief Set the framerate Limit of the window
     *
     * @param fps Frame per seconds
     */
    virtual void setFramerateLimit(unsigned int fps) = 0;

    /**
     * @brief Get the framerate Limit of the window
     *
     * @return Frame per seconds
     */
    virtual unsigned int getFramerateLimit() const = 0;

    /**
     * @brief Set the mode of the window
     *
     * @param mode Mode to apply to the window
     */
    virtual void setWindowMode(WindowMode mode) = 0;

    /**
     * @brief Get the mode of the window
     *
     * @return Mode of the window
     */
    virtual WindowMode getWindowMode() const = 0;

    /**
     * @brief Set the icon of the window
     *
     * @param iconPath Path to the icon
     */
    virtual void setIcon(const std::string &iconPath) = 0;

    /**
     * @brief Get the icon of the window
     *
     * @return Path to the icon
     */
    virtual std::string getIcon() const = 0;
};
