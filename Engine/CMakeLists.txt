cmake_minimum_required(VERSION 4.1)
set(CMAKE_CXX_STANDARD 20)

######

add_library(AtomicLibrary)
target_sources(AtomicLibrary
    PRIVATE
    Source/main.cpp

    # Base
    Source/Base/Base.cpp

    # Debug
    Source/Debug/Log.cpp

    # Game
    Source/Game/Game.cpp

    # Math
    Source/Math/RGB.cpp
    Source/Math/Vector3D.cpp

    # Window
    Source/Window/GameWindow.cpp

    PUBLIC
        FILE_SET atomic_library_headers
        TYPE HEADERS
        BASE_DIRS
            Include
        FILES
            Include/AtomicEngine.hpp

            # Base
            Include/AtomicBase.hpp

            # Debug
            Include/AtomicDebug.hpp

            # Game
            Include/AtomicGame.hpp

            # Math
            Include/AtomicMath.hpp

            # Window
            Include/AtomicWindow.hpp
)

# Add libraries to the engine
target_link_libraries(AtomicLibrary Glad)
target_link_libraries(AtomicLibrary glfw)
