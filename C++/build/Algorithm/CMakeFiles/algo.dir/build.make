# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/karan/Documents/Code/DSA/C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/karan/Documents/Code/DSA/C++/build

# Include any dependencies generated for this target.
include Algorithm/CMakeFiles/algo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Algorithm/CMakeFiles/algo.dir/compiler_depend.make

# Include the progress variables for this target.
include Algorithm/CMakeFiles/algo.dir/progress.make

# Include the compile flags for this target's objects.
include Algorithm/CMakeFiles/algo.dir/flags.make

Algorithm/CMakeFiles/algo.dir/src/CommonOper.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/CommonOper.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/CommonOper.cpp
Algorithm/CMakeFiles/algo.dir/src/CommonOper.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/CommonOper.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/CommonOper.cpp.o -MF CMakeFiles/algo.dir/src/CommonOper.cpp.o.d -o CMakeFiles/algo.dir/src/CommonOper.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/CommonOper.cpp

Algorithm/CMakeFiles/algo.dir/src/CommonOper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/CommonOper.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/CommonOper.cpp > CMakeFiles/algo.dir/src/CommonOper.cpp.i

Algorithm/CMakeFiles/algo.dir/src/CommonOper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/CommonOper.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/CommonOper.cpp -o CMakeFiles/algo.dir/src/CommonOper.cpp.s

Algorithm/CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/Searching/LinearSearch.cpp
Algorithm/CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.o -MF CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.o.d -o CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/Searching/LinearSearch.cpp

Algorithm/CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/Searching/LinearSearch.cpp > CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.i

Algorithm/CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/Searching/LinearSearch.cpp -o CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.s

Algorithm/CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/Searching/BinarySearch.cpp
Algorithm/CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.o -MF CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.o.d -o CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/Searching/BinarySearch.cpp

Algorithm/CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/Searching/BinarySearch.cpp > CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.i

Algorithm/CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/Searching/BinarySearch.cpp -o CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.s

Algorithm/CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/BubbleSort.cpp
Algorithm/CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.o -MF CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.o.d -o CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/BubbleSort.cpp

Algorithm/CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/BubbleSort.cpp > CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.i

Algorithm/CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/BubbleSort.cpp -o CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.s

Algorithm/CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/SelectionSort.cpp
Algorithm/CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.o -MF CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.o.d -o CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/SelectionSort.cpp

Algorithm/CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/SelectionSort.cpp > CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.i

Algorithm/CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/SelectionSort.cpp -o CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.s

Algorithm/CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/InsertionSort.cpp
Algorithm/CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.o -MF CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.o.d -o CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/InsertionSort.cpp

Algorithm/CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/InsertionSort.cpp > CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.i

Algorithm/CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/InsertionSort.cpp -o CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.s

Algorithm/CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/BucketSort.cpp
Algorithm/CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.o -MF CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.o.d -o CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/BucketSort.cpp

Algorithm/CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/BucketSort.cpp > CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.i

Algorithm/CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/BucketSort.cpp -o CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.s

Algorithm/CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/MergeSort.cpp
Algorithm/CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.o -MF CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.o.d -o CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/MergeSort.cpp

Algorithm/CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/MergeSort.cpp > CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.i

Algorithm/CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/MergeSort.cpp -o CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.s

Algorithm/CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/QuickSort.cpp
Algorithm/CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.o -MF CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.o.d -o CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/QuickSort.cpp

Algorithm/CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/QuickSort.cpp > CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.i

Algorithm/CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/QuickSort.cpp -o CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.s

Algorithm/CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.o: Algorithm/CMakeFiles/algo.dir/flags.make
Algorithm/CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.o: /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/HeapSort.cpp
Algorithm/CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.o: Algorithm/CMakeFiles/algo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object Algorithm/CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Algorithm/CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.o -MF CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.o.d -o CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.o -c /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/HeapSort.cpp

Algorithm/CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/HeapSort.cpp > CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.i

Algorithm/CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Algorithm/src/Sorting/HeapSort.cpp -o CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.s

# Object files for target algo
algo_OBJECTS = \
"CMakeFiles/algo.dir/src/CommonOper.cpp.o" \
"CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.o" \
"CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.o" \
"CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.o" \
"CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.o" \
"CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.o" \
"CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.o" \
"CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.o" \
"CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.o" \
"CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.o"

# External object files for target algo
algo_EXTERNAL_OBJECTS =

Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/CommonOper.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/Searching/LinearSearch.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/Searching/BinarySearch.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/Sorting/BubbleSort.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/Sorting/SelectionSort.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/Sorting/InsertionSort.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/Sorting/BucketSort.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/Sorting/MergeSort.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/Sorting/QuickSort.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/src/Sorting/HeapSort.cpp.o
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/build.make
Algorithm/libalgo.a: Algorithm/CMakeFiles/algo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library libalgo.a"
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && $(CMAKE_COMMAND) -P CMakeFiles/algo.dir/cmake_clean_target.cmake
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/algo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Algorithm/CMakeFiles/algo.dir/build: Algorithm/libalgo.a
.PHONY : Algorithm/CMakeFiles/algo.dir/build

Algorithm/CMakeFiles/algo.dir/clean:
	cd /home/karan/Documents/Code/DSA/C++/build/Algorithm && $(CMAKE_COMMAND) -P CMakeFiles/algo.dir/cmake_clean.cmake
.PHONY : Algorithm/CMakeFiles/algo.dir/clean

Algorithm/CMakeFiles/algo.dir/depend:
	cd /home/karan/Documents/Code/DSA/C++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/karan/Documents/Code/DSA/C++ /home/karan/Documents/Code/DSA/C++/Algorithm /home/karan/Documents/Code/DSA/C++/build /home/karan/Documents/Code/DSA/C++/build/Algorithm /home/karan/Documents/Code/DSA/C++/build/Algorithm/CMakeFiles/algo.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Algorithm/CMakeFiles/algo.dir/depend

