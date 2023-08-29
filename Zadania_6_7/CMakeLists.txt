cmake_minimum_required(VERSION 3.0.0)
project(Halaczkiewicz_ZadKcpp VERSION 0.1.0 LANGUAGES C CXX)

add_executable(Halaczkiewicz_ZadKcpp src/main.cc src/ZadKcpp.cc include/ZadKcpp.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
