cmake_minimum_required(VERSION 3.6)
project("Linked List")
add_library(list
    "./src/SinglyLinkedList.cpp"
    "./src/SinglyCircularLL.cpp"
    "./src/DoublyLinkedList.cpp"
    "./src/DoublyCircularLL.cpp"
    "./src/GenericSinglyLL.cpp"
)

target_include_directories(list PUBLIC "./include")
