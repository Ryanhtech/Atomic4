/**
 * @file Game.cpp
 * @brief Game implementation
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicGame.hpp>

Atomic::Game::Game()
{

}

Atomic::Game::~Game()
{

}

void Atomic::Game::SetClearColour(Atomic::RGB colour)
{
    _clearColour = colour;
}

Atomic::RGB Atomic::Game::GetClearColour()
{
    return _clearColour;
}