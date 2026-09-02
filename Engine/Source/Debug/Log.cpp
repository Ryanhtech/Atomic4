/**
 * @file Log.cpp
 * @brief Log class implementation
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicDebug.hpp>

void Atomic::Log::Verbose(std::wstring component, std::wstring message)
{
    DisplayMessage(L"V", component, message);
}

void Atomic::Log::Debug(std::wstring component, std::wstring message)
{
    DisplayMessage(L"D", component, message);
}

void Atomic::Log::Info(std::wstring component, std::wstring message)
{
    DisplayMessage(L"I", component, message);
}

void Atomic::Log::Warn(std::wstring component, std::wstring message)
{
    DisplayMessage(L"W", component, message);
}

void Atomic::Log::Error(std::wstring component, std::wstring message)
{
    DisplayMessage(L"E", component, message);
}

void Atomic::Log::Fatal(std::wstring component, std::wstring message)
{
    DisplayMessage(L"F", component, message);
}

void Atomic::Log::DisplayMessage(std::wstring prefix, std::wstring component, std::wstring message)
{
    // Get the current time
    const std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    std::time_t timeNow = std::chrono::system_clock::to_time_t(now);

    // Convert this time to local time
    tm *localTime = std::localtime(&timeNow);

    // Use strftime to format the time into a C-style string. We'll suppose we can't exceed
    // 127 characters with the specified format options. 127 chars is actually way too much.
    char formattedTime[128];
    std::strftime(formattedTime, 127, "%d/%m/%Y %H:%M:%S", localTime);

    // Print the log message.
    std::wcout << std::wstring(&formattedTime[0], &formattedTime[std::strlen(formattedTime)]) + L" [" + component + L"] " + prefix + L": " + message + L"\n";
}