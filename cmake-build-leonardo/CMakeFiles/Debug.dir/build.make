# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /Applications/Programowanie/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/Programowanie/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/maciejzajecki/Documents/GitHub/iToaster

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo

# Utility rule file for Debug.

# Include the progress variables for this target.
include CMakeFiles/Debug.dir/progress.make

CMakeFiles/Debug:
	cd /Users/maciejzajecki/Documents/GitHub/iToaster && platformio -c clion run --target debug -eleonardo

Debug: CMakeFiles/Debug
Debug: CMakeFiles/Debug.dir/build.make

.PHONY : Debug

# Rule to build all files generated by this target.
CMakeFiles/Debug.dir/build: Debug

.PHONY : CMakeFiles/Debug.dir/build

CMakeFiles/Debug.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Debug.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Debug.dir/clean

CMakeFiles/Debug.dir/depend:
	cd /Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maciejzajecki/Documents/GitHub/iToaster /Users/maciejzajecki/Documents/GitHub/iToaster /Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo /Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo /Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo/CMakeFiles/Debug.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Debug.dir/depend

