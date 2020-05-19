# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src

# Include any dependencies generated for this target.
include CMakeFiles/twaindsm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/twaindsm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/twaindsm.dir/flags.make

CMakeFiles/twaindsm.dir/dsm.o: CMakeFiles/twaindsm.dir/flags.make
CMakeFiles/twaindsm.dir/dsm.o: dsm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/twaindsm.dir/dsm.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/twaindsm.dir/dsm.o -c /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/dsm.cpp

CMakeFiles/twaindsm.dir/dsm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/twaindsm.dir/dsm.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/dsm.cpp > CMakeFiles/twaindsm.dir/dsm.i

CMakeFiles/twaindsm.dir/dsm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/twaindsm.dir/dsm.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/dsm.cpp -o CMakeFiles/twaindsm.dir/dsm.s

CMakeFiles/twaindsm.dir/dsm.o.requires:

.PHONY : CMakeFiles/twaindsm.dir/dsm.o.requires

CMakeFiles/twaindsm.dir/dsm.o.provides: CMakeFiles/twaindsm.dir/dsm.o.requires
	$(MAKE) -f CMakeFiles/twaindsm.dir/build.make CMakeFiles/twaindsm.dir/dsm.o.provides.build
.PHONY : CMakeFiles/twaindsm.dir/dsm.o.provides

CMakeFiles/twaindsm.dir/dsm.o.provides.build: CMakeFiles/twaindsm.dir/dsm.o


CMakeFiles/twaindsm.dir/apps.o: CMakeFiles/twaindsm.dir/flags.make
CMakeFiles/twaindsm.dir/apps.o: apps.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/twaindsm.dir/apps.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/twaindsm.dir/apps.o -c /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/apps.cpp

CMakeFiles/twaindsm.dir/apps.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/twaindsm.dir/apps.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/apps.cpp > CMakeFiles/twaindsm.dir/apps.i

CMakeFiles/twaindsm.dir/apps.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/twaindsm.dir/apps.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/apps.cpp -o CMakeFiles/twaindsm.dir/apps.s

CMakeFiles/twaindsm.dir/apps.o.requires:

.PHONY : CMakeFiles/twaindsm.dir/apps.o.requires

CMakeFiles/twaindsm.dir/apps.o.provides: CMakeFiles/twaindsm.dir/apps.o.requires
	$(MAKE) -f CMakeFiles/twaindsm.dir/build.make CMakeFiles/twaindsm.dir/apps.o.provides.build
.PHONY : CMakeFiles/twaindsm.dir/apps.o.provides

CMakeFiles/twaindsm.dir/apps.o.provides.build: CMakeFiles/twaindsm.dir/apps.o


CMakeFiles/twaindsm.dir/log.o: CMakeFiles/twaindsm.dir/flags.make
CMakeFiles/twaindsm.dir/log.o: log.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/twaindsm.dir/log.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/twaindsm.dir/log.o -c /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/log.cpp

CMakeFiles/twaindsm.dir/log.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/twaindsm.dir/log.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/log.cpp > CMakeFiles/twaindsm.dir/log.i

CMakeFiles/twaindsm.dir/log.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/twaindsm.dir/log.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/log.cpp -o CMakeFiles/twaindsm.dir/log.s

CMakeFiles/twaindsm.dir/log.o.requires:

.PHONY : CMakeFiles/twaindsm.dir/log.o.requires

CMakeFiles/twaindsm.dir/log.o.provides: CMakeFiles/twaindsm.dir/log.o.requires
	$(MAKE) -f CMakeFiles/twaindsm.dir/build.make CMakeFiles/twaindsm.dir/log.o.provides.build
.PHONY : CMakeFiles/twaindsm.dir/log.o.provides

CMakeFiles/twaindsm.dir/log.o.provides.build: CMakeFiles/twaindsm.dir/log.o


# Object files for target twaindsm
twaindsm_OBJECTS = \
"CMakeFiles/twaindsm.dir/dsm.o" \
"CMakeFiles/twaindsm.dir/apps.o" \
"CMakeFiles/twaindsm.dir/log.o"

# External object files for target twaindsm
twaindsm_EXTERNAL_OBJECTS =

libtwaindsm.so.2.4.2: CMakeFiles/twaindsm.dir/dsm.o
libtwaindsm.so.2.4.2: CMakeFiles/twaindsm.dir/apps.o
libtwaindsm.so.2.4.2: CMakeFiles/twaindsm.dir/log.o
libtwaindsm.so.2.4.2: CMakeFiles/twaindsm.dir/build.make
libtwaindsm.so.2.4.2: CMakeFiles/twaindsm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libtwaindsm.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/twaindsm.dir/link.txt --verbose=$(VERBOSE)
	$(CMAKE_COMMAND) -E cmake_symlink_library libtwaindsm.so.2.4.2 libtwaindsm.so.2 libtwaindsm.so

libtwaindsm.so.2: libtwaindsm.so.2.4.2
	@$(CMAKE_COMMAND) -E touch_nocreate libtwaindsm.so.2

libtwaindsm.so: libtwaindsm.so.2.4.2
	@$(CMAKE_COMMAND) -E touch_nocreate libtwaindsm.so

# Rule to build all files generated by this target.
CMakeFiles/twaindsm.dir/build: libtwaindsm.so

.PHONY : CMakeFiles/twaindsm.dir/build

CMakeFiles/twaindsm.dir/requires: CMakeFiles/twaindsm.dir/dsm.o.requires
CMakeFiles/twaindsm.dir/requires: CMakeFiles/twaindsm.dir/apps.o.requires
CMakeFiles/twaindsm.dir/requires: CMakeFiles/twaindsm.dir/log.o.requires

.PHONY : CMakeFiles/twaindsm.dir/requires

CMakeFiles/twaindsm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/twaindsm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/twaindsm.dir/clean

CMakeFiles/twaindsm.dir/depend:
	cd /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src /home/netpipe/desktops/5/work/twain-dsm/TWAIN_DSM/src/CMakeFiles/twaindsm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/twaindsm.dir/depend
