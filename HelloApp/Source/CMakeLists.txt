cmake_minimum_required(VERSION 3.5)

project(
    HelloApp
    VERSION 0.0.1
    DESCRIPTION "Hello app for testing CMake"
    LANGUAGES CXX
)

add_executable(HelloAppBinary hello.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_14)