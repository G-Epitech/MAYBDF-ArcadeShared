/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IWindow
*/

#pragma once

#include <string>
#include <cstddef>

class IWindow {
    public:
        virtual ~IWindow() = default;

        // Properties
        virtual void setWidth(std::size_t width) = 0;
        virtual void setHeight(std::size_t height) = 0;
        virtual void setFps(std::size_t fps) = 0;
        virtual void setTitle(const std::string &title) = 0;
        virtual void setFullScreen(bool fullScreen) = 0;

        virtual std::size_t getWidth() const = 0;
        virtual std::size_t getHeight() const = 0;
        virtual std::size_t getFps() const = 0;
        virtual std::string getTitle() const = 0;
        virtual bool getFullScreen() const = 0;

        // Methods
        virtual bool isOpen() const = 0;

    protected:
        std::size_t _width;
        std::size_t _height;
        std::size_t _fps;
        std::string _title;
        bool        _fullScreen;
};
