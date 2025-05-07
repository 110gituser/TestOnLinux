# 指定所需的最低CMake版本（3.10及以上）
# 不同版本支持的功能不同，确保兼容性
cmake_minimum_required(VERSION 3.10)

# 定义项目名称为 MyProject
# 这将用于后续如生成可执行文件名称等地方
project(MyProject)

# 查找并加载 Eigen3 这个第三方库
# REQUIRED 表示找不到就报错并停止配置
find_package(Eigen3 REQUIRED)

# 添加自定义的头文件路径
# ${CMAKE_SOURCE_DIR} 是项目的根目录路径（CMakeLists.txt 所在目录）
include_directories(${CMAKE_SOURCE_DIR}/include)

# 默认情况下，CMake 会把可执行文件放在 build 目录里

# 自动查找 src 目录下所有的 .cpp 源文件，并存储在变量 SOURCES 中
# GLOB 是文件通配符查找，例如：src/main.cpp、src/utils.cpp 都会被找到
file(GLOB SOURCES "src/*.cpp")

# 使用找到的源码文件创建一个可执行文件 MyProject
# 这个名字也就是将来生成的可执行文件名
add_executable(MyProject ${SOURCES})

# 将项目链接到 Eigen3 库
# Eigen 是一个头文件库，实际上不会参与链接，但这句保证其头文件路径有效
target_link_libraries(MyProject Eigen3::Eigen)