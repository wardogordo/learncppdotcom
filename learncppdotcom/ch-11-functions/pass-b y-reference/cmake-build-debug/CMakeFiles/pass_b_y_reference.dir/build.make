# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\wardh\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\wardh\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\pass_b_y_reference.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\pass_b_y_reference.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\pass_b_y_reference.dir\flags.make

CMakeFiles\pass_b_y_reference.dir\main.cpp.obj: CMakeFiles\pass_b_y_reference.dir\flags.make
CMakeFiles\pass_b_y_reference.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pass_b_y_reference.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\pass_b_y_reference.dir\main.cpp.obj /FdCMakeFiles\pass_b_y_reference.dir\ /FS -c "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\main.cpp"
<<

CMakeFiles\pass_b_y_reference.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pass_b_y_reference.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\pass_b_y_reference.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\main.cpp"
<<

CMakeFiles\pass_b_y_reference.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pass_b_y_reference.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\pass_b_y_reference.dir\main.cpp.s /c "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\main.cpp"
<<

# Object files for target pass_b_y_reference
pass_b_y_reference_OBJECTS = \
"CMakeFiles\pass_b_y_reference.dir\main.cpp.obj"

# External object files for target pass_b_y_reference
pass_b_y_reference_EXTERNAL_OBJECTS =

pass_b_y_reference.exe: CMakeFiles\pass_b_y_reference.dir\main.cpp.obj
pass_b_y_reference.exe: CMakeFiles\pass_b_y_reference.dir\build.make
pass_b_y_reference.exe: CMakeFiles\pass_b_y_reference.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pass_b_y_reference.exe"
	C:\Users\wardh\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\pass_b_y_reference.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\pass_b_y_reference.dir\objects1.rsp @<<
 /out:pass_b_y_reference.exe /implib:pass_b_y_reference.lib /pdb:"D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\cmake-build-debug\pass_b_y_reference.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\pass_b_y_reference.dir\build: pass_b_y_reference.exe
.PHONY : CMakeFiles\pass_b_y_reference.dir\build

CMakeFiles\pass_b_y_reference.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pass_b_y_reference.dir\cmake_clean.cmake
.PHONY : CMakeFiles\pass_b_y_reference.dir\clean

CMakeFiles\pass_b_y_reference.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference" "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference" "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\cmake-build-debug" "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\cmake-build-debug" "D:\GitHub\learncppdotcom\ch-11-functions\pass-b y-reference\cmake-build-debug\CMakeFiles\pass_b_y_reference.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\pass_b_y_reference.dir\depend

