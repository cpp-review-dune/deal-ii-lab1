add_executable(pythagoras main.cc)
target_link_libraries(pythagoras GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(pythagoras)