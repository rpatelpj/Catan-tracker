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
include addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/depend.make

# Include the progress variables for this target.
include addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/progress.make

# Include the compile flags for this target's objects.
include addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/flags.make

addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/main.cpp.o: addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/flags.make
addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/main.cpp.o: /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Raj/Desktop/Catan-tracker/documentation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/main.cpp.o"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/test && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/doxmlparser_test.dir/main.cpp.o -c /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/test/main.cpp

addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/doxmlparser_test.dir/main.cpp.i"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/test/main.cpp > CMakeFiles/doxmlparser_test.dir/main.cpp.i

addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/doxmlparser_test.dir/main.cpp.s"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/test/main.cpp -o CMakeFiles/doxmlparser_test.dir/main.cpp.s

# Object files for target doxmlparser_test
doxmlparser_test_OBJECTS = \
"CMakeFiles/doxmlparser_test.dir/main.cpp.o"

# External object files for target doxmlparser_test
doxmlparser_test_EXTERNAL_OBJECTS =

bin/doxmlparser_test: addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/main.cpp.o
bin/doxmlparser_test: addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/build.make
bin/doxmlparser_test: lib/libdoxmlparser.a
bin/doxmlparser_test: lib/libqtools.a
bin/doxmlparser_test: addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Raj/Desktop/Catan-tracker/documentation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/doxmlparser_test"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/doxmlparser_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/build: bin/doxmlparser_test

.PHONY : addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/build

addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/clean:
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/test && $(CMAKE_COMMAND) -P CMakeFiles/doxmlparser_test.dir/cmake_clean.cmake
.PHONY : addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/clean

addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/depend:
	cd /Users/Raj/Desktop/Catan-tracker/documentation && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Raj/Desktop/Catan-tracker/doxygen /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/test /Users/Raj/Desktop/Catan-tracker/documentation /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/test /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : addon/doxmlparser/test/CMakeFiles/doxmlparser_test.dir/depend

