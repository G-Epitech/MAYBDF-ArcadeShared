/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IKeyEvent
*/

#pragma once

#include "AKeyEvent.hpp"

namespace shared::rendering::events {
  class KeyReleaseEvent;
}
class shared::rendering::events::KeyReleaseEvent: public AKeyEvent<EventType::KEY_RELEASE> {
  public:
    KeyReleaseEvent(KeyType keyType, KeyCode keyCode): AKeyEvent(keyType, keyCode) {}
};
