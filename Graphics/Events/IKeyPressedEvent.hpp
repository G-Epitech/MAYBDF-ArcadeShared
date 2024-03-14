/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IKeyPressedEvent
*/

#pragma once

#include "IEvent.hpp"

namespace ArcadeShared::Graphics::Events
{
    class IKeyPressedEvent;
}

class ArcadeShared::Graphics::Events::IKeyPressedEvent : public IEvent {
    public:
        virtual ~IKeyPressedEvent() = default;

        /**
         * @brief Get the key pressed
         * @return key pressed
         */
        virtual const char getKeyPressed() const = 0;
};
