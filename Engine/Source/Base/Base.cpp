/**
 * @file AtomicBase.cpp
 * @brief AtomicEngine core file.
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicBase.hpp>
#include <GLFW/glfw3.h>

int Atomic::Base::AtomicStart(Atomic::Game *game)
{
    // Log the copyright
    LogCopyright();



    return 0;
}

void Atomic::Base::LogCopyright()
{
    Atomic::Log::Info(L"Atomic::Base", L"AtomicEngine version 4");
    Atomic::Log::Info(L"Atomic::Base", L"Copyright (c) 2026 Ryanhtech Labs.");
}