cmake_minimum_required(VERSION 3.17)
project(ogti)

set(CMAKE_CXX_STANDARD 14)

add_executable(LW1_c_style_io LW1/c_style_io.cpp)
add_executable(LW1_c_style_io2 LW1/c_style_io2.cpp)
add_executable(LW1_io_streams LW1/io_streams.cpp)
add_executable(LW2_branching LW2/branching.cpp)
add_executable(LW2_switch LW2/switch.cpp)
add_executable(LW3_loop LW3/loop.cpp)
add_executable(LW3_negative_values LW3/negative_values.cpp)
add_executable(LW4_replacing_in_array LW4/replacing_in_array.cpp)