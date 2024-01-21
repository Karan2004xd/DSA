cmake_minimum_required(VERSION 3.6)
project(algo)

add_library(${PROJECT_NAME}
    "./src/CommonOper.cpp"
    "./src/Searching/LinearSearch.cpp"
    "./src/Searching/BinarySearch.cpp"
    "./src/Sorting/BubbleSort.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE "./include")
