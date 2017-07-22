cmake_minimum_required(VERSION 3.7)
project(in_lab)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Account.cpp
        Account.h
        SavingsAccount.cpp
        SavingsAccount.h
        w8_in_lab.cpp)

add_executable(in_lab ${SOURCE_FILES})