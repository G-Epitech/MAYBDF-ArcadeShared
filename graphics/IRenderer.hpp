/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IRenderer
*/

#pragma once

#include <memory>
#include "IWindow.hpp"
#include "ISound.hpp"
#include "ITexture.hpp"
#include "types/EntityProps.hpp"

namespace shared::graphics
{
  class IRenderer;
}

class shared::graphics::IRenderer
{
  public:
  virtual ~IRenderer() = default;

  /**
   * @brief Get the window object
   *
   */
  virtual std::unique_ptr<IWindow> &getWindow() = 0;

  /**
   * @brief Render the entity with given properties
   *
   * @param props Properties of the entity
   */
  virtual void render(EntityProps &props) = 0;
};
