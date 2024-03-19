/*
** EPITECH PROJECT, 2024
** shared-arcade
** File description:
** IGame
*/

#pragma once

#include <memory>
#include "../entity/IEntity.hpp"
#include "../types/GameManifest.hpp"

using namespace shared::types;

namespace shared::games::game
{
  class IGame;

  typedef std::unique_ptr<IGame> UniqueGame;
  typedef unsigned long DeltaTime;
}

class shared::games::game::IGame
{
public:
  virtual ~IGame() = default;

  /**
   * @brief Compute the game each tick of the program
   *
   * @param dt Time since last tick (Time in `milliseconds`)
   */
  virtual void compute(DeltaTime dt) = 0;

  /**
   * @brief Manifest with informations of the game
   *
   */
  const GameManifest manifest;

  /**
   * @brief The minimum window size required for the game (pixels)
   *
   */
  const Vector2u windowMinSize;

  /**
   * @brief Number of tiles that represent the game
   * Tile size is managed by the renderer
   *
   */
  const Vector2u size;

  /**
   * @brief Get map of entities
   *
   */
  virtual const entity::EntitiesMap &getEntities(void) const = 0;

  /**
   * @brief Get entity by id
   *
   * @param id Id of the entity
   * @return The specific entity
   */
  virtual std::shared_ptr<entity::IEntity> getEntityById(uuid_t id) const = 0;
};
