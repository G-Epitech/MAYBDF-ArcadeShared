/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEntity
*/

#pragma once

#include "../../types/Vector.hpp"
#include "../types/TextureProps.hpp"
#include "IEntity.hpp"

namespace shared::games::entity
{
	class IDisplayableEntity;
}

class shared::games::entity::IDisplayableEntity : public IEntity
{
  public:
    virtual ~IDisplayableEntity() = default;

		/**
		 * @brief Size of the entity
		 *
		 */
    Vector2u size;

		/**
		 * @brief Entity position
		 *
		 */
		Vector2i position;

		/**
		 * @brief Texture properties
		 *
		 */
		TextureProps textureProps;

		/**
		 * @brief On click event handler for the entity
		 * @param ctx Context of the game
		 */
		// TODO: Change void *ctx to a more specific type like GameContext
		virtual void onClick(void *ctx) = 0;

		/**
		 * @brief On hover event handler for the entity
		 * @param ctx Context of the game
		 */
		// TODO: Change void *ctx to a more specific type like GameContext
		virtual void onHover(void *ctx) = 0;

		/**
		 * @brief On collide event handler for the entity
		 * @param ctx Context of the game
		 * @param target Target entity
		 */
		// TODO: Change void *ctx to a more specific type like GameContext
		virtual void onCollide(void *ctx, const IDisplayableEntity &target) = 0;
};
