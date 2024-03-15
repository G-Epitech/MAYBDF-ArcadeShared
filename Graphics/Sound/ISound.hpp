/*
** EPITECH PROJECT, 2024
** MAYBDF-ArcadeShared [WSL: Ubuntu-22.04]
** File description:
** ISound
*/

#pragma once

#include <string>

namespace ArcadeShared::Graphics
{
    class ISound;
}

class ArcadeShared::Graphics::ISound {
    public:

        // Sound status
        typedef enum {
            Stopped,    // Sound is stopped (reached the end of the soundbuffer)
            Paused,     // Sound is paused
            Playing     // Sound is playing
        } Status;

        virtual ~ISound() = default;

        /**
         * @brief Load sound from file
         * @param filename Filename of the sound
         */
        virtual void loadSoundFromFile(const std::string &filename) = 0;

        /**
         * @brief Play the sound
         */
        virtual void play() = 0;

        /**
         * @brief Stop the sound
         */
        virtual void stop() = 0;

        /**
         * @brief Pause the sound
         */
        virtual void pause() = 0;

        /**
         * @brief Make the sound loop
         * @param loop Loop the sound
         */
        virtual void loop(bool loop) = 0;

        /**
         * @brief Get if the sound is looping
         * @return Looping status
        */
        virtual bool getLoop() const = 0;

        /**
         * @brief Get status of sound
         * @return Status
        */
        virtual ArcadeShared::Graphics::ISound::Status getSoundStatus() const = 0;


    protected:
        ArcadeShared::Graphics::ISound::Status          _soundStatus;
        bool                                            _loop;
};
