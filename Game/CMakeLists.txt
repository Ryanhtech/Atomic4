cmake_minimum_required(VERSION 4.1)
set(CMAKE_CXX_STANDARD 20)

######

add_executable(AtomicGame)
target_sources(AtomicGame
    PRIVATE
        Source/main.cpp
)

target_link_libraries(AtomicGame
    PRIVATE
        AtomicLibrary
)