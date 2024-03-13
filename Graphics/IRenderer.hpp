/*
** EPITECH PROJECT, 2024
** shared-arcade
** File description:
** IRenderer
*/

#pragma once

#include "IWindow.hpp"

namespace ArcadeShared::Graphics
{
    class IRenderer;
}

class ArcadeShared::Graphics::IRenderer {
  public:
    virtual ~IRenderer() = default;

    /**
     * @brief Set the Window object of renderer
     * @param window Renderer's window
     */
    virtual void setWindow(IWindow &window) = 0;

    /**
     * @brief Set the frame rate of renderer
     * @param fps Renderer frames rate
     */
    virtual void setFps(std::size_t fps) = 0;

    /**
     * @brief Get the window object of renderer
     * @return Renderer window
     */
    virtual IWindow &getWindow() const = 0;

    /**
     * @brief Get the Fps object of renderer
     * @return Renderer frames rate
     */
    virtual std::size_t getFps() const = 0;

  protected:
    IWindow     &_window;
    std::size_t _fps;
};
