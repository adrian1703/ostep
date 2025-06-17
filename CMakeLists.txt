cmake_minimum_required(VERSION 3.31)
project(ostep C)

set(CMAKE_C_STANDARD 11)

add_executable(ostep into/cpu.c
        into/common.c
        into/common.h)
