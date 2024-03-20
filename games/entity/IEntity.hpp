/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEntity
*/

#pragma once

#include <uuid/uuid.h>
#include "../types/KeyData.hpp"
#include "../types/SoundProps.hpp"

namespace shared::games
{
  namespace game
  {
    class IGame;

    typedef std::unique_ptr<IGame> UniqueGame;
  }

  namespace entity
  {
    class IEntity;

    typedef std::map<uuid_t, std::shared_ptr<IEntity>> EntitiesMap;
  }
}

class shared::games::entity::IEntity
{
public:
  virtual ~IEntity() = default;

  /**
   * @brief Get Sounds properties of the entity
   *
   */
  virtual SoundProps &getSoundProps(void) noexcept = 0;

  /**
   * @brief On key pressed event handler for the entity
   * @param ctx Context of the game
   * @param keyData Key data of key pressed
   */
  virtual void onKeyPress(game::UniqueGame &ctx, events::KeyData keyData) = 0;

  /**
   * @brief On key release event handler for the entity
   * @param ctx Context of the game
   * @param keyData Key data of key released
   */
  virtual void onKeyRelease(game::UniqueGame &ctx, events::KeyData keyData) = 0;
};
