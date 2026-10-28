add_executable(tinyllm_tests tensor_test.cpp)
target_link_libraries(tinyllm_tests PRIVATE tinyllm GTest::gtest_main)
target_compile_options(tinyllm_tests PRIVATE -Wall -Wextra -Wpedantic)

include(GoogleTest)
gtest_discover_tests(tinyllm_tests)
