cmake_minimum_required(VERSION 3.9)
project(libfoundation)

# 指定头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 收集c/c++文件并赋值给变量SRC_LIST_CPP  ${PROJECT_SOURCE_DIR}代表区当前项目录
FILE(GLOB SRC_CPP ${PROJECT_SOURCE_DIR}/src/*.cpp)
# 指定生成libmyprint 动态库（默认为静态库）
# SHARED指定生成库类型为动态库 STATIC为静态库
ADD_LIBRARY(libfoundation SHARED
        ${SRC_CPP}
        )