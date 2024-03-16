/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEntity
*/

#pragma once

#include "../../types/UUId.hpp"
#include "../games.hpp"
#include "../types/SoundProps.hpp"
#include "../events/KeyData.hpp"

namespace shared::games::entity
{
  class IEntity;
}

class shared::games::entity::IEntity
{
   public:
    virtual ~IEntity() = default;

    /**
     * @brief Get the UUId of the entity
     *
     */
    virtual UUId GetUUId() const = 0;

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
    // TODO: Change void *ctx to a more specific type like GameContext
    virtual void onKeyPress(void *ctx, events::KeyData keyData) = 0;
};
