/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IRendererFactory
*/

#pragma once

#include <memory>
#include "IRenderer.hpp"

namespace shared::graphics {
  class IGraphicsFactory;
}

class shared::graphics::IGraphicsFactory {
  public:
    virtual ~IGraphicsFactory() = default;

    /**
     * @brief Create a renderer object
     *
     * @return Created renderer object
     */
    virtual std::unique_ptr<IRenderer> createRenderer() = 0;

    /**
     * @brief Create a sound object
     *
     * @param path Path of the sound file
     * @return Created sound object
     */
    virtual std::shared_ptr<ISound> createSound(const std::string &path) = 0;

    /**
     * @brief Create a texture object
     *
     * @param path Path of the texture file
     * @return Created texture object
     */
    virtual std::shared_ptr<ITexture> createTexture(const std::string &path) = 0;
};
