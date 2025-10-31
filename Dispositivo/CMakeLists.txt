cmake_minimum_required(VERSION 3.10)
project(ProyectoDispositivo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(ProyectoDispositivo
    main.cpp
    src/DispositivoInteligente.cpp
)
