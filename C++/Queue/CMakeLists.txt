cmake_minimum_required(VERSION 3.6)
project(queue)
add_library(${PROJECT_NAME}
    "./src/ArrayQueue.cpp"
    "./src/CircularArrayQueue.cpp"
    "./src/LinkedListQueue.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE "./include")
target_link_libraries(${PROJECT_NAME} PRIVATE list)
