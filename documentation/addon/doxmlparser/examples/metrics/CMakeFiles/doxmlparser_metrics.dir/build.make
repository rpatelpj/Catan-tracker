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
include addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/depend.make

# Include the progress variables for this target.
include addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/progress.make

# Include the compile flags for this target's objects.
include addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/flags.make

addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/main.cpp.o: addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/flags.make
addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/main.cpp.o: /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/examples/metrics/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Raj/Desktop/Catan-tracker/documentation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/main.cpp.o"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/examples/metrics && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/doxmlparser_metrics.dir/main.cpp.o -c /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/examples/metrics/main.cpp

addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/doxmlparser_metrics.dir/main.cpp.i"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/examples/metrics && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/examples/metrics/main.cpp > CMakeFiles/doxmlparser_metrics.dir/main.cpp.i

addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/doxmlparser_metrics.dir/main.cpp.s"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/examples/metrics && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/examples/metrics/main.cpp -o CMakeFiles/doxmlparser_metrics.dir/main.cpp.s

# Object files for target doxmlparser_metrics
doxmlparser_metrics_OBJECTS = \
"CMakeFiles/doxmlparser_metrics.dir/main.cpp.o"

# External object files for target doxmlparser_metrics
doxmlparser_metrics_EXTERNAL_OBJECTS =

bin/doxmlparser_metrics: addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/main.cpp.o
bin/doxmlparser_metrics: addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/build.make
bin/doxmlparser_metrics: lib/libdoxmlparser.a
bin/doxmlparser_metrics: lib/libqtools.a
bin/doxmlparser_metrics: addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Raj/Desktop/Catan-tracker/documentation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../bin/doxmlparser_metrics"
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/examples/metrics && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/doxmlparser_metrics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/build: bin/doxmlparser_metrics

.PHONY : addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/build

addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/clean:
	cd /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/examples/metrics && $(CMAKE_COMMAND) -P CMakeFiles/doxmlparser_metrics.dir/cmake_clean.cmake
.PHONY : addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/clean

addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/depend:
	cd /Users/Raj/Desktop/Catan-tracker/documentation && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Raj/Desktop/Catan-tracker/doxygen /Users/Raj/Desktop/Catan-tracker/doxygen/addon/doxmlparser/examples/metrics /Users/Raj/Desktop/Catan-tracker/documentation /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/examples/metrics /Users/Raj/Desktop/Catan-tracker/documentation/addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : addon/doxmlparser/examples/metrics/CMakeFiles/doxmlparser_metrics.dir/depend
