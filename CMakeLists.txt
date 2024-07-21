cmake_minimum_required(VERSION 3.28)
project(Pookie)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(Pookie
        src/__main.c
        src/config.h
        src/fcrypt.c
        src/fcrypt.h
        src/data.c
        src/data.h
        src/fcrypt.c
)
