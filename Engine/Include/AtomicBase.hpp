/**
 * @file AtomicBase.hpp
 * @brief Atomic Base header file.
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicDebug.hpp>
#include <AtomicGame.hpp>

#ifndef __ATOMIC_BASE_HPP__
#define __ATOMIC_BASE_HPP__

namespace Atomic
{
    class Base
    {
    public:
        /**
         * @brief Starts up Atomic Engine.
         * 
         * @return int The exit code. If 0, there was no error. Otherwise, refer to the documentation
         */
        static int AtomicStart(Atomic::Game *game);

    private:
        /**
         * @brief Logs the engine copyright on the screen.
         * 
         */
        static void LogCopyright();
    };
} // namespace Atomic

#endif
