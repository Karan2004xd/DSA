cmake_minimum_required(VERSION 3.6)
project(queue)
add_library(${PROJECT_NAME}
    "./src/ArrayQueue.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE "./include")
