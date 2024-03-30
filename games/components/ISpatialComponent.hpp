/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** ISpatialComponent
*/

#pragma once

#include "IComponent.hpp"
#include "../../types/Vector.hpp"

namespace shared::games::components {
  class ISpatialComponent;
}

class shared::games::components::ISpatialComponent: public virtual IComponent
{
  public:
    virtual ~ISpatialComponent() = default;

    /**
     * @brief Get position of the entity (tiles)
     *
     */
    virtual types::Vector2i &getPosition(void) noexcept = 0;

    /**
     * @brief Get size of the entity (tiles)
     *
     */
    virtual types::Vector2i &getSize(void) noexcept = 0;
};
