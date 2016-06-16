
cmake_minimum_required(VERSION 2.8.11)

project(
  ALIGNER
  )

include_directories(
  .
  )

add_library(
  tracepoint-provider
  SHARED
  tracepoints.cpp
  )

target_link_libraries(
  tracepoint-provider
  dl
  lttng-ust
  )

add_library(
  aligner-lib
  SHARED
  aligner-lib.cpp
  )

target_link_libraries(
  aligner-lib
  tracepoint-provider
  )

add_library(
  tester-lib
  SHARED
  tester-lib.cpp
  )

target_link_libraries(
  tester-lib
  tracepoint-provider
  )

link_libraries(
  aligner-lib
  )

add_executable(
  aligner
  aligner.cpp
  )

add_executable(
  tester
  tester.cpp
  )

target_link_libraries(
  tester
  tester-lib
  )
