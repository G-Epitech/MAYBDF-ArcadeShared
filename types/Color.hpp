/*
** EPITECH PROJECT, 2024
** Color.hpp
** File description:
** Color class
*/

#pragma once

namespace shared::types
{
    typedef Primary unsigned char;
    typedef struct {
        Color(Primary r, Primary g, Primary b, Primary a) : r(r), g(g), b(b), a(a){};

        Primary r;
        Primary g;
        Primary b;
        Primary a;
    } Color;
}
