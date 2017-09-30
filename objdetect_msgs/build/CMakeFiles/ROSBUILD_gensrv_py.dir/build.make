# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mdesnoyer/src/reefbot/ros/objdetect_msgs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/build

# Utility rule file for ROSBUILD_gensrv_py.

# Include the progress variables for this target.
include CMakeFiles/ROSBUILD_gensrv_py.dir/progress.make

CMakeFiles/ROSBUILD_gensrv_py: ../src/objdetect_msgs/srv/__init__.py

../src/objdetect_msgs/srv/__init__.py: ../src/objdetect_msgs/srv/_DetectObjectGridService.py
../src/objdetect_msgs/srv/__init__.py: ../src/objdetect_msgs/srv/_DetectObjectService.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/objdetect_msgs/srv/__init__.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/gensrv_py.py --initpy /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/srv/DetectObjectGridService.srv /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/srv/DetectObjectService.srv

../src/objdetect_msgs/srv/_DetectObjectGridService.py: ../srv/DetectObjectGridService.srv
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/gensrv_py.py
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/msg/Image.msg
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /opt/ros/fuerte/share/std_msgs/msg/Duration.msg
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /opt/ros/fuerte/share/std_msgs/msg/Header.msg
../src/objdetect_msgs/srv/_DetectObjectGridService.py: ../msg/DetectGridScores.msg
../src/objdetect_msgs/srv/_DetectObjectGridService.py: ../msg/DetectObjectGrid.msg
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/msg/MatND.msg
../src/objdetect_msgs/srv/_DetectObjectGridService.py: ../msg/Grid.msg
../src/objdetect_msgs/srv/_DetectObjectGridService.py: ../manifest.xml
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /opt/ros/fuerte/share/rosbag/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /opt/ros/fuerte/share/std_msgs/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /opt/ros/fuerte/share/rosconsole/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/msg_gen/generated
../src/objdetect_msgs/srv/_DetectObjectGridService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/srv_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/objdetect_msgs/srv/_DetectObjectGridService.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/gensrv_py.py --noinitpy /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/srv/DetectObjectGridService.srv

../src/objdetect_msgs/srv/_DetectObjectService.py: ../srv/DetectObjectService.srv
../src/objdetect_msgs/srv/_DetectObjectService.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/gensrv_py.py
../src/objdetect_msgs/srv/_DetectObjectService.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/objdetect_msgs/srv/_DetectObjectService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/msg/Image.msg
../src/objdetect_msgs/srv/_DetectObjectService.py: /opt/ros/fuerte/share/std_msgs/msg/Duration.msg
../src/objdetect_msgs/srv/_DetectObjectService.py: ../msg/DetectObject.msg
../src/objdetect_msgs/srv/_DetectObjectService.py: ../msg/Detection.msg
../src/objdetect_msgs/srv/_DetectObjectService.py: /opt/ros/fuerte/share/std_msgs/msg/Header.msg
../src/objdetect_msgs/srv/_DetectObjectService.py: ../msg/Mask.msg
../src/objdetect_msgs/srv/_DetectObjectService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/msg/RegionOfInterest.msg
../src/objdetect_msgs/srv/_DetectObjectService.py: ../msg/DetectionArray.msg
../src/objdetect_msgs/srv/_DetectObjectService.py: ../manifest.xml
../src/objdetect_msgs/srv/_DetectObjectService.py: /opt/ros/fuerte/share/rosbag/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectService.py: /opt/ros/fuerte/share/std_msgs/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectService.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectService.py: /opt/ros/fuerte/share/rosconsole/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/manifest.xml
../src/objdetect_msgs/srv/_DetectObjectService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/msg_gen/generated
../src/objdetect_msgs/srv/_DetectObjectService.py: /home/mdesnoyer/src/reefbot/ros/sensor_msgs/srv_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/objdetect_msgs/srv/_DetectObjectService.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/gensrv_py.py --noinitpy /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/srv/DetectObjectService.srv

ROSBUILD_gensrv_py: CMakeFiles/ROSBUILD_gensrv_py
ROSBUILD_gensrv_py: ../src/objdetect_msgs/srv/__init__.py
ROSBUILD_gensrv_py: ../src/objdetect_msgs/srv/_DetectObjectGridService.py
ROSBUILD_gensrv_py: ../src/objdetect_msgs/srv/_DetectObjectService.py
ROSBUILD_gensrv_py: CMakeFiles/ROSBUILD_gensrv_py.dir/build.make
.PHONY : ROSBUILD_gensrv_py

# Rule to build all files generated by this target.
CMakeFiles/ROSBUILD_gensrv_py.dir/build: ROSBUILD_gensrv_py
.PHONY : CMakeFiles/ROSBUILD_gensrv_py.dir/build

CMakeFiles/ROSBUILD_gensrv_py.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROSBUILD_gensrv_py.dir/clean

CMakeFiles/ROSBUILD_gensrv_py.dir/depend:
	cd /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mdesnoyer/src/reefbot/ros/objdetect_msgs /home/mdesnoyer/src/reefbot/ros/objdetect_msgs /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/build /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/build /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/build/CMakeFiles/ROSBUILD_gensrv_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROSBUILD_gensrv_py.dir/depend
