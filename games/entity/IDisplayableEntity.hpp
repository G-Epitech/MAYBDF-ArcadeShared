/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEntity
*/

#pragma once

#include "../../types/Vector.hpp"
#include "../types/TextureProps.hpp"
#include "../game/IGame.hpp"
#include "IEntity.hpp"

namespace shared::games::entity
{
	class IDisplayableEntity;

	typedef std::unique_ptr<IDisplayableEntity> UnqiueDisplayableEntity;
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
	virtual void onClick(game::UniqueGame &ctx) = 0;

	/**
	 * @brief On hover event handler for the entity
	 * @param ctx Context of the game
	 */
	virtual void onHover(game::UniqueGame &ctx) = 0;

	/**
	 * @brief On collide event handler for the entity
	 * @param ctx Context of the game
	 * @param target Target entity
	 */
	virtual void onCollide(game::UniqueGame &ctx, UnqiueDisplayableEntity &target) = 0;
};
