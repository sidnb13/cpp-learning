# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/build

# Include any dependencies generated for this target.
include CMakeFiles/singly-linked-list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/singly-linked-list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/singly-linked-list.dir/flags.make

CMakeFiles/singly-linked-list.dir/main.cpp.o: CMakeFiles/singly-linked-list.dir/flags.make
CMakeFiles/singly-linked-list.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/singly-linked-list.dir/main.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/singly-linked-list.dir/main.cpp.o -c /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/main.cpp

CMakeFiles/singly-linked-list.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/singly-linked-list.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/main.cpp > CMakeFiles/singly-linked-list.dir/main.cpp.i

CMakeFiles/singly-linked-list.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/singly-linked-list.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/main.cpp -o CMakeFiles/singly-linked-list.dir/main.cpp.s

# Object files for target singly-linked-list
singly__linked__list_OBJECTS = \
"CMakeFiles/singly-linked-list.dir/main.cpp.o"

# External object files for target singly-linked-list
singly__linked__list_EXTERNAL_OBJECTS =

singly-linked-list: CMakeFiles/singly-linked-list.dir/main.cpp.o
singly-linked-list: CMakeFiles/singly-linked-list.dir/build.make
singly-linked-list: CMakeFiles/singly-linked-list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable singly-linked-list"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/singly-linked-list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/singly-linked-list.dir/build: singly-linked-list

.PHONY : CMakeFiles/singly-linked-list.dir/build

CMakeFiles/singly-linked-list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/singly-linked-list.dir/cmake_clean.cmake
.PHONY : CMakeFiles/singly-linked-list.dir/clean

CMakeFiles/singly-linked-list.dir/depend:
	cd /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/build /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/build /Users/sidbaskaran/Desktop/cpp-learning/singly-linked-list/build/CMakeFiles/singly-linked-list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/singly-linked-list.dir/depend

