/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEntity
*/

#pragma once

#include "../../types/Vector.hpp"
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
};
