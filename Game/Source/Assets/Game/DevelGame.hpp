/**
 * @file DevelGame.hpp
 * @brief DevelGame header file
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicEngine.hpp>

#ifndef __DEVEL_GAME_HPP__
#define __DEVEL_GAME_HPP__

namespace DevelGame
{
    class DevelGame : public Atomic::Game
    {
    public:
        DevelGame();
        ~DevelGame();
    };
} // namespace Atomic


#endif