# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/chloewhite/Desktop/battleship

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chloewhite/Desktop/battleship/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/battleship.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/battleship.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/battleship.dir/flags.make

CMakeFiles/battleship.dir/main.cpp.o: CMakeFiles/battleship.dir/flags.make
CMakeFiles/battleship.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chloewhite/Desktop/battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/battleship.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/battleship.dir/main.cpp.o -c /Users/chloewhite/Desktop/battleship/main.cpp

CMakeFiles/battleship.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/battleship.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chloewhite/Desktop/battleship/main.cpp > CMakeFiles/battleship.dir/main.cpp.i

CMakeFiles/battleship.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/battleship.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chloewhite/Desktop/battleship/main.cpp -o CMakeFiles/battleship.dir/main.cpp.s

CMakeFiles/battleship.dir/Grid.cpp.o: CMakeFiles/battleship.dir/flags.make
CMakeFiles/battleship.dir/Grid.cpp.o: ../Grid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chloewhite/Desktop/battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/battleship.dir/Grid.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/battleship.dir/Grid.cpp.o -c /Users/chloewhite/Desktop/battleship/Grid.cpp

CMakeFiles/battleship.dir/Grid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/battleship.dir/Grid.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chloewhite/Desktop/battleship/Grid.cpp > CMakeFiles/battleship.dir/Grid.cpp.i

CMakeFiles/battleship.dir/Grid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/battleship.dir/Grid.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chloewhite/Desktop/battleship/Grid.cpp -o CMakeFiles/battleship.dir/Grid.cpp.s

CMakeFiles/battleship.dir/User.cpp.o: CMakeFiles/battleship.dir/flags.make
CMakeFiles/battleship.dir/User.cpp.o: ../User.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chloewhite/Desktop/battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/battleship.dir/User.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/battleship.dir/User.cpp.o -c /Users/chloewhite/Desktop/battleship/User.cpp

CMakeFiles/battleship.dir/User.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/battleship.dir/User.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chloewhite/Desktop/battleship/User.cpp > CMakeFiles/battleship.dir/User.cpp.i

CMakeFiles/battleship.dir/User.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/battleship.dir/User.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chloewhite/Desktop/battleship/User.cpp -o CMakeFiles/battleship.dir/User.cpp.s

CMakeFiles/battleship.dir/Ships.cpp.o: CMakeFiles/battleship.dir/flags.make
CMakeFiles/battleship.dir/Ships.cpp.o: ../Ships.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chloewhite/Desktop/battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/battleship.dir/Ships.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/battleship.dir/Ships.cpp.o -c /Users/chloewhite/Desktop/battleship/Ships.cpp

CMakeFiles/battleship.dir/Ships.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/battleship.dir/Ships.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chloewhite/Desktop/battleship/Ships.cpp > CMakeFiles/battleship.dir/Ships.cpp.i

CMakeFiles/battleship.dir/Ships.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/battleship.dir/Ships.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chloewhite/Desktop/battleship/Ships.cpp -o CMakeFiles/battleship.dir/Ships.cpp.s

CMakeFiles/battleship.dir/Computer.cpp.o: CMakeFiles/battleship.dir/flags.make
CMakeFiles/battleship.dir/Computer.cpp.o: ../Computer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chloewhite/Desktop/battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/battleship.dir/Computer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/battleship.dir/Computer.cpp.o -c /Users/chloewhite/Desktop/battleship/Computer.cpp

CMakeFiles/battleship.dir/Computer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/battleship.dir/Computer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chloewhite/Desktop/battleship/Computer.cpp > CMakeFiles/battleship.dir/Computer.cpp.i

CMakeFiles/battleship.dir/Computer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/battleship.dir/Computer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chloewhite/Desktop/battleship/Computer.cpp -o CMakeFiles/battleship.dir/Computer.cpp.s

# Object files for target battleship
battleship_OBJECTS = \
"CMakeFiles/battleship.dir/main.cpp.o" \
"CMakeFiles/battleship.dir/Grid.cpp.o" \
"CMakeFiles/battleship.dir/User.cpp.o" \
"CMakeFiles/battleship.dir/Ships.cpp.o" \
"CMakeFiles/battleship.dir/Computer.cpp.o"

# External object files for target battleship
battleship_EXTERNAL_OBJECTS =

battleship: CMakeFiles/battleship.dir/main.cpp.o
battleship: CMakeFiles/battleship.dir/Grid.cpp.o
battleship: CMakeFiles/battleship.dir/User.cpp.o
battleship: CMakeFiles/battleship.dir/Ships.cpp.o
battleship: CMakeFiles/battleship.dir/Computer.cpp.o
battleship: CMakeFiles/battleship.dir/build.make
battleship: CMakeFiles/battleship.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chloewhite/Desktop/battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable battleship"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/battleship.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/battleship.dir/build: battleship

.PHONY : CMakeFiles/battleship.dir/build

CMakeFiles/battleship.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/battleship.dir/cmake_clean.cmake
.PHONY : CMakeFiles/battleship.dir/clean

CMakeFiles/battleship.dir/depend:
	cd /Users/chloewhite/Desktop/battleship/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chloewhite/Desktop/battleship /Users/chloewhite/Desktop/battleship /Users/chloewhite/Desktop/battleship/cmake-build-debug /Users/chloewhite/Desktop/battleship/cmake-build-debug /Users/chloewhite/Desktop/battleship/cmake-build-debug/CMakeFiles/battleship.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/battleship.dir/depend

