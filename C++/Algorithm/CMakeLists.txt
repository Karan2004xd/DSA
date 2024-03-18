cmake_minimum_required(VERSION 3.6)
project(algo)

add_library(${PROJECT_NAME}
  "./src/CommonOper.cpp"
  "./src/Searching/LinearSearch.cpp"
  "./src/Searching/BinarySearch.cpp"
  "./src/Sorting/BubbleSort.cpp"
  "./src/Sorting/SelectionSort.cpp"
  "./src/Sorting/InsertionSort.cpp"
  "./src/Sorting/BucketSort.cpp"
  "./src/Sorting/MergeSort.cpp"
  "./src/Sorting/QuickSort.cpp"
  "./src/Sorting/HeapSort.cpp"
  "./src/Greedy/ActivitySelectionProblem/ActivitySelection.cpp"
  "./src/Greedy/CoinChangeProblem.cpp"
  "./src/Greedy/FractionalKnapsackProblem/FractionalKnapsack.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE "./include")
target_link_libraries(${PROJECT_NAME} PRIVATE tree)
