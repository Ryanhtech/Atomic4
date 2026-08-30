cmake_minimum_required(VERSION 4.1)
set(CMAKE_CXX_STANDARD 20)

######

add_library(AtomicLibrary)
target_sources(AtomicLibrary
    PRIVATE
    Source/main.cpp

    # Base
    Source/Base/AtomicBase.cpp

    # Math
    Source/Math/Vector3D.cpp

    PUBLIC
        FILE_SET atomic_library_headers
        TYPE HEADERS
        BASE_DIRS
            Include
        FILES
            Include/AtomicEngine.hpp

            # Base
            Include/AtomicBase.hpp

            # Game
            Include/AtomicGame.hpp

            # Math
            Include/AtomicMath.hpp
)

# Add libraries to the engine
target_link_libraries(Glad)
target_link_libraries(glfw)
