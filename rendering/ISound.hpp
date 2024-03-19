/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** ISound
*/

#pragma once

#include "types/Sound.hpp"

namespace shared::rendering
{
  class ISound;
}

class shared::rendering::ISound {
  public:
    virtual ~ISound() = default;

    /**
     * @brief Get the state of the sound
     *
     * @param state State of sound playing
     * @return SoundState
     */
    virtual void setState(SoundState state) = 0;

    /**
     * @brief Get the state of the sound
     *
     * @return Current state of the sound
     */
    virtual SoundState getState() const = 0;

    /**
     * @brief Set the volume of the sound
     *
     * @param volume Volume of the sound
     */
    virtual void setVolume(SoundVolume volume) = 0;

    /**
     * @brief Get the volume of the sound
     *
     * @return Volume of the sound
     */
    virtual SoundVolume getVolume() const = 0;
};
