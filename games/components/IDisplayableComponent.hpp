/*
** EPITECH PROJECT, 2024
** arcade-shared
** File description:
** IDisplaybleComponent
*/

#pragma once

#include "IPositionComponent.hpp"
#include "../IGame.hpp"
#include "../../types/Vector.hpp"

namespace shared::games::components {
    class IDisplayableComponent;
}

class shared::games::components::IDisplayableComponent : public virtual IPositionComponent {
public:
    virtual ~IDisplayableComponent() = default;

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
