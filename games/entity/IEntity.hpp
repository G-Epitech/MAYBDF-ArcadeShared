/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEntity
*/

#pragma once

#include "../games.hpp"
#include "../types/SoundProps.hpp"
#include "../../types/UUId.hpp"

namespace shared::games::entity {
    class IEntity;
}

class shared::games::entity::IEntity {
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
};
