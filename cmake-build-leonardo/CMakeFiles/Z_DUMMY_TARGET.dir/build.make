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

# Include any dependencies generated for this target.
include CMakeFiles/Z_DUMMY_TARGET.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Z_DUMMY_TARGET.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Z_DUMMY_TARGET.dir/flags.make

CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.obj: CMakeFiles/Z_DUMMY_TARGET.dir/flags.make
CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.obj: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.obj"
	/Users/maciejzajecki/.platformio/packages/toolchain-atmelavr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.obj   -c /Users/maciejzajecki/Documents/GitHub/iToaster/src/main.c

CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.i"
	/Users/maciejzajecki/.platformio/packages/toolchain-atmelavr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/maciejzajecki/Documents/GitHub/iToaster/src/main.c > CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.i

CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.s"
	/Users/maciejzajecki/.platformio/packages/toolchain-atmelavr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/maciejzajecki/Documents/GitHub/iToaster/src/main.c -o CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.s

# Object files for target Z_DUMMY_TARGET
Z_DUMMY_TARGET_OBJECTS = \
"CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.obj"

# External object files for target Z_DUMMY_TARGET
Z_DUMMY_TARGET_EXTERNAL_OBJECTS =

Z_DUMMY_TARGET: CMakeFiles/Z_DUMMY_TARGET.dir/src/main.c.obj
Z_DUMMY_TARGET: CMakeFiles/Z_DUMMY_TARGET.dir/build.make
Z_DUMMY_TARGET: CMakeFiles/Z_DUMMY_TARGET.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Z_DUMMY_TARGET"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Z_DUMMY_TARGET.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Z_DUMMY_TARGET.dir/build: Z_DUMMY_TARGET

.PHONY : CMakeFiles/Z_DUMMY_TARGET.dir/build

CMakeFiles/Z_DUMMY_TARGET.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Z_DUMMY_TARGET.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Z_DUMMY_TARGET.dir/clean

CMakeFiles/Z_DUMMY_TARGET.dir/depend:
	cd /Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maciejzajecki/Documents/GitHub/iToaster /Users/maciejzajecki/Documents/GitHub/iToaster /Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo /Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo /Users/maciejzajecki/Documents/GitHub/iToaster/cmake-build-leonardo/CMakeFiles/Z_DUMMY_TARGET.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Z_DUMMY_TARGET.dir/depend

