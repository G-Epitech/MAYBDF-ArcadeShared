/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEntity
*/

#pragma once

#include "../../types/UUId.hpp"
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

    typedef std::map<UUId, std::shared_ptr<IEntity>> EntitiesMap;
  }
} 

class shared::games::entity::IEntity
{
public:
  virtual ~IEntity() = default;

  /**
   * @brief Sounds properties of the entity
   *
   */
  SoundsPropsMap soundsProps;

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
