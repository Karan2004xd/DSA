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
include Tree/CMakeFiles/tree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Tree/CMakeFiles/tree.dir/compiler_depend.make

# Include the progress variables for this target.
include Tree/CMakeFiles/tree.dir/progress.make

# Include the compile flags for this target's objects.
include Tree/CMakeFiles/tree.dir/flags.make

Tree/CMakeFiles/tree.dir/src/BasicTree.cpp.o: Tree/CMakeFiles/tree.dir/flags.make
Tree/CMakeFiles/tree.dir/src/BasicTree.cpp.o: /home/karan/Documents/Code/DSA/C++/Tree/src/BasicTree.cpp
Tree/CMakeFiles/tree.dir/src/BasicTree.cpp.o: Tree/CMakeFiles/tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Tree/CMakeFiles/tree.dir/src/BasicTree.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Tree/CMakeFiles/tree.dir/src/BasicTree.cpp.o -MF CMakeFiles/tree.dir/src/BasicTree.cpp.o.d -o CMakeFiles/tree.dir/src/BasicTree.cpp.o -c /home/karan/Documents/Code/DSA/C++/Tree/src/BasicTree.cpp

Tree/CMakeFiles/tree.dir/src/BasicTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tree.dir/src/BasicTree.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Tree/src/BasicTree.cpp > CMakeFiles/tree.dir/src/BasicTree.cpp.i

Tree/CMakeFiles/tree.dir/src/BasicTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tree.dir/src/BasicTree.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Tree/src/BasicTree.cpp -o CMakeFiles/tree.dir/src/BasicTree.cpp.s

Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.o: Tree/CMakeFiles/tree.dir/flags.make
Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.o: /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp
Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.o: Tree/CMakeFiles/tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.o -MF CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.o.d -o CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.o -c /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp

Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp > CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.i

Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp -o CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.s

Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.o: Tree/CMakeFiles/tree.dir/flags.make
Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.o: /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp
Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.o: Tree/CMakeFiles/tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.o -MF CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.o.d -o CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.o -c /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp

Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp > CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.i

Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp -o CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.s

Tree/CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.o: Tree/CMakeFiles/tree.dir/flags.make
Tree/CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.o: /home/karan/Documents/Code/DSA/C++/Tree/src/BinarySearchTree/BinarySearchTree.cpp
Tree/CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.o: Tree/CMakeFiles/tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Tree/CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Tree/CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.o -MF CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.o.d -o CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.o -c /home/karan/Documents/Code/DSA/C++/Tree/src/BinarySearchTree/BinarySearchTree.cpp

Tree/CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Tree/src/BinarySearchTree/BinarySearchTree.cpp > CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.i

Tree/CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Tree/src/BinarySearchTree/BinarySearchTree.cpp -o CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.s

Tree/CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.o: Tree/CMakeFiles/tree.dir/flags.make
Tree/CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.o: /home/karan/Documents/Code/DSA/C++/Tree/src/AVLTree/AVLTree.cpp
Tree/CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.o: Tree/CMakeFiles/tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Tree/CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Tree/CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.o -MF CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.o.d -o CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.o -c /home/karan/Documents/Code/DSA/C++/Tree/src/AVLTree/AVLTree.cpp

Tree/CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Tree/src/AVLTree/AVLTree.cpp > CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.i

Tree/CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Tree/src/AVLTree/AVLTree.cpp -o CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.s

Tree/CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.o: Tree/CMakeFiles/tree.dir/flags.make
Tree/CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.o: /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryHeap/BinaryHeap.cpp
Tree/CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.o: Tree/CMakeFiles/tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object Tree/CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Tree/CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.o -MF CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.o.d -o CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.o -c /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryHeap/BinaryHeap.cpp

Tree/CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryHeap/BinaryHeap.cpp > CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.i

Tree/CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Tree/src/BinaryHeap/BinaryHeap.cpp -o CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.s

Tree/CMakeFiles/tree.dir/src/Trie/Trie.cpp.o: Tree/CMakeFiles/tree.dir/flags.make
Tree/CMakeFiles/tree.dir/src/Trie/Trie.cpp.o: /home/karan/Documents/Code/DSA/C++/Tree/src/Trie/Trie.cpp
Tree/CMakeFiles/tree.dir/src/Trie/Trie.cpp.o: Tree/CMakeFiles/tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object Tree/CMakeFiles/tree.dir/src/Trie/Trie.cpp.o"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Tree/CMakeFiles/tree.dir/src/Trie/Trie.cpp.o -MF CMakeFiles/tree.dir/src/Trie/Trie.cpp.o.d -o CMakeFiles/tree.dir/src/Trie/Trie.cpp.o -c /home/karan/Documents/Code/DSA/C++/Tree/src/Trie/Trie.cpp

Tree/CMakeFiles/tree.dir/src/Trie/Trie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tree.dir/src/Trie/Trie.cpp.i"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Tree/src/Trie/Trie.cpp > CMakeFiles/tree.dir/src/Trie/Trie.cpp.i

Tree/CMakeFiles/tree.dir/src/Trie/Trie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tree.dir/src/Trie/Trie.cpp.s"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Tree/src/Trie/Trie.cpp -o CMakeFiles/tree.dir/src/Trie/Trie.cpp.s

# Object files for target tree
tree_OBJECTS = \
"CMakeFiles/tree.dir/src/BasicTree.cpp.o" \
"CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.o" \
"CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.o" \
"CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.o" \
"CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.o" \
"CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.o" \
"CMakeFiles/tree.dir/src/Trie/Trie.cpp.o"

# External object files for target tree
tree_EXTERNAL_OBJECTS =

Tree/libtree.a: Tree/CMakeFiles/tree.dir/src/BasicTree.cpp.o
Tree/libtree.a: Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.cpp.o
Tree/libtree.a: Tree/CMakeFiles/tree.dir/src/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.cpp.o
Tree/libtree.a: Tree/CMakeFiles/tree.dir/src/BinarySearchTree/BinarySearchTree.cpp.o
Tree/libtree.a: Tree/CMakeFiles/tree.dir/src/AVLTree/AVLTree.cpp.o
Tree/libtree.a: Tree/CMakeFiles/tree.dir/src/BinaryHeap/BinaryHeap.cpp.o
Tree/libtree.a: Tree/CMakeFiles/tree.dir/src/Trie/Trie.cpp.o
Tree/libtree.a: Tree/CMakeFiles/tree.dir/build.make
Tree/libtree.a: Tree/CMakeFiles/tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library libtree.a"
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && $(CMAKE_COMMAND) -P CMakeFiles/tree.dir/cmake_clean_target.cmake
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Tree/CMakeFiles/tree.dir/build: Tree/libtree.a
.PHONY : Tree/CMakeFiles/tree.dir/build

Tree/CMakeFiles/tree.dir/clean:
	cd /home/karan/Documents/Code/DSA/C++/build/Tree && $(CMAKE_COMMAND) -P CMakeFiles/tree.dir/cmake_clean.cmake
.PHONY : Tree/CMakeFiles/tree.dir/clean

Tree/CMakeFiles/tree.dir/depend:
	cd /home/karan/Documents/Code/DSA/C++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/karan/Documents/Code/DSA/C++ /home/karan/Documents/Code/DSA/C++/Tree /home/karan/Documents/Code/DSA/C++/build /home/karan/Documents/Code/DSA/C++/build/Tree /home/karan/Documents/Code/DSA/C++/build/Tree/CMakeFiles/tree.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Tree/CMakeFiles/tree.dir/depend

