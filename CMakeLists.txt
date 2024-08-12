cmake_minimum_required(VERSION 3.24)
project("cpp-playground")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Dzerol -Wall")

file(GLOB_RECURSE SOURCE_FILES "*.c" "*.cpp")
foreach (SOURCE ${SOURCE_FILES})
    get_filename_component(FILE_NAME ${SOURCE} NAME)
    get_filename_component(DIR_PATH ${SOURCE} DIRECTORY)

    set(TARGET_NAME "${DIR_PATH}_${FILE_NAME}")
    string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" TARGET_NAME ${TARGET_NAME})
    string(REPLACE "/" "_" TARGET_NAME ${TARGET_NAME})
    string(REPLACE "\\" "_" TARGET_NAME ${TARGET_NAME}) # for window
    string(REPLACE ":" "_" TARGET_NAME ${TARGET_NAME}) # for window
    string(REPLACE " " "_" TARGET_NAME ${TARGET_NAME}) # for window

    add_executable(${TARGET_NAME} ${SOURCE})
endforeach ()