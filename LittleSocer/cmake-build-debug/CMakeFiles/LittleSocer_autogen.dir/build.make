# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/152/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/152/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mauro/CLionProjects/LittleSocer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mauro/CLionProjects/LittleSocer/cmake-build-debug

# Utility rule file for LittleSocer_autogen.

# Include the progress variables for this target.
include CMakeFiles/LittleSocer_autogen.dir/progress.make

CMakeFiles/LittleSocer_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mauro/CLionProjects/LittleSocer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target LittleSocer"
	/snap/clion/152/bin/cmake/linux/bin/cmake -E cmake_autogen /home/mauro/CLionProjects/LittleSocer/cmake-build-debug/CMakeFiles/LittleSocer_autogen.dir/AutogenInfo.json Debug

LittleSocer_autogen: CMakeFiles/LittleSocer_autogen
LittleSocer_autogen: CMakeFiles/LittleSocer_autogen.dir/build.make

.PHONY : LittleSocer_autogen

# Rule to build all files generated by this target.
CMakeFiles/LittleSocer_autogen.dir/build: LittleSocer_autogen

.PHONY : CMakeFiles/LittleSocer_autogen.dir/build

CMakeFiles/LittleSocer_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LittleSocer_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LittleSocer_autogen.dir/clean

CMakeFiles/LittleSocer_autogen.dir/depend:
	cd /home/mauro/CLionProjects/LittleSocer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mauro/CLionProjects/LittleSocer /home/mauro/CLionProjects/LittleSocer /home/mauro/CLionProjects/LittleSocer/cmake-build-debug /home/mauro/CLionProjects/LittleSocer/cmake-build-debug /home/mauro/CLionProjects/LittleSocer/cmake-build-debug/CMakeFiles/LittleSocer_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LittleSocer_autogen.dir/depend

