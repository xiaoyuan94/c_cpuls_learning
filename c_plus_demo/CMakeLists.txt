cmake_minimum_required(VERSION 3.17.5)
project(demo01)
set(CMAKE_CXX_STANDARD 14)

include_directories(libstl/include)

add_executable(demo01
        libstl/src/insert_map.cpp
        libstl/src/test_c.cpp
        main.cpp
        )

target_link_libraries(${PROJECT_NAME} libmysqlclient.so)