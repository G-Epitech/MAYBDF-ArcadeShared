/*
** EPITECH PROJECT, 2024
** shared-arcade
** File description:
** IRenderer
*/

#pragma once

#include <string>
#include <memory>
#include "Text/IText.hpp"
#include "Window/IWindow.hpp"

namespace ArcadeShared::Graphics
{   
    class IRenderer;
}

class ArcadeShared::Graphics::IRenderer {
    public:
      virtual ~IRenderer() = default;

      /**
       * @brief Get name of renderer
       */
      virtual std::string getRendererName() const = 0;

      /**
       * @brief Get event
       */
      virtual ArcadeShared::Event getEvent() const = 0;

      /**
       * @brief Draw GraphicsData
       */
      virtual void drawGraphicsData(ArcadeShared::GraphicsData graphicsData) const = 0;

      /**
       * @brief Display Text
       */
      virtual void displayText(ArcadeShared::Graphics::IText text) const = 0;

      /**
       * @brief Create the window
       */
      virtual void createWindow() = 0;

      /**
       * @brief Destroy the Window
       */
      virtual void destroyWindow() = 0;

    protected:
      std::unique_ptr<IWindow>      _window;
      std::string                   _name;
};
 