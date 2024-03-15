/*
** EPITECH PROJECT, 2024
** shared-arcade
** File description:
** ITexte
*/

#pragma once

#include <string>
#include "Arcade/Arcade.hpp"

namespace ArcadeShared::Graphics
{   
    class IText;
}

class IText {
    public:

        virtual ~IText() = default;

        /**
         * @brief Set X position of string
         */
        virtual void setPositionX() = 0;

        /**
         * @brief Set Y position of string
         */
        virtual void setPositionY() = 0;

        /**
         * @brief Set string
         */
        virtual void setString() = 0;


        /**
         * @brief Get X position of string
         */
        virtual std::size_t getPositionX() const = 0;

        /**
         * @brief Get Y position of string
         */
        virtual std::size_t getPositionY() const = 0;

        /**
         * @brief Get string
         */
        virtual std::size_t getString() const = 0;

    protected:
        ArcadeShared::Vector2i  _position;
        std::string             _string;
};
