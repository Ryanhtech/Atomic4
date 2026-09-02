/**
 * @file GameWindow.cpp
 * @brief GameWindow implementation
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicWindow.hpp>

Atomic::GameWindow::GameWindow()
{

}

Atomic::GameWindow::~GameWindow()
{

}

void Atomic::GameWindow::InitialiseGlfw()
{
    // Initialise GLFW now.
    if (!glfwInit()) {
        // TODO throw custom exception
    }
}