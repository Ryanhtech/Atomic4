/**
 * @file AtomicDebug.hpp
 * @brief Atomic Debug header file
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <string>

#ifndef __ATOMIC_DEBUG_HPP__
#define __ATOMIC_DEBUG_HPP__

namespace Atomic
{
    class Log
    {
    public:
        /**
         * @brief Logs a verbose message.
         * 
         * @see Atomic::Log::Info
         */
        static void Verbose(std::wstring component, std::wstring message);
        
        /**
         * @brief Logs a debug message.
         * 
         * @see Atomic::Log::Info
         */
        static void Debug(std::wstring component, std::wstring message);
        
        /**
         * @brief Logs an info message.
         * 
         * @param component The name of the component that sends the message.
         * @param message The message text.
         */
        static void Info(std::wstring component, std::wstring message);

        /**
         * @brief Logs a warning message.
         * 
         * @see Atomic::Log::Info
         */
        static void Warn(std::wstring component, std::wstring message);

        /**
         * @brief Logs an error message.
         * 
         * @see Atomic::Log::Info
         */
        static void Error(std::wstring component, std::wstring message);
        
        /**
         * @brief Logs a fatal error message.
         * 
         * @see Atomic::Log::Info
         */
        static void Fatal(std::wstring component, std::wstring message);
    };
} // namespace Atomic

#endif