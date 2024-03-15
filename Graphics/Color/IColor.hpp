/*
** EPITECH PROJECT, 2024
** shared-arcade
** File description:
** IColor
*/

#pragma once

#include <string>

namespace ArcadeShared::Graphics
{   
    class IColor;
}

class IColor {
    public:

        virtual ~IColor() = default;

        /**
         * @brief Set color metrie r
         */
        virtual void setRColor() = 0;

        /**
         * @brief Set color metrie g
         */
        virtual void setGColor() = 0;

        /**
         * @brief Set color metrie b
         */
        virtual void setBColor() = 0;

        /**
         * @brief Set color metrie a
         */
        virtual void setAColor() = 0;

        /**
         * @brief Set color metrie r
         */
        virtual std::size_t getRColor() const = 0;

        /**
         * @brief get color metrie g
         */
        virtual std::size_t getGColor() const = 0;

        /**
         * @brief get color metrie b
         */
        virtual std::size_t getBColor() const = 0;

        /**
         * @brief get color metrie a
         */
        virtual std::size_t getAColor() const = 0;

    protected:
        std::size_t _r;
        std::size_t _g;
        std::size_t _b;
        std::size_t _a;
};
