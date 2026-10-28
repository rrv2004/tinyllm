add_executable(tinyllm_bench tensor_bench.cpp)
target_link_libraries(tinyllm_bench PRIVATE tinyllm benchmark::benchmark_main)
target_compile_options(tinyllm_bench PRIVATE -Wall -Wextra -Wpedantic)