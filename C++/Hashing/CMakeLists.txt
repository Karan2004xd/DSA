cmake_minimum_required(VERSION 3.6)
project("hashing")

add_library(${PROJECT_NAME}
    "./src/DirectChaining.cpp"
    "./src/LinearProbing.cpp"
    "./src/QuadraticProbing.cpp"
    "./src/DoubleHashing.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE "./include")
target_link_libraries(${PROJECT_NAME} PRIVATE list)
