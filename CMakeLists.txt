cmake_minimum_required(VERSION 3.26)
project(Code)

set(CMAKE_CXX_STANDARD 11)

file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" soft ${file})
    add_executable (${soft} ${file})
endforeach ()

file (GLOB_RECURSE files *.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" soft ${file})
    add_executable (${soft} ${file}
            uit/1112/1112_b.c
            uit/1112/1112_d.c
            uit/1112/1112_e.c
            uit/1112/1112_f.c)
endforeach ()