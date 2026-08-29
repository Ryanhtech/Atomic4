cmake_minimum_required(VERSION 4.1)
set(CMAKE_CXX_STANDARD 20)

######

add_executable(AtomicLauncher)
target_sources(AtomicLauncher
    PRIVATE
        Source/launcher.cpp
)

target_link_libraries(AtomicLauncher
    PRIVATE
        AtomicLibrary
)