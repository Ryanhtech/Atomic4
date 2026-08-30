/**
 * @file AtomicGame.hpp
 * @brief Atomic Game header file.
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicMath.hpp>

#ifndef __ATOMIC_GAME_HPP__
#define __ATOMIC_GAME_HPP__

namespace Atomic
{
    class Game
    {
    public:
        /**
         * @brief Constructs a new Game.
         * 
         */
        Game();

        /**
         * @brief Destroys the Game.
         * 
         */
        ~Game();

        /**
         * @brief Sets the screen clear colour of the game.
         * 
         * @param colour The RGB colour to apply.
         * 
         */
        void SetClearColour(Atomic::RGB colour);

        /**
         * @brief Returns the screen clear colour of the game.
         * 
         * @return Atomic::RGB The screen clear colour of the game as an
         * Atomic::RGB instance.
         */
        Atomic::RGB GetClearColour();

    private:
        /**
         * @brief The screen clear colour. Defaults to black.
         * 
         */
        Atomic::RGB _clearColour {0, 0, 0};
    };
} // namespace Atomic

#endif
