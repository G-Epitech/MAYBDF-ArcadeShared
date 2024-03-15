/*
** EPITECH PROJECT, 2024
** shared-arcade
** File description:
** ITexte
*/

#pragma once

#include <string>

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
        std::size_t _positionX;
        std::size_t _positionY;
        std::string _string;
};
