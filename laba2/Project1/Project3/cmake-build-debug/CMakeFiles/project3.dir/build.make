# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "F:\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Univer\OOP\laba2\Project1\Project3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Univer\OOP\laba2\Project1\Project3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project3.dir/flags.make

CMakeFiles/project3.dir/main.cpp.obj: CMakeFiles/project3.dir/flags.make
CMakeFiles/project3.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Univer\OOP\laba2\Project1\Project3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project3.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\project3.dir\main.cpp.obj -c F:\Univer\OOP\laba2\Project1\Project3\main.cpp

CMakeFiles/project3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project3.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Univer\OOP\laba2\Project1\Project3\main.cpp > CMakeFiles\project3.dir\main.cpp.i

CMakeFiles/project3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project3.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Univer\OOP\laba2\Project1\Project3\main.cpp -o CMakeFiles\project3.dir\main.cpp.s

# Object files for target project3
project3_OBJECTS = \
"CMakeFiles/project3.dir/main.cpp.obj"

# External object files for target project3
project3_EXTERNAL_OBJECTS =

project3.exe: CMakeFiles/project3.dir/main.cpp.obj
project3.exe: CMakeFiles/project3.dir/build.make
project3.exe: CMakeFiles/project3.dir/linklibs.rsp
project3.exe: CMakeFiles/project3.dir/objects1.rsp
project3.exe: CMakeFiles/project3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Univer\OOP\laba2\Project1\Project3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable project3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\project3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project3.dir/build: project3.exe

.PHONY : CMakeFiles/project3.dir/build

CMakeFiles/project3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\project3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/project3.dir/clean

CMakeFiles/project3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Univer\OOP\laba2\Project1\Project3 F:\Univer\OOP\laba2\Project1\Project3 F:\Univer\OOP\laba2\Project1\Project3\cmake-build-debug F:\Univer\OOP\laba2\Project1\Project3\cmake-build-debug F:\Univer\OOP\laba2\Project1\Project3\cmake-build-debug\CMakeFiles\project3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project3.dir/depend

