cmake_minimum_required(VERSION 3.9)
project(start)

include_directories(
        ../libmysql/include
        ../libstl/include
        ../libjson/include
        ../libtest/include
        ../libfoundation/include
)

link_directories(
        ../libmysql
        ../libstl
        ../libjson
        ../libtest
        ../libfoundation
)

add_executable(start
        src/main.cpp
        )

target_link_libraries(${PROJECT_NAME} libmysql libstl libjson libtest libfoundation)

