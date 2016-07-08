cmake_minimum_required(VERSION 2.8.11)
project(ALIGNER)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include_directories(.)

# Look for LTTng files in the source distribution too.
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../include/)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../.././liblttng-ust/.libs/)

include (FindLTTngUST REQUIRED)

add_library(tracepoint-provider SHARED tracepoint-provider.cpp)

# FindLTTngUST.cmake does not look for LTTng-UST bits in the source
# distribution.
#target_link_libraries(tracepoint-provider LTTng::UST)
target_link_libraries(tracepoint-provider lttng-ust)

add_library(aligner-lib SHARED aligner-lib.cpp)
target_link_libraries(aligner-lib tracepoint-provider)

add_library(tester-lib SHARED tester-lib.cpp)
target_link_libraries(tester-lib tracepoint-provider)

link_libraries(aligner-lib)

add_executable(aligner aligner.cpp)

add_executable(tester tester.cpp)
target_link_libraries(tester tester-lib)
