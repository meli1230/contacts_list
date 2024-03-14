cmake_minimum_required(VERSION 3.27)
project(Practical_project C)

set(CMAKE_C_STANDARD 11)

add_executable(Practical_project main.c
        contacts.c
        contacts.h
        sorting.c
        sorting.h
)
