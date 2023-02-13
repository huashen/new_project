cmake_minimum_required(VERSION 3.22)
project(server)

# C++14编译标准
set(CMAKE_CXX_STANDARD 14)

# 添加头文件
include_directories(include)

# 添加源文件
aux_source_directory(./src DIR_SRCS)

# 需要编译的源文件
add_executable(server ${DIR_SRCS})
add_executable(test03_08 ./src/03/test08.cpp)
add_executable(test03_11 ./src/03/test11.cpp)
add_executable(test04_01 ./src/04/test01.cpp)
add_executable(test04_02 ./src/04/test02.cpp)
