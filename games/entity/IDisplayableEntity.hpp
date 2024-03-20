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
   * @brief Get size of the entity (tiles)
   *
   */
  virtual Vector2u &getSize(void) noexcept = 0;

  /**
   * @brief Get Z index that is usefull for display prioroty
   *
   */
  virtual unsigned int &getZIndex(void) noexcept = 0;

  /**
   * @brief Get position of the entity (tiles)
   *
   */
  virtual Vector2i &getPosition(void) noexcept = 0;

  /**
   * @brief Get texture properties
   *
   */
  virtual TextureProps &getTextureProps(void) noexcept = 0;

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
