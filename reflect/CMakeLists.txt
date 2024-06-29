cmake_minimum_required(VERSION 3.22)
project(Reflect)

add_compile_options(-Wall -Wextra -Werror=return-type)


set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)


find_package(jsoncpp REQUIRED)

include_directories(${JSONCPP_INCLUDE_DIRS})

add_executable(Reflect main.cc)

target_link_libraries(Reflect PUBLIC jsoncpp)