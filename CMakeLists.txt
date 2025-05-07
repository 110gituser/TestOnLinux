cmake_minimum_required(VERSION 3.10)
project(my_project)

find_package(Eigen3 REQUIRED)

# 添加头文件路径
include_directories(${CMAKE_SOURCE_DIR}/include)

# 查找所有.cpp文件
file(GLOB SOURCES "src/*.cpp")

add_executable(my_program ${SOURCES})

target_link_libraries(my_program Eigen3::Eigen)