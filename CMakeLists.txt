cmake_minimum_required(VERSION 3.21)
project(2022Problems)

set(CMAKE_CXX_STANDARD 14)

include_directories(bits)

add_executable(2022Problems
        author_solutions/antigravity.cpp
        author_solutions/bashymath.cpp
        author_solutions/battleship.cpp
        author_solutions/doodlejump.cpp
        author_solutions/friendship1.cpp
        author_solutions/helloworld.cpp
        author_solutions/hopscotch.cpp
        author_solutions/knishop.cpp
        author_solutions/lineup.cpp
        author_solutions/walktoschool.cpp
        bits/stdc++.h
        data_generators/data_gen_bashymath.cpp
        data_generators/data_gen_battleship.cpp
        data_generators/data_gen_doodlejump.cpp
        data_generators/data_gen_friendship1.cpp
        data_generators/data_gen_grocery.cpp
        data_generators/data_gen_knishop.cpp
        data_generators/data_gen_lineup.cpp
        data_generators/data_gen_passwordguess.cpp
        data_generators/data_gen_walktoschool.cpp
        tester_solutions/bashymath.cpp
        tester_solutions/battleship.cpp
        tester_solutions/friendship1.cpp
        tester_solutions/friendship2.cpp
        tester_solutions/knishop.cpp
        tester_solutions/lineup.cpp
        tester_solutions/passwordguess.cpp)
