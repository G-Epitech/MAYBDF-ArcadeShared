/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IMouseClickedEvent
*/

#pragma once

#include "IEvent.hpp"
#include "../Types/Types.hpp"
#include "../Mouse/Mouse.hpp"

namespace ArcadeShared::Graphics::Events
{
    class IMouseClickedEvent;
}

class ArcadeShared::Graphics::Events::IMouseClickedEvent : public IEvent {
    public:
        virtual ~IMouseClickedEvent() = default;

        /**
         * @brief Get the position of the click
         * @return position of the click
         */
        virtual const Vector2i &getPosition() const = 0;

        /**
         * @brief Get the button of the click
         * @return button of the click
         */
        virtual Mouse::Button getButton() const = 0;
};
