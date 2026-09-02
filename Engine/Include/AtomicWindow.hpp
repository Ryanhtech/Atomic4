/**
 * @file AtomicWindow.hpp
 * @brief AtomicWindow header file
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <GLFW/glfw3.h>

#ifndef __ATOMIC_WINDOW_HPP__
#define __ATOMIC_WINDOW_HPP__

namespace Atomic
{
    class GameWindow
    {
    public:
        /**
         * @brief Creates a new game window using GLFW.
         * 
         */
        GameWindow();

        /**
         * @brief Destroys the GameWindow instance.
         * 
         */
        ~GameWindow();

        /**
         * @brief Attempts to initialise the GLFW library that we use to display windows
         * in a cross-platform fashion.
         * 
         */
        static void InitialiseGlfw();

    private:
        /**
         * @brief The GLFW window struct that we'll use.
         * 
         */
        GLFWwindow *window;
    };
} // namespace Atomic


#endif