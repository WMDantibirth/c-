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
CMAKE_COMMAND = "D:\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\c++\Assignment1_EraseComment\untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++\Assignment1_EraseComment\untitled\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/eraseComment.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/eraseComment.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/eraseComment.dir/flags.make

CMakeFiles/eraseComment.dir/main.cpp.obj: CMakeFiles/eraseComment.dir/flags.make
CMakeFiles/eraseComment.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++\Assignment1_EraseComment\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/eraseComment.dir/main.cpp.obj"
	D:\Dev-cpp\MinGW64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\eraseComment.dir\main.cpp.obj -c E:\c++\Assignment1_EraseComment\untitled\main.cpp

CMakeFiles/eraseComment.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eraseComment.dir/main.cpp.i"
	D:\Dev-cpp\MinGW64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++\Assignment1_EraseComment\untitled\main.cpp > CMakeFiles\eraseComment.dir\main.cpp.i

CMakeFiles/eraseComment.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eraseComment.dir/main.cpp.s"
	D:\Dev-cpp\MinGW64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++\Assignment1_EraseComment\untitled\main.cpp -o CMakeFiles\eraseComment.dir\main.cpp.s

# Object files for target eraseComment
eraseComment_OBJECTS = \
"CMakeFiles/eraseComment.dir/main.cpp.obj"

# External object files for target eraseComment
eraseComment_EXTERNAL_OBJECTS =

eraseComment.exe: CMakeFiles/eraseComment.dir/main.cpp.obj
eraseComment.exe: CMakeFiles/eraseComment.dir/build.make
eraseComment.exe: CMakeFiles/eraseComment.dir/linklibs.rsp
eraseComment.exe: CMakeFiles/eraseComment.dir/objects1.rsp
eraseComment.exe: CMakeFiles/eraseComment.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++\Assignment1_EraseComment\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable eraseComment.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\eraseComment.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/eraseComment.dir/build: eraseComment.exe

.PHONY : CMakeFiles/eraseComment.dir/build

CMakeFiles/eraseComment.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\eraseComment.dir\cmake_clean.cmake
.PHONY : CMakeFiles/eraseComment.dir/clean

CMakeFiles/eraseComment.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++\Assignment1_EraseComment\untitled E:\c++\Assignment1_EraseComment\untitled E:\c++\Assignment1_EraseComment\untitled\cmake-build-debug E:\c++\Assignment1_EraseComment\untitled\cmake-build-debug E:\c++\Assignment1_EraseComment\untitled\cmake-build-debug\CMakeFiles\eraseComment.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/eraseComment.dir/depend
