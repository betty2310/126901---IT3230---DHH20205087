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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/betty/Dev/CProgramming-IT3230-126901/w4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/betty/Dev/CProgramming-IT3230-126901/w4/build

# Include any dependencies generated for this target.
include CMakeFiles/Stacks.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Stacks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stacks.dir/flags.make

CMakeFiles/Stacks.dir/main.cpp.o: CMakeFiles/Stacks.dir/flags.make
CMakeFiles/Stacks.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/betty/Dev/CProgramming-IT3230-126901/w4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Stacks.dir/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Stacks.dir/main.cpp.o -c /home/betty/Dev/CProgramming-IT3230-126901/w4/main.cpp

CMakeFiles/Stacks.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stacks.dir/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/betty/Dev/CProgramming-IT3230-126901/w4/main.cpp > CMakeFiles/Stacks.dir/main.cpp.i

CMakeFiles/Stacks.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stacks.dir/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/betty/Dev/CProgramming-IT3230-126901/w4/main.cpp -o CMakeFiles/Stacks.dir/main.cpp.s

CMakeFiles/Stacks.dir/source.cpp.o: CMakeFiles/Stacks.dir/flags.make
CMakeFiles/Stacks.dir/source.cpp.o: ../source.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/betty/Dev/CProgramming-IT3230-126901/w4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Stacks.dir/source.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Stacks.dir/source.cpp.o -c /home/betty/Dev/CProgramming-IT3230-126901/w4/source.cpp

CMakeFiles/Stacks.dir/source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stacks.dir/source.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/betty/Dev/CProgramming-IT3230-126901/w4/source.cpp > CMakeFiles/Stacks.dir/source.cpp.i

CMakeFiles/Stacks.dir/source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stacks.dir/source.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/betty/Dev/CProgramming-IT3230-126901/w4/source.cpp -o CMakeFiles/Stacks.dir/source.cpp.s

# Object files for target Stacks
Stacks_OBJECTS = \
"CMakeFiles/Stacks.dir/main.cpp.o" \
"CMakeFiles/Stacks.dir/source.cpp.o"

# External object files for target Stacks
Stacks_EXTERNAL_OBJECTS =

Stacks: CMakeFiles/Stacks.dir/main.cpp.o
Stacks: CMakeFiles/Stacks.dir/source.cpp.o
Stacks: CMakeFiles/Stacks.dir/build.make
Stacks: CMakeFiles/Stacks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/betty/Dev/CProgramming-IT3230-126901/w4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Stacks"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Stacks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stacks.dir/build: Stacks

.PHONY : CMakeFiles/Stacks.dir/build

CMakeFiles/Stacks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Stacks.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Stacks.dir/clean

CMakeFiles/Stacks.dir/depend:
	cd /home/betty/Dev/CProgramming-IT3230-126901/w4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/betty/Dev/CProgramming-IT3230-126901/w4 /home/betty/Dev/CProgramming-IT3230-126901/w4 /home/betty/Dev/CProgramming-IT3230-126901/w4/build /home/betty/Dev/CProgramming-IT3230-126901/w4/build /home/betty/Dev/CProgramming-IT3230-126901/w4/build/CMakeFiles/Stacks.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Stacks.dir/depend

