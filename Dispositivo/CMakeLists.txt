cmake_minimum_required(VERSION 3.10)
project(Dispositivo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Dispositivo
    src/main.cpp
    src/DispositivoInteligente.cpp
)
