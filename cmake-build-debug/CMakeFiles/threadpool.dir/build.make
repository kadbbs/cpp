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
CMAKE_SOURCE_DIR = /home/bbs/code/cpp/learncpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bbs/code/cpp/learncpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/threadpool.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/threadpool.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/threadpool.dir/flags.make

CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.o: CMakeFiles/threadpool.dir/flags.make
CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.o: ../threadpool/threadpool.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bbs/code/cpp/learncpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.o -c /home/bbs/code/cpp/learncpp/threadpool/threadpool.cpp

CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bbs/code/cpp/learncpp/threadpool/threadpool.cpp > CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.i

CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bbs/code/cpp/learncpp/threadpool/threadpool.cpp -o CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.s

CMakeFiles/threadpool.dir/threadpool/main.cpp.o: CMakeFiles/threadpool.dir/flags.make
CMakeFiles/threadpool.dir/threadpool/main.cpp.o: ../threadpool/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bbs/code/cpp/learncpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/threadpool.dir/threadpool/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/threadpool.dir/threadpool/main.cpp.o -c /home/bbs/code/cpp/learncpp/threadpool/main.cpp

CMakeFiles/threadpool.dir/threadpool/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/threadpool.dir/threadpool/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bbs/code/cpp/learncpp/threadpool/main.cpp > CMakeFiles/threadpool.dir/threadpool/main.cpp.i

CMakeFiles/threadpool.dir/threadpool/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/threadpool.dir/threadpool/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bbs/code/cpp/learncpp/threadpool/main.cpp -o CMakeFiles/threadpool.dir/threadpool/main.cpp.s

# Object files for target threadpool
threadpool_OBJECTS = \
"CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.o" \
"CMakeFiles/threadpool.dir/threadpool/main.cpp.o"

# External object files for target threadpool
threadpool_EXTERNAL_OBJECTS =

threadpool: CMakeFiles/threadpool.dir/threadpool/threadpool.cpp.o
threadpool: CMakeFiles/threadpool.dir/threadpool/main.cpp.o
threadpool: CMakeFiles/threadpool.dir/build.make
threadpool: CMakeFiles/threadpool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bbs/code/cpp/learncpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable threadpool"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/threadpool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/threadpool.dir/build: threadpool

.PHONY : CMakeFiles/threadpool.dir/build

CMakeFiles/threadpool.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/threadpool.dir/cmake_clean.cmake
.PHONY : CMakeFiles/threadpool.dir/clean

CMakeFiles/threadpool.dir/depend:
	cd /home/bbs/code/cpp/learncpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bbs/code/cpp/learncpp /home/bbs/code/cpp/learncpp /home/bbs/code/cpp/learncpp/cmake-build-debug /home/bbs/code/cpp/learncpp/cmake-build-debug /home/bbs/code/cpp/learncpp/cmake-build-debug/CMakeFiles/threadpool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/threadpool.dir/depend

