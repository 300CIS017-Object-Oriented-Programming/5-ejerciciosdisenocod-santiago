cmake_minimum_required(VERSION 3.30)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        Ciudadano.cpp
        Ciudadano.h
        Empleado.cpp
        Empleado.h
        SistemaReciclaje.cpp
        SistemaReciclaje.h)
