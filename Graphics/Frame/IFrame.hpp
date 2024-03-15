/*
** EPITECH PROJECT, 2024
** shared-arcade
** File description:
** IFrame
*/

#pragma once

#include <string>
#include "Color/IColor.hpp"

namespace ArcadeShared::Graphics
{   
    class IFrame;
}

class IFrame {
    public:

        virtual ~IFrame() = default;

        /**
         * @brief Set X position of Frame
         */
        virtual void setPositionX() = 0;

        /**
         * @brief Set Y position of Frame
         */
        virtual void setPositionY() = 0;

        /**
         * @brief Set texture path of Frame
         */
        virtual void setPathTexture() = 0;


        /**
         * @brief Get color of Frame
         */
        virtual void getColorTexture() = 0;

        /**
         * @brief Get X position of Frame
         */
        virtual std::size_t getPositionX() const = 0;

        /**
         * @brief Get Y position of Frame
         */
        virtual std::size_t getPositionY() const = 0;

        /**
         * @brief Get texture path of Frame
         */
        virtual std::string getPathTexture() const = 0;


        /**
         * @brief Get color of Frame
         */
        virtual ArcadeShared::Graphics::IColor getColorTexture() const = 0;

    private:
        std::size_t                        _positionX;
        std::size_t                        _positionY;
        std::string                        _pathTexture;
        ArcadeShared::Graphics::IColor*    _colorTexture;
};
