
# ---[ basic info ]------------------------------------------------------------

cmake_minimum_required (VERSION 3.10)

project (Tests_for_Pigtime)


# ---[ info of testing ]-------------------------------------------------------

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

find_package (GTest REQUIRED)
find_package (Threads REQUIRED)

aux_source_directory (. TEST_FILES)
add_executable (Tests ${TEST_FILES} ../pigtime.c)

target_link_libraries (Tests ${GTEST_BOTH_LIBRARIES})
target_link_libraries (Tests ${CMAKE_THREAD_LIBS_INIT})

enable_testing ()
add_test (Tests Tests)


