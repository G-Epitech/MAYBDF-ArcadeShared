/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** ISound
*/

#pragma once

#include "types/SoundVolume.hpp"

namespace shared::graphics
{
  class ISound;
}

class shared::graphics::ISound {
  public:
    virtual ~ISound() = default;

    /**
     * @brief Play the sound
     *
     */
    virtual void play(void) = 0;

    /**
     * @brief Pause the sound
     *
     */
    virtual void pause(void) = 0;

    /**
     * @brief Stop the sound
     *
     */
    virtual void stop(void) = 0;

    /**
     * @brief Set the volume of the sound
     *
     * @param volume Volume of the sound
     */
    virtual void setVolume(SoundVolume volume) = 0;
};
