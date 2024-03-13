/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IEvent
*/

#pragma once

namespace ArcadeShared::Graphics::Events
{
    class IEvent;
}

class ArcadeShared::Graphics::Events::IEvent {
    public:
        virtual ~IEvent() = default;

        // Event type
        typedef enum {
            Closed,                 // The window requested to be closed
            Resized,                // The window was resized
            TextEntered,           // A character was entered
            KeyPressed,            // A key was pressed
            KeyReleased,           // A key was released
            MouseWheelMoved,       // The mouse wheel was scrolled
            MouseClicked,    // A mouse button was pressed
            MouseReleased,   // A mouse button was released
            MouseMoved,            // The mouse cursor moved
            MouseEntered,          // The mouse cursor entered the area of the window
            MouseLeft              // The mouse cursor left the area of the window
        } EventType;
};
