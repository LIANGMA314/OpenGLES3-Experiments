cmake_minimum_required( VERSION 3.5 )

project( EglSDL )

find_library( SDL2 EGL GLESv2 )
 
file(GLOB SOURCE_FILES
    "egl.c"
)

add_executable(EglSDL ${SOURCE_FILES})

target_link_libraries(EglSDL SDL2 EGL GLESv2)