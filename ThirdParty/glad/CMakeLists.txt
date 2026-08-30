cmake_minimum_required(VERSION 4.1)

######

add_library(Glad)
target_sources(Glad
    PRIVATE
        src/glad.c
    
    PUBLIC
        FILE_SET glad_library_headers
        TYPE HEADERS
        BASE_DIRS
            include
        FILES
            include/glad/glad.h
            include/KHR/khrplatform.h
)