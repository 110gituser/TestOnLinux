cmake_minimum_required(VERSION 3.10) # 指定所需的最低CMake版本（3.10及以上）
project(MyProject) # 定义项目名称为 MyProject
find_package(Eigen3 REQUIRED) # 查找并加载Eigen3这个第三方库REQUIRED表示找不到就报错并停止配置

# 添加自定义的头文件路径
# ${CMAKE_SOURCE_DIR} 是项目的根目录路径（CMakeLists.txt 所在目录）
include_directories(${CMAKE_SOURCE_DIR}/include)

# 默认情况下，CMake 会把可执行文件放在 build 目录里
# 自动查找 src 目录下所有的 .cpp 源文件，并存储在变量 SOURCES 中
# GLOB 是文件通配符查找，例如：src/main.cpp、src/utils.cpp 都会被找到
file(GLOB SOURCES "src/*.cpp")

add_executable(MyProject ${SOURCES}) # 使用找到的源码文件创建一个可执行文件 MyProject
target_link_libraries(MyProject Eigen3::Eigen) # 将项目链接到Eigen3库