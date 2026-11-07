cmake_minimum_required(VERSION 3.16)

project(cpp_demo_test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp_demo src/main.cpp)
target_include_directories(cpp_demo PRIVATE src)

include(CTest)
if(BUILD_TESTING)
    add_executable(cpp_demo_tests tests/demo_tests.cpp)
    target_include_directories(cpp_demo_tests PRIVATE src)
    add_test(NAME cpp_demo_tests COMMAND cpp_demo_tests)
endif()
