/*
** EPITECH PROJECT, 2024
** Color.hpp
** File description:
** Color class
*/

#pragma once

namespace shared::types
{
    typedef struct ColorType {
        ColorType(u_char r, u_char g, u_char b, u_char a) : r(r), g(g), b(b), a(a) {}

        u_char r;
        u_char g;
        u_char b;
        u_char a;
    } Color;
}
