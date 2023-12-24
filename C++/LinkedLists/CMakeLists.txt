cmake_minimum_required(VERSION 3.6)
project("Linked List")
add_library(list
    "./src/SinglyLinkedList.cpp"
)

target_include_directories(list PUBLIC "./include")
