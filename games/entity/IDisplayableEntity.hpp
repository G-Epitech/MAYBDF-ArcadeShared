/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEntity
*/

#pragma once

#include "IEntity.hpp"
#include "../game/IGame.hpp"
#include "../../types/Vector.hpp"
#include "../types/TextureProps.hpp"

namespace shared::games::entity
{
  class IDisplayableEntity;
}

class shared::games::entity::IDisplayableEntity : public IEntity
{
public:
  virtual ~IDisplayableEntity() = default;

  /**
   * @brief Size of the entity (tiles)
   *
   */
  Vector2u size;

  /**
   * @brief Z index that is usefull for display prioroty
   *
   */
  unsigned int zIndex;

  /**
   * @brief Entity position (tiles)
   *
   */
  Vector2i position;

  /**
   * @brief Texture properties
   *
   */
  TextureProps textureSources;

  /**
   * @brief On click event handler for the entity
   * @param ctx Context of the game
   */
  virtual void onMousePress(game::UniqueGame &ctx) = 0;

  /**
   * @brief On release event handler for the entity
   * @param ctx Context of the game
   */
  virtual void onMouseRelease(game::UniqueGame &ctx) = 0;

  /**
   * @brief On hover event handler for the entity
   * @param ctx Context of the game
   */
  virtual void onMouseHover(game::UniqueGame &ctx) = 0;

  /**
   * @brief On collide event handler for the entity
   * @param ctx Context of the game
   * @param target Target entity
   */
  virtual void onCollide(game::UniqueGame &ctx, std::shared_ptr<IDisplayableEntity> target) = 0;
};
