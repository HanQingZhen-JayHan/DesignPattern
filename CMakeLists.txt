cmake_minimum_required(VERSION 3.0.0)
project(DesignPattern VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()
include_directories(Base)
include_directories(BehaviourPatterns)
include_directories(C++Primer)
include_directories(CreatonalPatterns)
include_directories(StructalPatterns)

add_executable(DesignPattern main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
