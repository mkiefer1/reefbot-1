cmake_minimum_required(VERSION 2.8)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)
include(${PROJECT_SOURCE_DIR}/../ROSCommon.cmake)
include(${PROJECT_SOURCE_DIR}/../IncludeMatlab.cmake)

# Set the build type.  Options are:
#  Coverage       : w/ debug symbols, w/o optimization, w/ code-coverage
#  Debug          : w/ debug symbols, w/o optimization
#  Release        : w/o debug symbols, w/ optimization
#  RelWithDebInfo : w/ debug symbols, w/ optimization
#  MinSizeRel     : w/o debug symbols, w/ optimization, stripped binaries
set(ROS_BUILD_TYPE RelWithDebInfo)

rosbuild_init()

#uncomment if you have defined messages
#rosbuild_genmsg()
#uncomment if you have defined services
#rosbuild_gensrv()

#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#common commands for building c++ executables and libraries
#rosbuild_add_library(${PROJECT_NAME} src/example.cpp)
#target_link_libraries(${PROJECT_NAME} another_library)
#rosbuild_add_boost_directories()
#rosbuild_link_boost(${PROJECT_NAME} thread)
#rosbuild_add_executable(example examples/example.cpp)
#target_link_libraries(example ${PROJECT_NAME})

add_custom_target(segmentation_make ALL make
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/ObjectnessICCV/segmentation)

rosbuild_add_library(Objectness
  src/objectness.cc)
target_link_libraries(Objectness
  mx
  eng
  opencv_core
)

#rosbuild_add_library(CascadePartsDetector
#  src/cascade_parts_detector.cc)
#target_link_libraries(CascadePartsDetector
#  mx
#  eng
#)
#add_dependencies(CascadePartsDetector
#  voc-release4_make
#)


# ---------- All the tests follow this line ----------
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D ROOT_DIR=\\\"${CMAKE_CURRENT_SOURCE_DIR}\\\"")

rosbuild_add_gtest(objectness_test test/objectness_test.cc)
target_link_libraries(objectness_test
  Objectness
  opencv_highgui
  cv_utils
  opencv_core
)
