cmake_minimum_required(VERSION 3.5)

project(
    HelloApp
    VERSION 0.0.2
    DESCRIPTION "Hello app for testing CMake"
    LANGUAGES CXX
)

#Globing (not recommended)
#file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
#add_executable(HelloAppBinary ${SOURCE_FILES})

#Target
add_executable(HelloAppBinary src/main.cpp src/dog.cpp src/operations.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_14)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

