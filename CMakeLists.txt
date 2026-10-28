cmake_minimum_required(VERSION 3.20)
project(tinyllm VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)   # gives clangd/your editor the real flags

add_library(tinyllm src/tensor.cpp)
target_include_directories(tinyllm PUBLIC include)
target_compile_features(tinyllm PUBLIC cxx_std_20)
target_compile_options(tinyllm PRIVATE -Wall -Wextra -Wpedantic)

add_executable(hello_tensor apps/hello_tensor.cpp)
target_link_libraries(hello_tensor PRIVATE tinyllm)
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.17.0
    GIT_SHALLOW    TRUE
)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)

 FetchContent_Declare(
    benchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git 
    GIT_TAG        v1.9.1
    GIT_SHALLOW    TRUE
 )

 set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
 set(BENCHMARK_ENABLE_INSTALL OFF CACHE BOOL "" FORCE)

 FetchContent_MakeAvailable(googletest benchmark)

enable_testing()
add_subdirectory(tests)
add_subdirectory(bench)