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
include CMakeFiles/runner.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/runner.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/runner.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runner.dir/flags.make

CMakeFiles/runner.dir/Demo.cpp.o: CMakeFiles/runner.dir/flags.make
CMakeFiles/runner.dir/Demo.cpp.o: /home/karan/Documents/Code/DSA/C++/Demo.cpp
CMakeFiles/runner.dir/Demo.cpp.o: CMakeFiles/runner.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/runner.dir/Demo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/runner.dir/Demo.cpp.o -MF CMakeFiles/runner.dir/Demo.cpp.o.d -o CMakeFiles/runner.dir/Demo.cpp.o -c /home/karan/Documents/Code/DSA/C++/Demo.cpp

CMakeFiles/runner.dir/Demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/runner.dir/Demo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/Documents/Code/DSA/C++/Demo.cpp > CMakeFiles/runner.dir/Demo.cpp.i

CMakeFiles/runner.dir/Demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/runner.dir/Demo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/Documents/Code/DSA/C++/Demo.cpp -o CMakeFiles/runner.dir/Demo.cpp.s

# Object files for target runner
runner_OBJECTS = \
"CMakeFiles/runner.dir/Demo.cpp.o"

# External object files for target runner
runner_EXTERNAL_OBJECTS =

runner: CMakeFiles/runner.dir/Demo.cpp.o
runner: CMakeFiles/runner.dir/build.make
runner: Queue/libqueue.a
runner: CMakeFiles/runner.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/karan/Documents/Code/DSA/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable runner"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runner.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runner.dir/build: runner
.PHONY : CMakeFiles/runner.dir/build

CMakeFiles/runner.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runner.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runner.dir/clean

CMakeFiles/runner.dir/depend:
	cd /home/karan/Documents/Code/DSA/C++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/karan/Documents/Code/DSA/C++ /home/karan/Documents/Code/DSA/C++ /home/karan/Documents/Code/DSA/C++/build /home/karan/Documents/Code/DSA/C++/build /home/karan/Documents/Code/DSA/C++/build/CMakeFiles/runner.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/runner.dir/depend

