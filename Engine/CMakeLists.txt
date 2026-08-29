cmake_minimum_required(VERSION 4.1)
set(CMAKE_CXX_STANDARD 20)

######

add_library(AtomicLibrary)
target_sources(AtomicLibrary
    PRIVATE
    Source/main.cpp

    PUBLIC
        FILE_SET atomic_library_headers
        TYPE HEADERS
        BASE_DIRS
            Include
        FILES
            Include/AtomicEngine.hpp
)
