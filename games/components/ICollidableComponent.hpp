/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** ICollidableComponent
*/

#pragma once

#include "../IGame.hpp"
#include "IComponent.hpp"
#include "../../types/Vector.hpp"

namespace shared::games::components {
  class ICollidableComponent;
}

class shared::games::components::ICollidableComponent: public virtual IComponent {
public:
  virtual ~ICollidableComponent() = default;

  /**
   * @brief Get position of the entity (tiles)
   *
   */
  virtual types::Vector2i &getPosition(void) noexcept = 0;

  /**
   * @brief On collide event handler for the component
   * @param ctx Context of the game
   * @param target Target entity
   */
  virtual void onCollide(game::UniqueGame &ctx, std::shared_ptr<ICollidableComponent> target) = 0;
};
