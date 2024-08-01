cmake_minimum_required(VERSION 3.10.2)
project(cli-tik-tak-toe)
add_executable(${PROJECT_NAME} main.cpp)
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
