cmake_minimum_required(VERSION 3.9)
project(start)

include_directories(
        ../libmysql/include
        ../libstl/include
)

link_directories(
        ../libmysql
        ../libstl
)

add_executable(start
        src/main.cpp
        )

target_link_libraries(${PROJECT_NAME} libmysql libstl)

