/**
 * @file AtomicBase.hpp
 * @brief Atomic Base header file.
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicGame.hpp>

#ifndef __ATOMIC_BASE_HPP__
#define __ATOMIB_BASE_HPP__

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
    };
} // namespace Atomic

#endif
