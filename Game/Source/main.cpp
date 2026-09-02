/**
 * @file main.cpp
 * @brief Main game file.
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicEngine.hpp>

#include <iostream>

#include "Assets/Game/DevelGame.hpp"

int main()
{
    // Instantiate our game, and start the engine
    DevelGame::DevelGame *develGame = new DevelGame::DevelGame();
    int exitCode = Atomic::Base::AtomicStart(develGame);

    // Don't forget to delete the game once we are finished
    delete develGame;

    return exitCode;
}