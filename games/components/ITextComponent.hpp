/*
** EPITECH PROJECT, 2024
** ITextComponent.hpp
** File description:
** ITextComponent class
*/

#pragma once

#include "IPositionComponent.hpp"
#include "../../types/Vector.hpp"
#include "../../types/Color.hpp"

namespace shared::games::components {
    class ITextComponent;

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

    typedef struct {
        std::string path;       // Path of the font
        types::Vector2u size;   // Font size
    } TextFontProps;

    typedef struct {
        TextAlign align;                    // Alignment of the text
        TextVerticalAlign verticalAlign;    // Vertical alignment of the text
        types::Color color;                 // Color of the text
    } TextProps;
}

class shared::games::components::ITextComponent : public virtual IPositionComponent {
public:
    virtual ~ITextComponent() = default;

    /**
     * @brief Get text props of the entity
     *
     * @return text props
     */
    virtual TextProps getTextProps() noexcept = 0;

    /**
     * @brief Get size of the entity (tiles)
     *
     */
    virtual Vector2u &getSize() noexcept = 0;

    /**
     * @brief Get Z index that is usefull for display prioroty
     *
     */
    virtual unsigned int &getZIndex() noexcept = 0;

    /**
     * @brief On click event handler for the entity
     * @param ctx Context of the game
     */
    virtual void onMousePress(std::shared_ptr <IGame> &ctx) = 0;

    /**
     * @brief On release event handler for the entity
     * @param ctx Context of the game
     */
    virtual void onMouseRelease(std::shared_ptr <IGame> &ctx) = 0;

    /**
     * @brief On hover event handler for the entity
     * @param ctx Context of the game
     */
    virtual void onMouseHover(std::shared_ptr <IGame> &ctx) = 0;
};
