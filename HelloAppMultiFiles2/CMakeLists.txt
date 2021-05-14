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

#Single Target
#add_executable(HelloAppBinary src/main.cpp
#			      src/dog.cpp
# 			      src/operations.cpp
#			      src/log.cpp)

#target_compile_features(HelloAppBinary PRIVATE cxx_std_14)
#target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

#Include Libraries
add_library(operations STATIC src/operations.cpp)
target_compile_features(operations PUBLIC cxx_std_14)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(dog STATIC src/dog.cpp)
target_compile_features(dog PUBLIC cxx_std_14)
target_include_directories(dog PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(logger STATIC logger/src/log.cpp) # made logger a self-contained library
target_compile_features(logger PUBLIC cxx_std_14)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)

add_executable(HelloAppBinary src/main.cpp)
target_compile_features(HelloAppBinary PUBLIC cxx_std_14)
target_include_directories(HelloAppBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(HelloAppBinary PUBLIC operations
                                            dog
                                            logger)
