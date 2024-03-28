/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IGraphicsException.hpp
*/

#pragma once

#include <exception>

namespace shared::graphics::exceptions {
    class IGraphicsException;
}

class shared::graphics::exceptions::IGraphicsException: public std::exception {
public:
    virtual ~IGraphicsException() = default;

    /**
     * @brief Get error details
     * @return String containing error details
     */
    virtual const char *what() const noexcept = 0;

    /**
     * @brief Get error location
     * @return String containing error location
     */
    virtual const char *where() const noexcept = 0;
};
