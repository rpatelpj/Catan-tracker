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
CMAKE_SOURCE_DIR = /Users/Raj/Downloads/Catan-tracker/doxygen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Raj/Downloads/Catan-tracker/doxygen-build

# Include any dependencies generated for this target.
include libversion/CMakeFiles/doxygen_version.dir/depend.make

# Include the progress variables for this target.
include libversion/CMakeFiles/doxygen_version.dir/progress.make

# Include the compile flags for this target's objects.
include libversion/CMakeFiles/doxygen_version.dir/flags.make

libversion/CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.o: libversion/CMakeFiles/doxygen_version.dir/flags.make
libversion/CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.o: generated_src/doxyversion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Raj/Downloads/Catan-tracker/doxygen-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libversion/CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.o"
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.o -c /Users/Raj/Downloads/Catan-tracker/doxygen-build/generated_src/doxyversion.cpp

libversion/CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.i"
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Raj/Downloads/Catan-tracker/doxygen-build/generated_src/doxyversion.cpp > CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.i

libversion/CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.s"
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Raj/Downloads/Catan-tracker/doxygen-build/generated_src/doxyversion.cpp -o CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.s

libversion/CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.o: libversion/CMakeFiles/doxygen_version.dir/flags.make
libversion/CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.o: generated_src/gitversion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Raj/Downloads/Catan-tracker/doxygen-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libversion/CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.o"
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.o -c /Users/Raj/Downloads/Catan-tracker/doxygen-build/generated_src/gitversion.cpp

libversion/CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.i"
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Raj/Downloads/Catan-tracker/doxygen-build/generated_src/gitversion.cpp > CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.i

libversion/CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.s"
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Raj/Downloads/Catan-tracker/doxygen-build/generated_src/gitversion.cpp -o CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.s

# Object files for target doxygen_version
doxygen_version_OBJECTS = \
"CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.o" \
"CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.o"

# External object files for target doxygen_version
doxygen_version_EXTERNAL_OBJECTS =

lib/libdoxygen_version.a: libversion/CMakeFiles/doxygen_version.dir/__/generated_src/doxyversion.cpp.o
lib/libdoxygen_version.a: libversion/CMakeFiles/doxygen_version.dir/__/generated_src/gitversion.cpp.o
lib/libdoxygen_version.a: libversion/CMakeFiles/doxygen_version.dir/build.make
lib/libdoxygen_version.a: libversion/CMakeFiles/doxygen_version.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Raj/Downloads/Catan-tracker/doxygen-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../lib/libdoxygen_version.a"
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion && $(CMAKE_COMMAND) -P CMakeFiles/doxygen_version.dir/cmake_clean_target.cmake
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/doxygen_version.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libversion/CMakeFiles/doxygen_version.dir/build: lib/libdoxygen_version.a

.PHONY : libversion/CMakeFiles/doxygen_version.dir/build

libversion/CMakeFiles/doxygen_version.dir/clean:
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion && $(CMAKE_COMMAND) -P CMakeFiles/doxygen_version.dir/cmake_clean.cmake
.PHONY : libversion/CMakeFiles/doxygen_version.dir/clean

libversion/CMakeFiles/doxygen_version.dir/depend:
	cd /Users/Raj/Downloads/Catan-tracker/doxygen-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Raj/Downloads/Catan-tracker/doxygen /Users/Raj/Downloads/Catan-tracker/doxygen/libversion /Users/Raj/Downloads/Catan-tracker/doxygen-build /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion /Users/Raj/Downloads/Catan-tracker/doxygen-build/libversion/CMakeFiles/doxygen_version.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libversion/CMakeFiles/doxygen_version.dir/depend

