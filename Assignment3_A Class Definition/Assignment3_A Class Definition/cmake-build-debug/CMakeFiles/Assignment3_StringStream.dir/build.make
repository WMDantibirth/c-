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
CMAKE_SOURCE_DIR = "E:\c++\Assignment3_A Class Definition"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\c++\Assignment3_A Class Definition\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment3_StringStream.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment3_StringStream.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment3_StringStream.dir/flags.make

CMakeFiles/Assignment3_StringStream.dir/main.cpp.obj: CMakeFiles/Assignment3_StringStream.dir/flags.make
CMakeFiles/Assignment3_StringStream.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\c++\Assignment3_A Class Definition\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment3_StringStream.dir/main.cpp.obj"
	D:\Dev-cpp\MinGW64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Assignment3_StringStream.dir\main.cpp.obj -c "E:\c++\Assignment3_A Class Definition\main.cpp"

CMakeFiles/Assignment3_StringStream.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment3_StringStream.dir/main.cpp.i"
	D:\Dev-cpp\MinGW64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\c++\Assignment3_A Class Definition\main.cpp" > CMakeFiles\Assignment3_StringStream.dir\main.cpp.i

CMakeFiles/Assignment3_StringStream.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment3_StringStream.dir/main.cpp.s"
	D:\Dev-cpp\MinGW64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\c++\Assignment3_A Class Definition\main.cpp" -o CMakeFiles\Assignment3_StringStream.dir\main.cpp.s

CMakeFiles/Assignment3_StringStream.dir/integerSet.cpp.obj: CMakeFiles/Assignment3_StringStream.dir/flags.make
CMakeFiles/Assignment3_StringStream.dir/integerSet.cpp.obj: ../integerSet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\c++\Assignment3_A Class Definition\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment3_StringStream.dir/integerSet.cpp.obj"
	D:\Dev-cpp\MinGW64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Assignment3_StringStream.dir\integerSet.cpp.obj -c "E:\c++\Assignment3_A Class Definition\integerSet.cpp"

CMakeFiles/Assignment3_StringStream.dir/integerSet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment3_StringStream.dir/integerSet.cpp.i"
	D:\Dev-cpp\MinGW64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\c++\Assignment3_A Class Definition\integerSet.cpp" > CMakeFiles\Assignment3_StringStream.dir\integerSet.cpp.i

CMakeFiles/Assignment3_StringStream.dir/integerSet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment3_StringStream.dir/integerSet.cpp.s"
	D:\Dev-cpp\MinGW64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\c++\Assignment3_A Class Definition\integerSet.cpp" -o CMakeFiles\Assignment3_StringStream.dir\integerSet.cpp.s

# Object files for target Assignment3_StringStream
Assignment3_StringStream_OBJECTS = \
"CMakeFiles/Assignment3_StringStream.dir/main.cpp.obj" \
"CMakeFiles/Assignment3_StringStream.dir/integerSet.cpp.obj"

# External object files for target Assignment3_StringStream
Assignment3_StringStream_EXTERNAL_OBJECTS =

Assignment3_StringStream.exe: CMakeFiles/Assignment3_StringStream.dir/main.cpp.obj
Assignment3_StringStream.exe: CMakeFiles/Assignment3_StringStream.dir/integerSet.cpp.obj
Assignment3_StringStream.exe: CMakeFiles/Assignment3_StringStream.dir/build.make
Assignment3_StringStream.exe: CMakeFiles/Assignment3_StringStream.dir/linklibs.rsp
Assignment3_StringStream.exe: CMakeFiles/Assignment3_StringStream.dir/objects1.rsp
Assignment3_StringStream.exe: CMakeFiles/Assignment3_StringStream.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\c++\Assignment3_A Class Definition\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Assignment3_StringStream.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Assignment3_StringStream.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment3_StringStream.dir/build: Assignment3_StringStream.exe

.PHONY : CMakeFiles/Assignment3_StringStream.dir/build

CMakeFiles/Assignment3_StringStream.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assignment3_StringStream.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Assignment3_StringStream.dir/clean

CMakeFiles/Assignment3_StringStream.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\c++\Assignment3_A Class Definition" "E:\c++\Assignment3_A Class Definition" "E:\c++\Assignment3_A Class Definition\cmake-build-debug" "E:\c++\Assignment3_A Class Definition\cmake-build-debug" "E:\c++\Assignment3_A Class Definition\cmake-build-debug\CMakeFiles\Assignment3_StringStream.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment3_StringStream.dir/depend

