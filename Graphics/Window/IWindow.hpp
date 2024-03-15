/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IWindow
*/

#pragma once

#include <string>
#include <cstddef>

namespace ArcadeShared::Graphics
{
    class IWindow;
}

class ArcadeShared::Graphics::IWindow {
    public:
        virtual ~IWindow() = default;

        /**
         * @brief Set the Width of the window
         * @param width Width's window
         */
        virtual void setWidth(std::size_t width) = 0;

        /**
         * @brief Set height of the window
         * @param height Height of the window
         */
        virtual void setHeight(std::size_t height) = 0;

        /**
         * @brief Set the title of the window
         * @param title Title of the window
         */
        virtual void setTitle(const std::string &title) = 0;

        /**
         * @brief Set the frame rate of renderer
         * @param fps Renderer frames rate
         */
        virtual void setFps(std::size_t fps) = 0;

        /**
         * @brief Get the width of the window
         * @return Width of the window
         */
        virtual std::size_t getWidth() const = 0;

        /**
         * @brief Get the height of the window
         * @return Height of the window
         */
        virtual std::size_t getHeight() const = 0;

        /**
         * @brief Get the title of the window
         * @return Title of the window
         */
        virtual std::string getTitle() const = 0;

        /**
         * @brief Get the fps of the window
         * @return Fps of the window
         */
        virtual std::size_t getFps() const = 0;

        /**
         * @brief Destroy the Window
         */
        virtual void clearWindow() = 0;

        /**
         * @brief Destroy the Window
         */
        virtual void displayWindow() = 0;

        /**
         * @brief Get fullscreen mode of the window
         * @return Fullscreen state
         */
        virtual bool getFullScreenState() const = 0;

        /**
         * @brief Get the open state of the window
         * @return Open state
         */
        virtual bool isOpen() const = 0;


    protected:
        std::size_t _width;
        std::size_t _height;
        std::size_t _fps;
        std::string _title;
};
