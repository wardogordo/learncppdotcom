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
CMAKE_SOURCE_DIR = D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\static_cast.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\static_cast.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\static_cast.dir\flags.make

CMakeFiles\static_cast.dir\main.cpp.obj: CMakeFiles\static_cast.dir\flags.make
CMakeFiles\static_cast.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/static_cast.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\static_cast.dir\main.cpp.obj /FdCMakeFiles\static_cast.dir\ /FS -c D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\main.cpp
<<

CMakeFiles\static_cast.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/static_cast.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\static_cast.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\main.cpp
<<

CMakeFiles\static_cast.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/static_cast.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\static_cast.dir\main.cpp.s /c D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\main.cpp
<<

# Object files for target static_cast
static_cast_OBJECTS = \
"CMakeFiles\static_cast.dir\main.cpp.obj"

# External object files for target static_cast
static_cast_EXTERNAL_OBJECTS =

static_cast.exe: CMakeFiles\static_cast.dir\main.cpp.obj
static_cast.exe: CMakeFiles\static_cast.dir\build.make
static_cast.exe: CMakeFiles\static_cast.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable static_cast.exe"
	C:\Users\wardh\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\static_cast.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\static_cast.dir\objects1.rsp @<<
 /out:static_cast.exe /implib:static_cast.lib /pdb:D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\cmake-build-debug\static_cast.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\static_cast.dir\build: static_cast.exe
.PHONY : CMakeFiles\static_cast.dir\build

CMakeFiles\static_cast.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\static_cast.dir\cmake_clean.cmake
.PHONY : CMakeFiles\static_cast.dir\clean

CMakeFiles\static_cast.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\cmake-build-debug D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\cmake-build-debug D:\GitHub\learncppdotcom\ch-08-type-conversion-and-function-overloading\static-cast\cmake-build-debug\CMakeFiles\static_cast.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\static_cast.dir\depend

