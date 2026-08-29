cmake_minimum_required(VERSION 3.5)

project(oberhau)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_compile_options(-Wall -Werror)

# SRC = $(wildcard src/*.cpp)
file(GLOB SOURCES "src/*.cpp")

# TARGET = build/oberhau
add_executable(oberhau ${SOURCES})

# -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
target_link_libraries(oberhau 
    raylib 
    GL 
    m 
    pthread 
    dl 
    rt 
    X11
)