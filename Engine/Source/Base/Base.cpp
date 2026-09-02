/**
 * @file AtomicBase.cpp
 * @brief AtomicEngine core file.
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicBase.hpp>

int Atomic::Base::AtomicStart(Atomic::Game *game)
{
    LogCopyright();
    return 0;
}

void Atomic::Base::LogCopyright()
{
    Atomic::Log::Info(L"Atomic::Base", L"AtomicEngine version 4");
    Atomic::Log::Info(L"Atomic::Base", L"Copyright (c) 2026 Ryanhtech Labs.");
}