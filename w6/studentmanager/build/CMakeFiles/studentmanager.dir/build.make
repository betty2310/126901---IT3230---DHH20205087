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
CMAKE_SOURCE_DIR = /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/build

# Include any dependencies generated for this target.
include CMakeFiles/studentmanager.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/studentmanager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/studentmanager.dir/flags.make

CMakeFiles/studentmanager.dir/main.c.o: CMakeFiles/studentmanager.dir/flags.make
CMakeFiles/studentmanager.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/studentmanager.dir/main.c.o"
	/bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/studentmanager.dir/main.c.o   -c /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/main.c

CMakeFiles/studentmanager.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/studentmanager.dir/main.c.i"
	/bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/main.c > CMakeFiles/studentmanager.dir/main.c.i

CMakeFiles/studentmanager.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/studentmanager.dir/main.c.s"
	/bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/main.c -o CMakeFiles/studentmanager.dir/main.c.s

CMakeFiles/studentmanager.dir/student.c.o: CMakeFiles/studentmanager.dir/flags.make
CMakeFiles/studentmanager.dir/student.c.o: ../student.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/studentmanager.dir/student.c.o"
	/bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/studentmanager.dir/student.c.o   -c /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/student.c

CMakeFiles/studentmanager.dir/student.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/studentmanager.dir/student.c.i"
	/bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/student.c > CMakeFiles/studentmanager.dir/student.c.i

CMakeFiles/studentmanager.dir/student.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/studentmanager.dir/student.c.s"
	/bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/student.c -o CMakeFiles/studentmanager.dir/student.c.s

# Object files for target studentmanager
studentmanager_OBJECTS = \
"CMakeFiles/studentmanager.dir/main.c.o" \
"CMakeFiles/studentmanager.dir/student.c.o"

# External object files for target studentmanager
studentmanager_EXTERNAL_OBJECTS =

studentmanager: CMakeFiles/studentmanager.dir/main.c.o
studentmanager: CMakeFiles/studentmanager.dir/student.c.o
studentmanager: CMakeFiles/studentmanager.dir/build.make
studentmanager: CMakeFiles/studentmanager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable studentmanager"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/studentmanager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/studentmanager.dir/build: studentmanager

.PHONY : CMakeFiles/studentmanager.dir/build

CMakeFiles/studentmanager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/studentmanager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/studentmanager.dir/clean

CMakeFiles/studentmanager.dir/depend:
	cd /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/build /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/build /home/betty/Dev/CProgramming-IT3230-126901/w6/studentmanager/build/CMakeFiles/studentmanager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/studentmanager.dir/depend
