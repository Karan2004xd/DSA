cmake_minimum_required(VERSION 3.6)
project(tree)
add_library(tree
    "./src/BasicTree.cpp"
    "./src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp"
    "./src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp"
    "./src/BinarySearchTree/BinarySearchTree.cpp"
)

target_include_directories(tree PRIVATE "./include")
