cmake_minimum_required(VERSION 3.10)
project(sin_array_sum)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Опция для выбора типа массива
option(USE_DOUBLE "Use double instead of float" OFF)

if(USE_DOUBLE)
    add_compile_definitions(ARRAY_TYPE=double)
else()
    add_compile_definitions(ARRAY_TYPE=float)
endif()

add_executable(sin_array_sum main.cpp)

# Убираем /RTC1 при включении оптимизации в MSVC
if(MSVC)
    target_compile_options(sin_array_sum PRIVATE /O2 /W4)
    string(REPLACE "/RTC1" "" CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
else()
    target_compile_options(sin_array_sum PRIVATE -O2 -Wall)
endif()
