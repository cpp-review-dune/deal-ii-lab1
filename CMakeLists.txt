cmake_minimum_required(VERSION 3.28)
project("Lab 1")

find_package(deal.II 9.5.1 REQUIRED)
deal_ii_initialize_cached_variables()

find_package(GTest)
enable_testing()

add_subdirectory(source)