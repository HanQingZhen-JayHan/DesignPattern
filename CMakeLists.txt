cmake_minimum_required(VERSION 3.0.0)
project(DesignPattern VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(Base)
include_directories(BehaviourPatterns)
include_directories(C++Primer)
include_directories(CreatonalPatterns)
include_directories(StructalPatterns)

# the executalbe file in the build folder
add_executable(DesignPattern main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
