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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.16.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.16.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Raj/Desktop/Catan-tracker/doxygen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Raj/Desktop/Catan-tracker/documentation

# Include any dependencies generated for this target.
include libmd5/CMakeFiles/md5.dir/depend.make

# Include the progress variables for this target.
include libmd5/CMakeFiles/md5.dir/progress.make

# Include the compile flags for this target's objects.
include libmd5/CMakeFiles/md5.dir/flags.make

libmd5/CMakeFiles/md5.dir/md5.c.o: libmd5/CMakeFiles/md5.dir/flags.make
libmd5/CMakeFiles/md5.dir/md5.c.o: /Users/Raj/Desktop/Catan-tracker/doxygen/libmd5/md5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Raj/Desktop/Catan-tracker/documentation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libmd5/CMakeFiles/md5.dir/md5.c.o"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/libmd5 && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/md5.dir/md5.c.o   -c /Users/Raj/Desktop/Catan-tracker/doxygen/libmd5/md5.c

libmd5/CMakeFiles/md5.dir/md5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/md5.dir/md5.c.i"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/libmd5 && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Raj/Desktop/Catan-tracker/doxygen/libmd5/md5.c > CMakeFiles/md5.dir/md5.c.i

libmd5/CMakeFiles/md5.dir/md5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/md5.dir/md5.c.s"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/libmd5 && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Raj/Desktop/Catan-tracker/doxygen/libmd5/md5.c -o CMakeFiles/md5.dir/md5.c.s

# Object files for target md5
md5_OBJECTS = \
"CMakeFiles/md5.dir/md5.c.o"

# External object files for target md5
md5_EXTERNAL_OBJECTS =

lib/libmd5.a: libmd5/CMakeFiles/md5.dir/md5.c.o
lib/libmd5.a: libmd5/CMakeFiles/md5.dir/build.make
lib/libmd5.a: libmd5/CMakeFiles/md5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Raj/Desktop/Catan-tracker/documentation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library ../lib/libmd5.a"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/libmd5 && $(CMAKE_COMMAND) -P CMakeFiles/md5.dir/cmake_clean_target.cmake
	cd /Users/Raj/Desktop/Catan-tracker/documentation/libmd5 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/md5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libmd5/CMakeFiles/md5.dir/build: lib/libmd5.a

.PHONY : libmd5/CMakeFiles/md5.dir/build

libmd5/CMakeFiles/md5.dir/clean:
	cd /Users/Raj/Desktop/Catan-tracker/documentation/libmd5 && $(CMAKE_COMMAND) -P CMakeFiles/md5.dir/cmake_clean.cmake
.PHONY : libmd5/CMakeFiles/md5.dir/clean

libmd5/CMakeFiles/md5.dir/depend:
	cd /Users/Raj/Desktop/Catan-tracker/documentation && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Raj/Desktop/Catan-tracker/doxygen /Users/Raj/Desktop/Catan-tracker/doxygen/libmd5 /Users/Raj/Desktop/Catan-tracker/documentation /Users/Raj/Desktop/Catan-tracker/documentation/libmd5 /Users/Raj/Desktop/Catan-tracker/documentation/libmd5/CMakeFiles/md5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libmd5/CMakeFiles/md5.dir/depend

