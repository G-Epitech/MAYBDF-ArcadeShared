/*
** EPITECH PROJECT, 2024
** shared-arcade
** File description:
** IGame
*/

#pragma once

#include <memory>

#include "../types/GameManifest.hpp"
#include "../entity/IEntity.hpp"

using namespace shared::types;

namespace shared::games::game
{
  class IGame;

  typedef std::unique_ptr<IGame> UniqueGame;
}

class shared::games::game::IGame
{
public:
  virtual ~IGame() = default;

  /**
   * @brief Compute the game each tick of the program
   *
   */
  virtual void compute(void) = 0;

  /**
   * @brief Manifest with informations of the game
   *
   */
  const GameManifest manifest;

  /**
   * @brief The minimum window size required for the game
   *
   */
  const Vector2u windowMinSize;

  /**
   * @brief Number of tiles that represent the game
   * Tile size is managed by the renderer
   *
   */
  const Vector2u size;

protected:
  /**
   * @brief Register entity to the game
   * @warning The unique ptr will be moved to the game map. The ownership will be updated.
   *
   * @param entity The unique ptr of the entity
   * @return New unique ID of the entity
   */
  virtual UUId _registerEntity(entity::UniqueEntity &entity) = 0;

  /**
   * @brief Map of entities
   *
   */
  entity::EntitiesMap _entities;
};
