/*
** EPITECH PROJECT, 2024
** arcade_shared
** File description:
** Text
*/

#pragma once

#include <iostream>
#include "./Vector.hpp"

namespace shared::types {
    typedef enum {
        LEFT,
        CENTER,
        RIGHT
    } TextAlign;

    typedef enum {
        BOTTOM,
        MIDDLE,
        TOP
    } TextVerticalAlign;
}
