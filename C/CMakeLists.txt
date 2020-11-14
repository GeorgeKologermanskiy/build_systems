project(C)

include_directories(${CMAKE_BINARY_DIR})
include_directories(${CMAKE_SOURCE_DIR})

include_directories(${CMAKE_SOURCE_DIR}/A)
include_directories(${CMAKE_SOURCE_DIR}/B)
include_directories(${CMAKE_SOURCE_DIR}/googletest/googletest/include)

add_executable(C main.cpp)
target_link_libraries(C lib)
add_dependencies(C IndexGenerator)

add_executable(CTest main_test.cpp tests.cpp)
target_link_libraries(CTest lib gtest)
add_dependencies(CTest IndexGenerator)
