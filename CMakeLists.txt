cmake_minimum_required(VERSION 3.28)
project(OMSIScriptBridge)

set(CMAKE_CXX_STANDARD 17)

add_executable(OMSIScriptBridge main.cpp
        lib/VarConvert.cpp
        lib/VarConvert.hpp
        lib/StringVarConvert.hpp
        lib/StringVarConvert.cpp)
