cmake_minimum_required(VERSION 3.17)
project(daily)

set(CMAKE_CXX_STANDARD 14)
set(FILES
        lib/src/base.cpp
        lib/src/derived.cpp)
add_executable(daily main.cpp)
add_executable(derive lib/src/derived.cpp ${FILES})