cmake_minimum_required(VERSION 3.20)
project(tinyllm VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)   # gives clangd/your editor the real flags

add_library(tinyllm src/tensor.cpp)
target_include_directories(tinyllm PUBLIC include)
target_compile_features(tinyllm PUBLIC cxx_std_20)
target_compile_options(tinyllm PRIVATE -Wall -Wextra -Wpedantic)

add_executable(hello_tensor apps/hello_tensor.cpp)
target_link_libraries(hello_tensor PRIVATE tinyllm)