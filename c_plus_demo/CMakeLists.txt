cmake_minimum_required(VERSION 3.17.5)
project(demo01)

include_directories(include)

set(CMAKE_CXX_STANDARD 14)

add_executable(demo01
        src/main.cpp
        src/share_demo.cpp
        src/m_element.cpp
        src/insert_demo.cpp
        src/mysql_demo.cpp
        )

target_link_libraries(${PROJECT_NAME}  libmysqlclient.so)